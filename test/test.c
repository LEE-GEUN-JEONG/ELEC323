#include <reg51.h>
#include <intrins.h>

sbit P3b4 = P3^4;
sbit P3b3 = P3^3;

void DelayUS(unsigned char us);
void DelayMS(unsigned char ms);

void main(void)
{

	
	while(1)
	{
				P3b4 = 1;
				P3b3 = 1;
				P1 = 0xF9; //0b11111001;
				DelayMS(5);
				
				P3b3 = 0;
				P1 = 0xA4; //0b10100100;
				DelayMS(5);
				
				P3b4 = 0;
				P3b3 = 1;
				P1 = 0xB0; //0b10110000;
				DelayMS(5);
				
				P3b3 = 0;
				P1 = 0x99; //0b10011001;
				DelayMS(5);
	}
}
	

void DelayUS(unsigned char us)
{
	while (us--)
  {
		_nop_();
  }
}


void DelayMS(unsigned char ms)
{
	unsigned long us = 1000*ms;

	while (us--)
  {
		_nop_();
  }
}
	