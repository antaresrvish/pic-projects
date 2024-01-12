#include <main.h>

//====================================
void main()
{
   setup_adc_ports(NO_ANALOGS);
   setup_comparator(NC_NC); 
   
   while(1)
     {
      output_high(PIN_B5);
      if(input(PIN_B3)==1){
      output_high(PIN_B0);
      }
      else{
      output_low(PIN_B0);
      }
     }
}


