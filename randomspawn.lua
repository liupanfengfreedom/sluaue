require 'datainfor'
require 'keymap'
Onimagedetected = slua.createDelegate(
	 function(str)
         print(str)
	 end
)
MessageMiddlewareLibrary.addmessagelistener(gworld,KeyMap.key_onrandomspawn,Onimagedetected)
workdelegate = slua.createDelegate(
	 function(str)
         print("workdelegatessssssssssssssssssssssssssssssssssstr" ,str)
	 end
)
ggameinstance:dosthdelay(2,workdelegate,"abc",false)
ggameinstance:dosthdelay(3,workdelegate,"123",false)
ggameinstance:dosthdelay(5,workdelegate,"json",true)