require'datainfor'
json = require'base/json'

local buttondatabase={}
local ui=slua.loadUI('/Game/testui.testui',gworld);
ui:AddToViewport(0)
local btn1 = ui["Button_307"]
local btn2 = ui["Button_206"]
local btn3 = ui["Button_151"]
local btn4 = ui["Button_488"]
local canvaspanel = ui["CanvasPanel_0"]---@type UCanvasPanel
local m_invisibleimage = ui["m_invisibleimage"]---@type UImage
ui['NewEventDispatcher_0']:Add(
   function(a)
	print("*****************************************",a)
   end
)
local m_image = ui["Image_66"]---@type UImage

-- ui:DownloadImageAsync("https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1590657154677&di=5e51b5857623fbb6553d09b170bbada4&imgtype=0&src=http%3A%2F%2Fimgsrc.baidu.com%2Fforum%2Fw%3D580%2Fsign%3Dd028f20a2b3fb80e0cd161df06d02ffb%2F110ea02f07082838cef1222fb299a9014d08f1fb.jpg",m_image)

local HitResult = import('HitResult')
mHitResult = HitResult()
print("distance ",mHitResult.Distance)
local b_isfileexist = Slua_BlueprintFunctionLibrary.isfileexist_undercontentfolder('3dspace/12.uasset','')
print("b_isfileexist :",b_isfileexist)
local OnAssetdownloadcompeletandmountokvent = slua.createDelegate(
	function()
		print("OnAssetdownloadcompeletvent")
		GameplayStatics.OpenLevel(gworld,'/Game/VehicleAdvBP/Maps/VehicleAdvExampleMap',true,"");
	end
)
local OnAssetdownloadingevent = slua.createDelegate(
	function(a)
		print("OnAssetdownloadingevent",a) 
	end
)
local OnAssetdownloadFailed = slua.createDelegate(
	function()
		print("OnAssetdownloadFailed") 
	end
)
local b_isfileexist = Slua_BlueprintFunctionLibrary.isfileexist_undercontentfolder('pakchunk3-Android_ETC2_VehicleAdvExampleMap.pak','')
print("b_isfileexist :",b_isfileexist)
-- if(b_isfileexist)
-- then
-- 	MyBlueprintFunctionLibrary.Mount('pakchunk3-Android_ETC2_VehicleAdvExampleMap.pak')
-- 	GameplayStatics.OpenLevel(gworld,'/Game/VehicleAdvBP/Maps/VehicleAdvExampleMap',true,"");
-- else
-- 	ggameinstance:downloadassetfromcloudandmount("http://192.168.20.96:8000/pakchunk3-Android_ETC2_VehicleAdvExampleMap.pak" , OnAssetdownloadcompeletandmountokvent, OnAssetdownloadingevent,OnAssetdownloadFailed)
-- end

---------------------------------------------------------------
local OnAssetfoundvent = slua.createDelegate(
	function()
		print("OnAssetdownloadcompeletvent")
	    MyBlueprintFunctionLibrary.UnMount('pakchunk3-Android_ETC2_VehicleAdvExampleMap.pak')
	    MyBlueprintFunctionLibrary.Mount('pakchunk3-Android_ETC2_VehicleAdvExampleMap.pak')
		GameplayStatics.OpenLevel(gworld,'/Game/VehicleAdvBP/Maps/VehicleAdvExampleMap',true,"");
	end
)
-- ggameinstance:downloadassetfromcloudorlocal("http://192.168.20.96:8000/pakchunk3-Android_ETC2_VehicleAdvExampleMap.pak" , OnAssetfoundvent, OnAssetdownloadingevent,OnAssetdownloadFailed,'')

local OnAssetfoundvent1 = slua.createDelegate(
	function()
		print("images (1).jpg")
        Slua_BlueprintFunctionLibrary.ImagesetTexturefromrawimageundercontent(m_image,'images1.png')
	end
)
ggameinstance:downloadassetfromcloudorlocal("http://192.168.20.96:8000/images1.png" , OnAssetfoundvent1, OnAssetdownloadingevent,OnAssetdownloadFailed,'F872033E784485B190EE53A0A2AED52C')------------------------------------------------------------------------------these lua delegate should be called in gamethread

local Onhttprequestcompletedevent = slua.createDelegate(
	function(str,datas)
		print(str)
		local table1 = json.decode(str)
		for k,v in pairs(table1) do
			ggameinstance:downloadassetfromcloudorlocal(v[5] , OnAssetfoundvent, OnAssetdownloadingevent,OnAssetdownloadFailed,'F872033E784485B190EE53A0A2AED52C')

			print(k,v)
			for k_,v_ in pairs(v) do
				print(k_,v_)

			end
		end
		for k,v in pairs(datas) do
			-- print(k,v)
		end
	end
)
local OnAssetdownloadingevent1 = slua.createDelegate(
	function(a)
		print("OnAssetdownloadingevent1  :",a) 
	end
)
ggameinstance:httpgetrequest("http://192.168.20.96:7001/" , Onhttprequestcompletedevent, OnAssetdownloadingevent1,OnAssetdownloadFailed)



m_invisibleimage:SetVisibility(1)
local scrolpanel
m_invisibleimage.OnMouseButtonDownEvent:Bind(function(a,b)
     m_invisibleimage:SetVisibility(1)
     print("sssssssssssssssssssssdfffffffffffffffffd",a,b)
	 scrolpanel:RemoveFromParent()
	--  mscrollbox:SetVisibility(1)
end)

local h_openmap = btn1.OnClicked:Add(function()
	print('btn1 111111111111111111111111')
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
    scrolpanel=slua.loadUI('/Game/UMG/univerallist/fixbuttonlist.fixbuttonlist',gworld);
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
	for _,v in pairs(characterinfors)
	do
		-- Slua_BlueprintFunctionLibrary.sendmessage("skew","sdf","dddddddd")
		local fixbutton=slua.loadUI('/Game/UMG/univerallist/fixbutton.fixbutton',gworld);
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
	local position = wll.GetMousePositionOnViewport(gworld)
	-- local position = ui["Clickedposition"]
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
