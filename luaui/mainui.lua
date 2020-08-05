require 'datainfor'
require 'appglobal'
require 'keymap'
local modelui = require 'modelview'
local arui =require 'ARui'
local ARimagescanui =require 'ARimagescanui'
local mainui = {}
-- WidgetBlueprint'/Game/Assets/UI/Zhuye_UI/Zhuye.Zhuye'
Mainui:AddToViewport(0)
local btn = Mainui["Button"]---@type UButton   
local btn1 = Mainui["Button_1"]---@type UButton
local btn2 = Mainui["Button_2"]---@type UButton


local Slua_BlueprintFunctionLibrary = import('Slua_BlueprintFunctionLibrary')	
local AppBlueprintFunctionLibrary = import('AppBlueprintFunctionLibrary')	
btn.OnClicked:Add(function()--modelview
	MobileUtilsBlueprintLibrary.SetOrientation(0)

	-- GameplayStatics.OpenLevel(gworld,"/Game/fortest/maps/modelview",true,"");
	Mainui:RemoveFromViewport()
	modelui.ui:AddToViewport(0)
	local payload = json.encode(backgroundinfors[1])
	print(payload)
	AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_changebackground,payload)
	local exhibitionclass = slua.loadClass("Blueprint'/ModelViewer/BpExhibition.BpExhibition'")
	local Vector = FVector(0,0,0)
	local Rotator = FRotator(0,0,0)
	BPExhibition = gworld:SpawnActor(exhibitionclass,Vector,Rotator,nil)


end);
btn1.OnClicked:Add(function()--arplane
	MobileUtilsBlueprintLibrary.SetOrientation(1)

	-- World'/Game/fortest/maps/modelview.modelview'
	-- GameplayStatics.OpenLevel(gworld,"/ModelViewer/HandheldARBP/Maps/HandheldARBlankMap",true,"");
	Mainui:RemoveFromViewport()
	arui.ui:AddToViewport(0)
	local payload = json.encode(Emptysublevel)--Emptysublevel
	AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_changebackground,payload)
	local arconfig = slua.loadObject(ARconfig[1])
	ARBlueprintLibrary.StartARSession(arconfig)
	local arpawnclass = slua.loadClass("Blueprint'/ModelViewer/HandheldARBP/Blueprints/GameFramework/BP_ARPawn.BP_ARPawn'")
	local Vector = FVector(0,0,0)
	local Rotator = FRotator(0,0,0)
	BParpawn = gworld:SpawnActor(arpawnclass,Vector,Rotator,nil)
	BParpawn:setcheckplane(false)

end);
btn2.OnClicked:Add(function()--arimagescane
	MobileUtilsBlueprintLibrary.SetOrientation(1)

	-- GameplayStatics.OpenLevel(gworld,"/ModelViewer/HandheldARBP/Maps/HandheldARBlankMap",true,"");
	Mainui:RemoveFromViewport()
	ARimagescanui.ui:AddToViewport(0)
	ARimagescanui.addcrosshair()
	local payload = json.encode(Emptysublevel)--Emptysublevel
	AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_changebackground,payload)
	local arconfig = slua.loadObject(ARconfig[2])
	ARBlueprintLibrary.StartARSession(arconfig)
	local arpawnclass = slua.loadClass("Blueprint'/ModelViewer/HandheldARBP/Blueprints/GameFramework/BP_ARPawn.BP_ARPawn'")
	local Vector = FVector(0,0,0)
	local Rotator = FRotator(0,0,0)
	BParpawn = gworld:SpawnActor(arpawnclass,Vector,Rotator,nil)
	BParpawn:setimagescan(true)
	BParpawn:setcheckplane(false)
	-- BParpawn:ssuppress_screentearing()
	local strplayload = json.encode(archaracterinfors[1].payload[1])
	print(strplayload)
	MyBlueprintFunctionLibrary.CLogtofile(strplayload)
	AppBlueprintFunctionLibrary.sendmessage(KeyMap.key_changecharater,strplayload)
end);

return mainui
