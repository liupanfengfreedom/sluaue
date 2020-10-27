require 'datainfor'
ARBlueprintLibrary=import'AppFunctionLibrary'

local gamelogic={}
local function selectactorfromlibrary(array)
	local NormalizingFactor = 0
	for _,v in pairs(array)
	do
		NormalizingFactor = NormalizingFactor+v.probability
	end
	local TestNumber = math.random(0,NormalizingFactor)
	local CompareTo=0
	for _,v in  pairs(array)
	do
		CompareTo = CompareTo+v.probability
		if(TestNumber<=CompareTo)
		then
			return _
		end
	end
	return 0
end
function gamelogic.getselectedenemy(str)
    local selectedenemy_index =  selectactorfromlibrary(fishs)
    local selectedenemy = fishs[selectedenemy_index]
    return json.encode(selectedenemy)
end
function gamelogic.getselectcoral(str)
    local selectedenemy_index =  selectactorfromlibrary(corals)
    local selectedenemy = corals[selectedenemy_index]
    return json.encode(selectedenemy)
end

function gamelogic.prepareobjects()
	local spawnpoint = FVector(20000)
	local  tfs = FTransform()
	tfs:SetLocation(spawnpoint)
	prepareobjectsevent = slua.createDelegate(
	function(str)
		local v = json.decode(str)
		ARBlueprintLibrary.spawnobject(gworld,v["fishtype"],tfs,v["mesh"],v["animation"],spawnpoint)
    end
    )
	for index =1,22
	do 
		for _,v in pairs(fishs)
		do
			MessageMiddlewareLibrary.addtickevent(prepareobjectsevent,json.encode(v))
		end
		for _,v in pairs(corals)
		do
			MessageMiddlewareLibrary.addtickevent(prepareobjectsevent,json.encode(v))
		end
	end
end
function gamelogic.spawnplayer()--Blueprint'/Appplugin/FishPawn.FishPawn'
	local pawnclass = slua.loadClass("Blueprint'/Appplugin/FishPawn.FishPawn'")
	local Vector = FVector(0,0,0)
	local Rotator = FRotator(0,0,0)
    gworld:SpawnActor(pawnclass,Vector,Rotator,nil)
end
return gamelogic



