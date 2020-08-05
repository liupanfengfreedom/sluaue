require 'datainfor'
require 'keymap'
ui=slua.loadUI('/Game/mainui.mainui',gworld);--WidgetBlueprint'/Game/mainui.mainui'
ui:AddToViewport(0)

Onimagedetected1 = slua.createDelegate(
	 function(str)
		print(str)
	 end
)
MessageMiddlewareLibrary.addmessagelistener(ui,KeyMap.key_onrandomspawn,Onimagedetected1)


Onimagedetected2 = slua.createDelegate(
	 function(str)
		print(str,2)
	 end
)
MessageMiddlewareLibrary.addmessagelistener(ui,KeyMap.key_onrandomspawn,Onimagedetected2)

local btn = ui["Button_197"]---@type UButton   

btn.OnClicked:Add(function()---back

   ggameinstance:dosthdelay(1,
   slua.createDelegate(
	function(str)
		print("workdelegatessssssssssssssssssssssssssssssssssstr" ,str)
		ggameinstance:testfunc()
	   end
   )
   ,"9abc")

   ggameinstance:dosthdelay(2,
   slua.createDelegate(
	function(str)
		print("workdelegatessssssssssssssssssssssssssssssssssstr" ,str)
		ggameinstance:testfunc()
   end
   )
   ,"8")

end);

local workdelegate = slua.createDelegate(
	 function(str)
         print("workdelegatessssssssssssssssssssssssssssssssssstr" ,str)
		 ggameinstance:testfunc()
	end
)
ggameinstance:dosthdelay(28,workdelegate,"9abc")

ggameinstance:dosthdelay(1.9,
slua.createDelegate(
	 function(str)
         print("workdelegatessssssssssssssssssssssssssssssssssstr" ,str)
		 ggameinstance:testfunc()
		end
)
,"8")

ggameinstance:dosthdelay(1.8,
slua.createDelegate(
	 function(str)
         print("workdelegatessssssssssssssssssssssssssssssssssstr" ,str)
		 ggameinstance:testfunc()
	end
)
,"7aaa")

ggameinstance:dosthdelay(1.7,
slua.createDelegate(
	 function(str)
         print("workdelegatessssssssssssssssssssssssssssssssssstr" ,str)
		 ggameinstance:testfunc()
	end
)
,"6ssss")

