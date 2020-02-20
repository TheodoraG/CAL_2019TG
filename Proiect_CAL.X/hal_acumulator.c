#include "hal_acumulator.h"
#include "mcal_adc.h"

T_U8 showEnergy(T_U16 valoare_citita)
{
    valoare_citita=ADC_u16Read(0);
    T_U8 rezolutie=0;
    T_U8 gradIncarcare=0;
    if(valoare_citita<=8.4 && valoare_citita>=7)
    {
        rezolutie=(100 - 20)/(8.4-7);
         gradIncarcare=(valoare_citita-7)*rezolutie+20;
    }
    else
        if(valoare_citita<7 && valoare_citita>=6.5)
        {
         rezolutie=(20-10)/(7-6.5);
         gradIncarcare=(valoare_citita-6.5)*rezolutie+10;
        }
        else
             if(valoare_citita<6.5 && valoare_citita>=6)
             {
             rezolutie=(10-0)/(6.5-6);
             gradIncarcare=(valoare_citita-6)*rezolutie+0;
             }
    
    return gradIncarcare;
}
