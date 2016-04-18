/*
 * IncFile1.h
 *
 * Created: 15-02-2015 11:38:08 AM
 *  Author: Aditya Prasad Bhagat
 */ 


#ifndef CHARECTERSET_H_
#define CHARECTERSET_H_
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>

void delay_us(unsigned int num)
{
	unsigned int i;
	for(i=0;i<num;i++)
	{
		_delay_us(1);
	}
}

void print_char(char input,unsigned int time)
{
	
	switch(input)
	{	
		case' ':delay_us(time);break;
		case':':PORTB=0x00;delay_us(time);PORTB ^=(0x66);delay_us(time);PORTB=0x00;delay_us(time);break;//':'
		case'+':PORTB=0x10;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x7C;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x00;break;//+
		case'-':PORTB=0x10;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x00;break;//-
		case'A':PORTB=0x3F;delay_us(time);PORTB=0x48;delay_us(time);PORTB=0x88;delay_us(time);PORTB=0x48;delay_us(time);PORTB=0x3F;delay_us(time);PORTB=0x00;break;//A
		case'B':PORTB=0xFF;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0xAA;delay_us(time);PORTB=0x44;delay_us(time);PORTB=0x00;break;//B
		case'C':PORTB=0x3C;delay_us(time);PORTB=0x42;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x00;break;//C
		case'D':PORTB=0xFF;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x42;delay_us(time);PORTB=0x3C;delay_us(time);PORTB=0x00;break;//D
		case'E':PORTB=0xFF;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x00;break;//E
		case'F':PORTB=0xFF;delay_us(time);PORTB=0x90;delay_us(time);PORTB=0x90;delay_us(time);PORTB=0x90;delay_us(time);PORTB=0x80;delay_us(time);PORTB=0x00;break;//F
		case'G':PORTB=0xFF;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x9D;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x9F;delay_us(time);PORTB=0x00;break;//G
		case'H':PORTB=0xFF;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//H
		case'I':PORTB=0x81;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x00;break;//I
		case'J':PORTB=0x87;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0x00;break;//J
		case'K':PORTB=0xFF;delay_us(time);PORTB=0x18;delay_us(time);PORTB=0x24;delay_us(time);PORTB=0x42;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x00;break;//K
		case'L':PORTB=0xFF;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0x00;break;//L
		case'M':PORTB=0xFF;delay_us(time);PORTB=0x40;delay_us(time);PORTB=0x30;delay_us(time);PORTB=0x40;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//M
		case'N':PORTB=0xFF;delay_us(time);PORTB=0x60;delay_us(time);PORTB=0x18;delay_us(time);PORTB=0x06;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//N
		case'O':PORTB=0x3C;delay_us(time);PORTB=0x42;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x42;delay_us(time);PORTB=0x3C;delay_us(time);PORTB=0x00;break;//O
		case'P':PORTB=0xFF;delay_us(time);PORTB=0x88;delay_us(time);PORTB=0x88;delay_us(time);PORTB=0x50;delay_us(time);PORTB=0x20;delay_us(time);PORTB=0x00;break;//P
		case'Q':PORTB=0x3C;delay_us(time);PORTB=0x42;delay_us(time);PORTB=0x85;delay_us(time);PORTB=0x42;delay_us(time);PORTB=0x3D;delay_us(time);PORTB=0x00;break;//Q
		case'R':PORTB=0xFF;delay_us(time);PORTB=0x88;delay_us(time);PORTB=0x8C;delay_us(time);PORTB=0x52;delay_us(time);PORTB=0x21;delay_us(time);PORTB=0x00;break;//R
		case'S':PORTB=0x72;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0x46;delay_us(time);PORTB=0x00;break;//S
		case'T':PORTB=0x80;delay_us(time);PORTB=0x80;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x80;delay_us(time);PORTB=0x80;delay_us(time);PORTB=0x00;break;//T
		case'U':PORTB=0xFF;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//U
		case'V':PORTB=0xF8;delay_us(time);PORTB=0x06;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0x06;delay_us(time);PORTB=0xF8;delay_us(time);PORTB=0x00;break;//V
		case'W':PORTB=0xFF;delay_us(time);PORTB=0x02;delay_us(time);PORTB=0x0C;delay_us(time);PORTB=0x02;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//W
		case'X':PORTB=0xC1;delay_us(time);PORTB=0x36;delay_us(time);PORTB=0x08;delay_us(time);PORTB=0x36;delay_us(time);PORTB=0xC1;delay_us(time);PORTB=0x00;break;//X
		case'Y':PORTB=0xC0;delay_us(time);PORTB=0x30;delay_us(time);PORTB=0x0F;delay_us(time);PORTB=0x30;delay_us(time);PORTB=0xC0;delay_us(time);PORTB=0x00;break;//Y
		case'Z':PORTB=0x83;delay_us(time);PORTB=0x85;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0xB1;delay_us(time);PORTB=0xC1;delay_us(time);PORTB=0x00;break;//Z
		case'1':PORTB=0x01;delay_us(time);PORTB=0x41;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0x01;delay_us(time);PORTB=0x00;break;//1
		case'2':PORTB=0xCF;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0xF9;delay_us(time);PORTB=0x00;break;//2
		case'3':PORTB=0x81;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//3
		case'4':PORTB=0xF0;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0x10;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//4
		case'5':PORTB=0xF1;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x9F;delay_us(time);PORTB=0x00;break;//5
		case'6':PORTB=0xFF;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x9F;delay_us(time);PORTB=0x00;break;//6
		case'7':PORTB=0x80;delay_us(time);PORTB=0x80;delay_us(time);PORTB=0x80;delay_us(time);PORTB=0x80;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//7
		case'8':PORTB=0xFF;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0x91;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//8
		case'9':PORTB=0xF9;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0x89;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//9
		case'0':PORTB=0xFF;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0x81;delay_us(time);PORTB=0xFF;delay_us(time);PORTB=0x00;break;//0
		case'=':PORTB=0x28;delay_us(time);PORTB=0x28;delay_us(time);PORTB=0x28;delay_us(time);PORTB=0x28;delay_us(time);PORTB=0x28;delay_us(time);PORTB=0x00;break;//=
		default :break;
		
	}
}
void print(char c[], unsigned int time)
{
	int n=strlen(c);
	for (int i=0;i<n;i++)
	{
		print_char(c[i],time);
		delay_us(time);
	}
}
#endif /* CHARECTERSET_H_ */