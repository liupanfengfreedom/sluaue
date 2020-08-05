require 'datainfor'
require 'appglobal'
require 'keymap'

-- local mainui = require 'mainui'
-- require 'appglobal'
local ARimagescanui = {}
-- local buttondatabase={}
local AppBlueprintFunctionLibrary = import('AppBlueprintFunctionLibrary')	

ARimagescanui.ui=slua.loadUI('/uilogic/UI/AR_Scan_UI.AR_Scan_UI',gworld);
local crosshair
local charactorlist

Onimagedetected = slua.createDelegate(
	 function(str)
		if(crosshair ~= nil)
		then
			crosshair:RemoveFromParent()
			crosshair=nil
		end

		ARimagescanui.addcharactorlist()
	 end
)
AppBlueprintFunctionLibrary.addmessagelistener(ARimagescanui.ui,KeyMap.key_onimagerecognitionok,Onimagedetected)

Onlosttarget = slua.createDelegate(
	 function(str)
		if(charactorlist ~= nil)
		then
			charactorlist:RemoveFromParent()
			charactorlist=nil
		end
		ARimagescanui.addcrosshair()
	 end
)
AppBlueprintFunctionLibrary.addmessagelistener(ARimagescanui.ui,KeyMap.key_onlosttarget,Onlosttarget)
-- ARimagescanui.ui:AddToViewport(0)
local btn1 = ARimagescanui.ui["Button_14"]---@type UButton
local btn2 = ARimagescanui.ui["Button_109"]---@type UButton
local btn3 = ARimagescanui.ui["Button_274"]---@type UButton
local function ShowARimagescanuielement(bshow)
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
local canvaspanel = ARimagescanui.ui["CanvasPanel_0"]---@type UCanvasPanel
local m_invisibleimage = ARimagescanui.ui["m_invisibleimage"]---@type UImage
m_invisibleimage:SetVisibility(1)
local scrolpanel
m_invisibleimage.OnMouseButtonDownEvent:Bind(function(a,b)
	 ShowARimagescanuielement(true)
     m_invisibleimage:SetVisibility(1)
	print("sssssssssssssssssssssdfffffffffffffffffd",a,b)
	--  scrolpanel:RemoveFromParent()
	--  mscrollbox:SetVisibility(1)
end)
local Slua_BlueprintFunctionLibrary = import('Slua_BlueprintFunctionLibrary')
local AppBlueprintFunctionLibrary = import('AppBlueprintFunctionLibrary')
local h_openmap = btn1.OnClicked:Add(function()--back to default background
	MobileUtilsBlueprintLibrary.SetOrientation(1)
    -- addpoplist(characterinfors)World'/Game/fortest/maps/mainmenu.mainmenu'
    ARBlueprintLibrary.StopARSession()
	-- GameplayStatics.OpenLevel(gworld,"/Game/fortest/maps/mainmenu",true,"");
	ARimagescanui.ui:RemoveFromViewport()
	if(charactorlist ~= nil)
	then
		charactorlist:RemoveFromParent()
		charactorlist=nil
	end
	Mainui:AddToViewport(0)
	BParpawn:destroy()

end);

btn2.OnClicked:Add(function()---
	ARimagescanui.addcharactorlist()
end);
btn3.OnClicked:Add(function()--
	charactorlist:RemoveFromParent()
end);

function ARimagescanui.addcrosshair()
	-- WidgetBlueprint'/Game/Assets/UI/Saomiao/Crosshair.Crosshair'
	if(crosshair==nil)
	then 
	   crosshair = slua.loadUI('/Game/Assets/UI/Saomiao/Crosshair.Crosshair',gworld);
	end
	local canvaspanelslot = canvaspanel:AddChildToCanvas(crosshair)---@type UCanvasPanelSlot
	-- m_invisibleimage:SetVisibility(0)--used for receive click event to remove this plane
	local Vector2D = import('Vector2D')
	local InMaximumAnchors = Vector2D()
	InMaximumAnchors.X = 0.5
	InMaximumAnchors.Y = 0.5
	canvaspanelslot:SetMaximum(InMaximumAnchors)
	local InMinimumAnchors = Vector2D()
	InMinimumAnchors.X = 0.5
	InMinimumAnchors.Y = 0.5
	canvaspanelslot:SetMinimum(InMinimumAnchors)

	local size = Vector2D()
	size.X = 600
	size.Y = 600
	canvaspanelslot:SetSize(size)
	local alignment = Vector2D()
	alignment.X = 0.5
	alignment.Y = 0.5
	local position = Vector2D()
	position.X = 0
	position.Y = 0
	canvaspanelslot:SetAlignment(alignment)
	canvaspanelslot:SetPosition(position)
end
function ARimagescanui.addcharactorlist()
	-- WidgetBlueprint'/Appplugin/UMG/univerallist/horizontalscrollbox.horizontalscrollbox'
	if(charactorlist==nil)
	then
		charactorlist = slua.loadUI('/Appplugin/UMG/univerallist/horizontalscrollbox.horizontalscrollbox',gworld);
	end

	local canvaspanelslot = canvaspanel:AddChildToCanvas(charactorlist)---@type UCanvasPanelSlot

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
	size.Y = 300
	canvaspanelslot:SetSize(size)
	local alignment = Vector2D()
	alignment.X = 0.5
	alignment.Y = 1
	local position = Vector2D()
	position.X = 0
	position.Y = -100
	canvaspanelslot:SetAlignment(alignment)
	canvaspanelslot:SetPosition(position)
	local mScrollbox  = charactorlist['mScrollbox']---@type UScrollBox
	mScrollbox:SetOrientation(0)
	mScrollbox:SetScrollBarVisibility(2)
	local buttondatabase={}
	for _,v in pairs(archaracterinfors[2].payload)
	do
		local fixbutton=slua.loadUI('/Appplugin/UMG/univerallist/fixbuttonv1.fixbuttonv1',gworld);
		local fixbuttonimage = fixbutton["m_image"]---@type UImage
		local mbutton = fixbutton["m_button"]
		buttondatabase[fixbutton] = {_,v,mbutton}--bind information to button
		mbutton.OnClicked:Add(function() 
				local datainfor = buttondatabase[fixbutton][2]
				characterindex = buttondatabase[fixbutton][1]--track current selected character index
				print(characterindex)
				for _i,vi in pairs(buttondatabase)--travel all button
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
		end);
		local buttonimage = slua.loadObject(v.imagesource)
		Slua_BlueprintFunctionLibrary.ImagesetTexture(fixbuttonimage,buttonimage)
		local scrollboxslot = mScrollbox:AddChild(fixbutton)---@type UScrollBoxSlot
		local Margin = import('Margin')
        margin = Margin()
        margin.Bottom=5
        margin.Left=5
        margin.Right=5
        margin.Top=5
		scrollboxslot:SetPadding(margin)
		scrollboxslot:SetHorizontalAlignment(2)
		scrollboxslot:SetVerticalAlignment(0)
	end
end
return ARimagescanui