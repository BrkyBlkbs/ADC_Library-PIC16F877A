# ADC_Library-PIC16F877A
This library provides reading ADC voltage level at PIC16F877A microcontroller. !You shouldn't forget set ADCS1:ADCS0 in ADCON0 Register! 
Variable explanations off this library:


char ANx[3] = This variable is should choose in the Datasheet depending on your microcontroller package. ANx represents analog channels, you should name this variable same as ADC channel names in datasheet.


int GODONE_ONOFF and int ADON_ONOFF = This variables represents ADCON0 bits, so you should write 1 or 0 for set your GO_DONE and ADON bits.


float sensorvoltage = This variable is represents sensors maximum output voltage. For example; if you wanna read your MQ7 Sensors current voltage level, so you should set this variable 5. Because MQ7's maximum output voltage is 5V. 
