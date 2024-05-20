# Arduino-Projects

1.Motion-Activated Alarm System

When the PIR sensor detects motion, the buzzer will sound and the LED will light up simultaneously. When no motion is detected, both the buzzer and the LED will be turned off. This behavior is also indicated in the Serial Monitor with the message "Motion detected!".

<img width="458" alt="sistem alarma-senzor,buzzer,led" src="https://github.com/Mihas8r/Arduino-Projects/assets/92221038/0cc4c8e6-e76c-4a95-b8db-57655304f4e2">


2.Automatic Window Blinds


The automatic window blinds project is designed to control the position of the blinds based on ambient light levels. The servo motor will move to different positions depending on the light intensity measured by the LDR.

Bright light (e.g., daylight): The servo motor will move to open the blinds (servo angle set to 180 degrees).
Medium light: The servo motor will move to a midway position (servo angle set to 90 degrees).
Low light (e.g., evening or night): The servo motor will move to close the blinds (servo angle set to 0 degrees).


![AutomaticWindowBlinds](https://github.com/Mihas8r/Arduino-Projects/assets/92221038/20306e9f-c689-442a-872f-289d5efb66f8)



3.Automatic Wiper ECU

We need to read the rain level from a sensor, which is a potentiometer in our case, and adjust the speed of the wipers accordingly. In each 20 ms cycle, I read the sensor's value and make decisions using if/else conditional statements. I have written functions for each state and call them within the main loop. (ex. turnAllLedsOn).




Rain level 0. All leds OFF

![image](https://github.com/Mihas8r/Arduino-Projects/assets/92221038/141d749b-9191-445b-81a3-04cf74cb52d3)




Rain level 24. On-Off cycle led is on, also the first led is on ( speed 10% )


![image](https://github.com/Mihas8r/Arduino-Projects/assets/92221038/a12db89a-5eff-4161-b4f3-1b0d4085b229)




Rain level 52. Two leds on


![image](https://github.com/Mihas8r/Arduino-Projects/assets/92221038/a90905db-3dc1-4bcd-936f-e306254f8781)



Rain level 74. Three leds on


![image](https://github.com/Mihas8r/Arduino-Projects/assets/92221038/d6fcbbcf-ead4-4e38-b72a-8fd7530834a4)




Rain level 98. All leds on


![image](https://github.com/Mihas8r/Arduino-Projects/assets/92221038/f5bfa8e6-bc13-40dd-8a97-57668634b034)




