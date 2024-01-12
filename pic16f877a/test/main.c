#include <main.h>

void main()
{
   setup_comparator(NC_NC_NC_NC);
   setup_adc(ADC_OFF);

   while(TRUE)
   {
      if(input(PIN_A1)==0){
         output_high(PIN_A0); //19?
      }
      else{
         output_low(PIN_A0);
      }
      
   }

}
