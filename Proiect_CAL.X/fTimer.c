#include "fTimer.h"
#include "mcal_init.h"
#include "asw_com.h"
#include "general_types.h"

T_U8 counter;
T_U8 PIN=0;

void funcTimer()
{
   
    
    if(counter == 20)
    {
        counter=0;
    }
    if(counter%2==0 && (counter<10))
    {
        PIN =!PIN;
        GPIO_u8WritePortPin(PORT_A, 10, PIN);
            
    }
    if(counter >=10 && counter<=20)
           {
        counter=0;
        
         }
    
    
}



