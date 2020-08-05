
Mainui=slua.loadUI('/Game/Assets/UI/Zhuye_UI/Zhuye.Zhuye',gworld)
local exhibitionclass = slua.loadClass("Blueprint'/ModelViewer/BpExhibition.BpExhibition'")
local Vector = FVector(0,0,0)
local Rotator = FRotator(0,0,0)
BPExhibition = nil--gworld:SpawnActor(exhibitionclass,Vector,Rotator,nil)
-- BPExhibition:SetActive(false)

local arpawnclass = slua.loadClass("Blueprint'/ModelViewer/HandheldARBP/Blueprints/GameFramework/BP_ARPawn.BP_ARPawn'")
local Vector = FVector(0,0,0)
local Rotator = FRotator(0,0,0)
BParpawn = nil--gworld:SpawnActor(arpawnclass,Vector,Rotator,nil)
-- BParpawn:SetActive(false)
print("appglobal-------------------------------------------------")
