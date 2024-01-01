/*
 * Smart Home Embedded System.c
 *
 * Created: 22/12/2023 00:39:53
 * Author : MKB
 */ 

#include <avr/io.h>
#include "LCD.h"


int main(void)
{
	LCD_vInit();
/* Printing Welcome screen */
LCD_vSend_string("Welcome to smart");
LCD_movecursor(2,1);
LCD_vSend_string("home system");
_delay_ms(1000);//Halt the system for the given time in (ms)
LCD_clearscreen();//remove all previous    while (1) 
    {
    }
}

