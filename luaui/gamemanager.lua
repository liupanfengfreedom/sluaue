require("base/globalinit")
local actor={}
print('------------v1',gworld)
local gamelogic =   require("gamelogic")
local mainui =   require("mainui")

-- override event from blueprint
function actor:ReceiveBeginPlay()
    ggameinstance = self.Slua_GameInstance
    gworld=self.gworld
    print('------------ggameinstance',ggameinstance)
    print('------------gworld', gworld)
---------------------------------------------------------------------------------------------------------------    
    mainui.addlaunchui()
    ggameinstance:dosthdelay(3,slua.createDelegate(
        function(str)
            mainui.removelaunchui()
        end
    ),"ssssss")
    ggameinstance:logtoscreen("m form lua ggameinstance")
    self.bCanEverTick = true
    -- set bCanBeDamaged property in parent
    self.bCanBeDamaged = false--Blueprint'/Appplugin/FishPawn.FishPawn'
    print("bpactor:ReceiveBeginPlay")--Blueprint'/Game/VehicleAdvBP/Blueprints/VehicleBlueprint.VehicleBlueprint'

    ggameinstance:dosthdelay(2,slua.createDelegate(
        function(str)
            gamelogic.spawnplayer()
        end
    ),"ssssss")
    -- call super ReceiveBeginPlay
    ggameinstance:dosthdelay(0.2,slua.createDelegate(
        function(str)
            gamelogic.prepareobjects()
        end
    ),"ssssss")
    self.Super:ReceiveBeginPlay()

end

-- override event from blueprint
function actor:ReceiveEndPlay(reason)
    print("bpactor:ReceiveEndPlay")
    -- call super ReceiveEndPlay
    self.Super:ReceiveEndPlay(reason)
end

function actor:ReceiveTick(dt)
    self.Super:ReceiveEndPlay(dt)
    print("bpactor:ReceiveTick----------------------------------------",self,dt)

end

function actor:bpcall(value)
    -- assert(value==1024)
    print("called from cpp",value)
    return "m from lua"
end
function actor:getselectedenemy(strp)
    print(strp)
    return gamelogic.getselectedenemy(strp)
end
function actor:getselectcoral(strp)
    print(strp)
    return gamelogic.getselectcoral(strp)
end
function actor:getconfig(strp)
    -- print(strp)
    return json.encode(config)
end
function actor:lualog(strp)
    print(strp)
    return ""
end
return actor