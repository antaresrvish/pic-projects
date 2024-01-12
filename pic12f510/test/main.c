#include <12F510.h>
#device ADC=16

#FUSES NOMCLR,INTRC,NOPROTECT,IOSC4                   

#use delay(internal=8MHZ)

void main()
{
   setup_adc_ports(NO_ANALOGS); //analoglar kapal�.
   setup_comparator(NC_NC_NC_NC); //Opsiyonel ��k��lar� kapat�r
   set_tris_b(0x00);
   output_b(0x00); 

   while(true)
   {
      output_high(PIN_B0);
      delay_ms(800);
      output_low(PIN_B0);
      delay_ms(50);
      output_high(PIN_B1);
      delay_ms(800);
      output_low(PIN_B1);
      delay_ms(50);
      output_high(PIN_B2);
      delay_ms(800);
      output_low(PIN_B2);
      delay_ms(50);
      output_high(PIN_B4);
      delay_ms(800);
      output_low(PIN_B4);
      delay_ms(50);
      output_high(PIN_B5);
      delay_ms(800);
      output_low(PIN_B5);
      delay_ms(50);
   }

}
