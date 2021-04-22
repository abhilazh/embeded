#include<pic.h>
#define _XTAL_FREQ 16000000
__CONFIG(0x3F7A);
int count=0;

void main()
{
TRISC=0x00;
TRISB=0x01;
PORTC=0x00;
GIE=1;
PEIE=1;
INTE=1;
int a[]={0x00,0x01,0x03,0x07,0x0F,0x1F,0x3F,0x7F,0xFF};

while(1)
{
	while(count<=8)
	{
	
		
			PORTC=a[count];
	}count=0;
			
		
}
	
}


void interrupt ISR()
{
	if(INTF==1)
	{
		count++;
	}
	INTF=0;
}

