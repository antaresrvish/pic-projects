#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No lowg, B3(PIC16) voltage prgmin or B5(PIC18) used for I/O

#use delay(clock=12MHZ)

