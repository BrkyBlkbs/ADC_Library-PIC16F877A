#include <xc.h>
#include "ADC_Library.h"
//you should set ADCS1:ADCS0 in ADCON0 Register!
void ADC_Init(char ANx,int GODONE_ONOFF,int ADON_ONOFF){
    switch(ANx){
        case 'AN0' : CHS2=0;CHS1=0;CHS0=0;
        case 'AN1' : CHS2=0;CHS1=0;CHS0=1;
        case 'AN2' : CHS2=0;CHS1=1;CHS0=0;
        case 'AN3' : CHS2=0;CHS1=1;CHS0=1;
        case 'AN4' : CHS2=1;CHS1=0;CHS0=0;
        case 'AN5' : CHS2=1;CHS1=0;CHS0=1;
        case 'AN6' : CHS2=1;CHS1=1;CHS0=0;
        case 'AN7' : CHS2=1;CHS1=1;CHS0=1;
    }
    GO_DONE = GODONE_ONOFF;
    ADON = ADON_ONOFF;
}
//sensorvoltage variable is sensors maximum output voltage
double Read_ADC_Voltage(float sensorvoltage){
    while(GO_DONE){
        double ratio = (sensorvoltage)/(1024.0);
        double voltage = (int)((ADRESH*256+ADRESL)*ratio);
        return voltage;
    }
}

void main(void) {
}