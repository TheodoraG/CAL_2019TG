#include "asw_FollowDir.h"
#include "asw_lineFoll.h"
#include"asw_move.h"

void followDir()
{ //move_forward(T_F16 speed2)(T_F16 speed2)
    /*
    if(asw_getLineFollowerVal()==0b100000)
        move_direction(65);
    else
        if(asw_getLineFollowerVal()==0b000000)
            move(0);
        else
            if(asw_getLineFollowerVal()==0b110000)
                move_direction(85);
            else
                if(asw_getLineFollowerVal()==0b000001)
                    move_direction(110);
                else
                    if(asw_getLineFollowerVal()==0b000011)
                        move_direction(95);
                else
                    move_forward(20);
    */
   
    if(asw_getLineFollowerVal()){
    if(asw_getLineFollowerVal()==0b000011)
        move_direction(100);
    else
        if(asw_getLineFollowerVal()==0b110000)
            move_direction(75);
        else
            if(asw_getLineFollowerVal()==0b000001)
                move_direction(115);
            else
                if(asw_getLineFollowerVal()==0b100000)
                    move_direction(65);
                else
                    if(asw_getLineFollowerVal()==0b001100)
                        move_direction(88);
                    else
                         
                    if(asw_getLineFollowerVal()==0b001000)
                        move_direction(85);
                     else
                        if(asw_getLineFollowerVal()==0b000100)
                            move_direction(95);
                    else
                        // if(asw_getLineFollowerVal()==0b000000)
                        //    move(0);
                        // else
                              if(asw_getLineFollowerVal()==0b000010)
                                    move_direction(110);
                                  else
                                      if(asw_getLineFollowerVal()==0b010000)
                                        move_direction(70);
    }
    else{
         move(0,1);
    }
            
        
}
