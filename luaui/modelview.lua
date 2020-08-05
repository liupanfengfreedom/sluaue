require 'datainfor'
require 'appglobal'
require 'keymap'

-- local mainui = require 'mainui'
local modelviewui = {}
-- local buttondatabase={}
local Slua_BlueprintFunctionLibrary = import('Slua_BlueprintFunctionLibrary')	
local AppBlueprintFunctionLibrary = import('AppBlueprintFunctionLibrary')	
modelviewui.ui=slua.loadUI('/uilogic/UI/modelview.modelview',gworld);
-- modelviewui.ui:AddToViewport(0)
cppmessagereceiver = slua.createDelegate(
	 function(str)
		print(str)
	 end
)
AppBlueprintFunctionLibrary.addmessagelistener(modelviewui.ui,"5",cppmessagereceiver)
cppmessagereceiver1 = slua.createDelegate(
	 function(str)
		print(str)
	 end
)
AppBlueprintFunctionLibrary.addmessagelistener(modelviewui.ui,"6",cppmessagereceiver1)
local btn1 = modelviewui.ui["Button_14"]---@type UButton
local btn2 = modelviewui.ui["Button_109"]---@type UButton
local btn3 = modelviewui.ui["Button_274"]---@type UButton
local btn4 = modelviewui.ui["Button_276"]---@type UButton
local btn5 = modelviewui.ui["Button_452"]---@type UButton
local btn6 = modelviewui.ui["Button_13"]---@type UButton
local canvaspanel = modelviewui.ui["CanvasPanel_0"]---@type UCanvasPanel
local m_invisibleimage = modelviewui.ui["m_invisibleimage"]---@type UImage
m_invisibleimage:SetVisibility(1)
local scrolpanel
-- scrolpanel = nil
m_invisibleimage.OnMouseButtonDownEvent:Bind(function(a,b)
     m_invisibleimage:SetVisibility(1)
     print("sssssssssssssssssssssdfffffffffffffffffd",a,b)
	 scrolpanel:RemoveFromParent()
	--  mscrollbox:SetVisibility(1)
end)


local h_openmap = btn1.OnClicked:Add(function()--back to default background
    -- addpoplist(characterinfors)
	-- GameplayStatics.OpenLevel(gworld,"/Game/fortest/maps/mainmenu",true,"");  
	MobileUtilsBlueprintLibrary.SetOrientation(1)
	modelviewui.ui:RemoveFromViewport()
	Mainui:AddToViewport(0)
	local payload = json.encode(backgroundinfors[1])--Emptysublevel
	AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_changebackground,payload)
	if(BPExhibition~=nil)
	then
		print('BPExhibition is not nil ')
		BPExhibition:destroy()
	else
		print('BPExhibition is nil ')
	end

end);
btn2.OnClicked:Add(function()--change background
    local buttondatabase={}
	modelviewui.addpoplistwidget()
	for _,v in pairs(backgroundinfors)
	do
		local fixbutton=slua.loadUI('/Appplugin/UMG/univerallist/fixbutton.fixbutton',gworld);
		local fixbuttonimage = fixbutton["m_image"]---@type UImage
		local mtextblock = fixbutton["m_textblock"]---@type UTextBlock
		local mbutton = fixbutton["m_button"]
		buttondatabase[fixbutton] = {_,v}
		mbutton.OnClicked:Add(function() 
			  local datainfor = buttondatabase[fixbutton][2]
			  local payload = json.encode(datainfor)
			  AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_changebackground,payload)
              print(buttondatabase[fixbutton][1])
              scrolpanel:RemoveFromParent()	

		end);
		mtextblock:SetText(v.description)
		local buttonimage = slua.loadObject(v.imagesource)
        Slua_BlueprintFunctionLibrary.ImagesetTexture(fixbuttonimage,buttonimage)
        local mscrollbox = scrolpanel["mScrollBox"]---@type UScrollBox
		mscrollbox:AddChild(fixbutton)
	end
end);
local characterindex=1 --track current selected character index
btn3.OnClicked:Add(function()--change character
	local buttondatabase={}
    modelviewui.addpoplistwidget()
	for _,v in pairs(characterinfors[1].payload)
	do
		local fixbutton=slua.loadUI('/Appplugin/UMG/univerallist/fixbutton.fixbutton',gworld);
		local fixbuttonimage = fixbutton["m_image"]---@type UImage
		local mtextblock = fixbutton["m_textblock"]---@type UTextBlock
		local mbutton = fixbutton["m_button"]
		buttondatabase[fixbutton] = {_,v}--bind information to button
		mbutton.OnClicked:Add(function() 
              local datainfor = buttondatabase[fixbutton][2]
              characterindex = buttondatabase[fixbutton][1]--track current selected character index
              print(characterindex)
            --AppBlueprintFunctionLibrary.sendmessage("key_changecharater",datainfor.skeletamesh,datainfor.AnimSequences[1].animsequence)
			  local strplayload = json.encode(datainfor)
              AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_changecharater,strplayload)
			  scrolpanel:RemoveFromParent()	

		end);
		mtextblock:SetText(v.description)
		local buttonimage = slua.loadObject(v.imagesource)
        Slua_BlueprintFunctionLibrary.ImagesetTexture(fixbuttonimage,buttonimage)
        local mscrollbox = scrolpanel["mScrollBox"]---@type UScrollBox
		mscrollbox:AddChild(fixbutton)
	end

end);
btn4.OnClicked:Add(function()--3d modelviewui.ui toggle display
    AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_toggledatadisplay,"")
end);
btn5.OnClicked:Add(function()--animationsquence
    local buttondatabase={}
    modelviewui.addpoplistwidget()
	for _,v in pairs(characterinfors[characterindex].AnimSequences)
	do
		local fixbutton=slua.loadUI('/Appplugin/UMG/univerallist/fixbutton.fixbutton',gworld);
		local fixbuttonimage = fixbutton["m_image"]---@type UImage
		local mtextblock = fixbutton["m_textblock"]---@type UTextBlock
		local mbutton = fixbutton["m_button"]
		buttondatabase[fixbutton] = v
		mbutton.OnClicked:Add(function() 
			  local datainfor = buttondatabase[fixbutton]
              AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_changecharateranimation,datainfor.animsequence)
              print(datainfor.animsequence)
              scrolpanel:RemoveFromParent()	

		end);
		mtextblock:SetText(v.description)
		local buttonimage = slua.loadObject(v.imagesource)
        Slua_BlueprintFunctionLibrary.ImagesetTexture(fixbuttonimage,buttonimage)
        local mscrollbox = scrolpanel["mScrollBox"]---@type UScrollBox
		mscrollbox:AddChild(fixbutton)
	end
end);
btn6.OnClicked:Add(function()--3d modelviewui.ui toggle display
	-- World'/Game/HandheldARBP/Maps/HandheldARBlankMap.HandheldARBlankMap'
    -- GameplayStatics.OpenLevel(gworld,"/Game/HandheldARBP/Maps/HandheldARBlankMap",true,"");
end);
function modelviewui.addpoplistwidget()
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
	local alignment,position = modelviewui.position_aligment()
	canvaspanelslot:SetAlignment(alignment)
	canvaspanelslot:SetPosition(position)
end
function modelviewui.getsignal()
	local wll = import('WidgetLayoutLibrary')---@type UWidgetLayoutLibrary
	-- local position = wll.GetMousePositionOnViewport(gworld)
	local position = modelviewui.ui["Clickedposition"]
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
function modelviewui.position_aligment()
	local sx,sy,position= modelviewui.getsignal()
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
return modelviewui