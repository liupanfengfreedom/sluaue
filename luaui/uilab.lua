require 'datainfor'
local buttondatabase={}
local ui=slua.loadUI('/Game/testui.testui',gworld);
ui:AddToViewport(0)
local btn1 = ui["Button_307"]
local btn2 = ui["Button_206"]
local btn3 = ui["Button_151"]
local btn4 = ui["Button_488"]
local canvaspanel = ui["CanvasPanel_0"]---@type UCanvasPanel
local m_invisibleimage = ui["m_invisibleimage"]---@type UImage
m_invisibleimage:SetVisibility(1)
local scrolpanel
m_invisibleimage.OnMouseButtonDownEvent:Bind(function(a,b)
     m_invisibleimage:SetVisibility(1)
     print("sssssssssssssssssssssdfffffffffffffffffd",a,b)
	 scrolpanel:RemoveFromParent()
	--  mscrollbox:SetVisibility(1)
end)

local h_openmap = btn1.OnClicked:Add(function()
	addpoplist()
end);
btn2.OnClicked:Add(function()
	addpoplist()
end);
btn3.OnClicked:Add(function()
	addpoplist()
end);
btn4.OnClicked:Add(function()
	addpoplist()
end);
function addpoplist()
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
	size.X = 200
	size.Y = 600
	canvaspanelslot:SetSize(size)
	local alignment,position = position_aligment()
	canvaspanelslot:SetAlignment(alignment)
	canvaspanelslot:SetPosition(position)
	local Slua_BlueprintFunctionLibrary = import('Slua_BlueprintFunctionLibrary')	
	for _,v in pairs(characterinfors)
	do
		Slua_BlueprintFunctionLibrary.sendmessage("skew","sdf","dddddddd")
		local fixbutton=slua.loadUI('/Appplugin/UMG/univerallist/fixbutton.fixbutton',gworld);
		local fixbuttonimage = fixbutton["m_image"]---@type UImage
		local mtextblock = fixbutton["m_textblock"]---@type UTextBlock
		local mbutton = fixbutton["m_button"]
		buttondatabase[fixbutton] = v
		mbutton.OnClicked:Add(function() 
			  local datainfor = buttondatabase[fixbutton]
			  print(datainfor.imagesource)
			  print(datainfor.AnimSequences[1])
			  print(datainfor.AnimSequences[2])

		end);
		mtextblock:SetText(v.description)
		-- local buttonimage = slua.loadObject("Texture2D'/Game/3dspace/tenor.tenor'")
		local buttonimage = slua.loadObject(v.imagesource)
	    Slua_BlueprintFunctionLibrary.ImagesetTexture(fixbuttonimage,buttonimage)
		mscrollbox:AddChild(fixbutton)
	end
end
function getsignal()
	local wll = import('WidgetLayoutLibrary')---@type UWidgetLayoutLibrary
	-- local position = wll.GetMousePositionOnViewport(gworld)
	local position = ui["Clickedposition"]
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
function position_aligment()
	local sx,sy,position= getsignal()
	position.X = position.X +(sx*100)
	position.Y = position.Y +(sy*100)
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
