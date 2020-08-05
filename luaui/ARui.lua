require 'datainfor'
require 'appglobal'
require 'keymap'

-- local mainui = require 'mainui'
-- require 'appglobal'
local ARui = {}
-- local buttondatabase={}
ARui.ui=slua.loadUI('/uilogic/UI/AR_UI.AR_UI',gworld);
-- ARui.ui:AddToViewport(0)
local btn1 = ARui.ui["Button_14"]---@type UButton
local btn2 = ARui.ui["Button_109"]---@type UButton
local btn3 = ARui.ui["Button_274"]---@type UButton
local function ShowARuielement(bshow)
	if(bshow)
	then
		btn1:SetVisibility(0)
		btn2:SetVisibility(0)
		btn3:SetVisibility(0)
	else
		btn1:SetVisibility(1)
		btn2:SetVisibility(1)
		btn3:SetVisibility(1)
	end
end
local canvaspanel = ARui.ui["CanvasPanel_0"]---@type UCanvasPanel
local m_invisibleimage = ARui.ui["m_invisibleimage"]---@type UImage
m_invisibleimage:SetVisibility(1)
local scrolpanel
m_invisibleimage.OnMouseButtonDownEvent:Bind(function(a,b)
	 ShowARuielement(true)
     m_invisibleimage:SetVisibility(1)
     print("sssssssssssssssssssssdfffffffffffffffffd",a,b)
	 scrolpanel:RemoveFromParent()
	--  mscrollbox:SetVisibility(1)
end)
local Slua_BlueprintFunctionLibrary = import('Slua_BlueprintFunctionLibrary')	
local AppBlueprintFunctionLibrary = import('AppBlueprintFunctionLibrary')	
local h_openmap = btn1.OnClicked:Add(function()--back to default background
	MobileUtilsBlueprintLibrary.SetOrientation(1)
    -- addpoplist(characterinfors)World'/Game/fortest/maps/mainmenu.mainmenu'
    ARBlueprintLibrary.StopARSession()
	-- GameplayStatics.OpenLevel(gworld,"/Game/fortest/maps/mainmenu",true,"");  
	ARui.ui:RemoveFromViewport()
	Mainui:AddToViewport(0)
	BParpawn:destroy()

end);
local characterindex=1 --track current selected character index
btn2.OnClicked:Add(function()---scrollplanecontentfill
	ShowARuielement(false)
	scrolpanel = slua.loadUI('/Appplugin/UMG/univerallist/gridpanel1.gridpanel1',gworld);
	local canvaspanelslot = canvaspanel:AddChildToCanvas(scrolpanel)---@type UCanvasPanelSlot
	m_invisibleimage:SetVisibility(0)--used for receive click event to remove this plane
	local Vector2D = import('Vector2D')
	local InMaximumAnchors = Vector2D()
	InMaximumAnchors.X = 0.5
	InMaximumAnchors.Y = 1
	canvaspanelslot:SetMaximum(InMaximumAnchors)
	local InMinimumAnchors = Vector2D()
	InMinimumAnchors.X = 0.5
	InMinimumAnchors.Y = 1
	canvaspanelslot:SetMinimum(InMinimumAnchors)

	local size = Vector2D()
	size.X = 1080
	size.Y = 600
	canvaspanelslot:SetSize(size)
	local alignment = Vector2D()
	alignment.X = 0.5
	alignment.Y = 1
	local position = Vector2D()
	position.X = 0
	position.Y = 0
	canvaspanelslot:SetAlignment(alignment)
	canvaspanelslot:SetPosition(position)
	local m_ScrollBox = scrolpanel['m_ScrollBox']---@type UScrollBox
	local fixbutton_category_table = {}
	for _,v in pairs(characterinfors)
	do
		    local fixbutton_category=slua.loadUI('/Appplugin/UMG/univerallist/fixbutton_category.fixbutton_category',gworld);
			local m_textblock = fixbutton_category['m_textblock']---@type UTextBlock
			local m_button = fixbutton_category['m_button']---@type UButton
			fixbutton_category_table[_]={_,v,m_button}--bind information to button
			print('_: ',_)--index
			m_button.OnClicked:Add(function() 
				for _i,vi in pairs(fixbutton_category_table)
				do
					local InBackgroundColor = FLinearColor()
					InBackgroundColor.A =0
					vi[3]:SetBackgroundColor(InBackgroundColor)
				end
				local InBackgroundColor = FLinearColor()
				InBackgroundColor.A =0.6
				m_button:SetBackgroundColor(InBackgroundColor)
				print(fixbutton_category_table[_][1])--index
	            ARui.fillgridpanel(fixbutton_category_table[_][2].payload)
		    end);
			m_textblock:SetText(v.category)
			local scrollboxslot = m_ScrollBox:AddChild(fixbutton_category)	---@type UScrollBoxSlot
			margin = FMargin()
			margin.Bottom=5
			margin.Left=5
			margin.Right=5
			margin.Top=5
			scrollboxslot:SetPadding(margin)
	end
	print('...               sssssssssssssssssss')
	
	ARui.fillgridpanel(characterinfors[1].payload)--first button selected
	local buttoninfor = fixbutton_category_table[1]--first button related infor
	local InBackgroundColor = FLinearColor()
	InBackgroundColor.A =0.6
	buttoninfor[3]:SetBackgroundColor(InBackgroundColor)

end);
btn3.OnClicked:Add(function()--
	
end);
function ARui.fillgridpanel(playload)
	local mmgridpanel = scrolpanel['m_GridPanel']---@type UGridPanel
	mmgridpanel:ClearChildren()
	local buttondatabase={}
	for _,v in pairs(playload)
	do
		local fixbutton=slua.loadUI('/Appplugin/UMG/univerallist/fixbuttonv1.fixbuttonv1',gworld);
		local fixbuttonimage = fixbutton["m_image"]---@type UImage
		local mbutton = fixbutton["m_button"]
		buttondatabase[fixbutton] = {_,v,mbutton}--bind information to button
		mbutton.OnClicked:Add(function() 
				local datainfor = buttondatabase[fixbutton][2]
				characterindex = buttondatabase[fixbutton][1]--track current selected character index
				print(characterindex)
				for _i,vi in pairs(buttondatabase)
				do
					local InBackgroundColor = FLinearColor()
					InBackgroundColor.A =0
					vi[3]:SetBackgroundColor(InBackgroundColor)-- deselecte all
				end
				local InBackgroundColor = FLinearColor()
				InBackgroundColor.A =0.6
				mbutton:SetBackgroundColor(InBackgroundColor)--indicate select this one
				-- AppBlueprintFunctionLibrary.sendmessage("key_changecharater",datainfor.skeletamesh,datainfor.AnimSequences[1].animsequence)
				local strplayload = json.encode(datainfor)
				AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_changecharater,strplayload)
				print(datainfor.skeletamesh)
				BParpawn:setcheckplane(true)
				-- scrolpanel:RemoveFromParent()	
		end);
		local buttonimage = slua.loadObject(v.imagesource)
		Slua_BlueprintFunctionLibrary.ImagesetTexture(fixbuttonimage,buttonimage)

        local gridslot = mmgridpanel:AddChildtoGrid(fixbutton,math.modf( (_-1) / 5 ),math.fmod( (_-1), 5 ) )---@type UGridSlot
        margin = FMargin()
        margin.Bottom=5
        margin.Left=8
        margin.Right=8
        margin.Top=5
        gridslot:SetPadding(margin)
	end
end
function ARui.addpoplistwidget()
	m_invisibleimage:SetVisibility(0)
	if(scrolpanel~=nil)
	then		
	     scrolpanel:RemoveFromParent()	
	end
    scrolpanel=slua.loadUI('/Appplugin/UMG/univerallist/fixbuttonlist.fixbuttonlist',gworld);
    local mscrollbox = scrolpanel["mScrollBox"]---@type UScrollBox
	mscrollbox:ClearChildren()
	local canvaspanelslot = canvaspanel:AddChildToCanvas(scrolpanel)---@type UCanvasPanelSlot
	local Vector2D = import('Vector2D')
	local size = Vector2D()
	size.X = 200/2
	size.Y = 400/2
	canvaspanelslot:SetSize(size)
	local alignment,position = ARui.position_aligment()
	canvaspanelslot:SetAlignment(alignment)
	canvaspanelslot:SetPosition(position)
end
function ARui.getsignal()
	local wll = import('WidgetLayoutLibrary')---@type UWidgetLayoutLibrary
	-- local position = wll.GetMousePositionOnViewport(gworld)
	local position = ARui.ui["Clickedposition"]-- parent umg : UMG_Event  slua_primary Content 
	local viewportsize = wll.GetViewportSize(gworld)
	local result = (viewportsize/2) - position 
	local sx =0;
	local sy =0;
	if(result.X>=0)
	then
        sx = 1
    else
		sx = -1
	end
	if(result.Y>=0)
	then
        sy = 1
    else
		sy = -1
	end
	return sx,sy,position
end
function ARui.position_aligment()
	local sx,sy,position= ARui.getsignal()
	position.X = position.X +(sx*1)
	position.Y = position.Y +(sy*50)
	local Vector2D = import('Vector2D')
	local alignment = Vector2D()
	if(sx>=0)
	then
		alignment.X = 0
	else
		alignment.X = 1
	end
	if(sy>=0)
	then
		alignment.Y = 0
	else
		alignment.Y = 1
	end
	return alignment,position
end
return ARui