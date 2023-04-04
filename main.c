#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <stdint.h>
#include "SonalKunj_LCD_16x2.h"
#include "SonalKunj_ADC.h"
#define LCD_BIT 8

uint16_t adc_low = 0;
uint16_t adc_high = 0;
uint16_t adc_raw_result = 0;
float adc_result = 0;

ISR(ADC_vect)
{
   adc_low = ADCL;
   adc_high = ADCH;
   adc_raw_result = ((adc_high << 8) | adc_low);
   adc_result = (adc_raw_result*5)/1024;
   //PORTA |= (1 << 0);
}

int main()
 { 
   DDRA |= (1 << 0);
   initADC();
   initLcd(LCD_BIT);
   print("Battery voltage");
   nextLine();
   sendData(LCD_BIT, adc_result + '0');
   while (1)
   {
      {};
   }
   return 0;
 }
