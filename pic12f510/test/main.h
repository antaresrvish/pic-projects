#include <12F510.h>
#device ADC=16

#FUSES NOWDT,INTRC                    //No Watch Dog Timer

#use delay(internal=8000000)

#define LED PIN_B1
#define DELAY 1000


