#include "SonalKunj_ADC.h"

#define ADC_ENABLE 0x80
#define ADC_START_CONVERSION 0x40
#define ADC_INT_EN 0x08
#define ADC_CLK_DIV_2 0x01
#define ADC_CLK_DIV_4 0x02
#define ADC_CLK_DIV_8 0x03
#define ADC_CLK_DIV_16 0x04
#define ADC_CLK_DIV_32 0x05
#define ADC_CLK_DIV_64 0x06
#define ADC_CLK_DIV_128 0x07
#define ADC_SINGLE_ENDED_INPUT_ADC2 0x02

void initADC(void)
{
   SREG &= ~(1 << 7);
   ADMUX |= ADC_SINGLE_ENDED_INPUT_ADC2;
   ADCSRA |= ADC_ENABLE;
   ADCSRA |= ADC_INT_EN | ADC_START_CONVERSION | ADC_CLK_DIV_2;
   SREG |= (1 << 7);
}


//---------------------------------------------
// User notes section

// for interrupt i need ADIE and I bit 
// adlar  = 0 for 10 bit resolution default

// End of user notes section
//----------------------------------------------------
