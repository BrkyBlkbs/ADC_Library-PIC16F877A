
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h>   
void ADC_Init(char ANx,int GODONE_ONOFF,int ADON_ONOFF);
double Read_ADC_Voltage(float sensorvoltage);

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */


#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

