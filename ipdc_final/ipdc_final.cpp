/*
 * Propeller_Clock.cpp
 *
 * Created: 09-02-2015 07:42:58 PM
 *  Author: Aditya Prasad Bhagat
 */ 
/*this will be defined as follows
PINB0=LED1
PINB1=LED2
PINB2=LED3
PINB3=LED4
PINB4=LED5
PINB5=LED6
PINB6=LED7
PINB7=LED8
PIND2=IR Sensor INPUT
*/
	
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "charecterset.h"
#include <string.h>

	
	unsigned int get_rpu()
	{
		unsigned int count=0;
		while (!(bit_is_clear(PIND,2)));//wait for first pass of the ir sensor
		//begin counting how many microseconds are there before next pass
		while(bit_is_clear(PIND,2))
		{
			_delay_us(1);
			count++;
		}
		return (count);
	}
	unsigned int avgdelay(unsigned int delay_time[])
	{
		unsigned int sum=0;
		for (int i=0;i<500;i++)
		{
			sum+=delay_time[i];
		}
		return (sum/500);
	}
	int main(void)
	{
		OSCCAL=0XA0;
		unsigned int delay_time[500],delay_time1;
		unsigned int i=0;
		char c[]="GOPAL BHAGAT";
		DDRD=0x00;
		DDRB=0xff;
		PORTB=0x00;
		PORTD=0x00;
		_delay_ms(1000);
		for (i=0;i<500;i++)
		{
			
		delay_time[i]=(get_rpu()*250)/360;}
		
		
		delay_time1=avgdelay(delay_time);
		delay_time[1]=delay_time1;
		
		while(1)
		{	//wait for the sensor to start at the reference point
			while(!(bit_is_clear(PIND,2)));
			
			print(c,delay_time1);
			delay_time[0]=(get_rpu()*250)/360;
			delay_time1=((i*delay_time1)+delay_time[0])/(1+i);
			i++;
			if (delay_time1<(.90*delay_time[1]))
			{
				delay_time1=delay_time[1];
			}
			
			
			
		}
	}
