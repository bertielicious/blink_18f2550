/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 23 October 2018, 19:41
 */


#include "config.h"
#include "init_ports.h"
#include "delay.h"
void main(void) 
{
    init_ports();
   
    while(1)
    {
       LATCbits.LATC2 = 1;
       delay();
       LATCbits.LATC2 = 0;
       delay();
    }
    
}
