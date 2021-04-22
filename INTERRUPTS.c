#include<pic.h>
#define _XTAL_FREQ 16000000
__CONFIG(0x3F7A);
int count=0;

void main()
{
TRISC=0x00;
TRISB=0x01;
GIE=1;
PEIE=1;
INTE=1;
while(1)
{  

switch(count)
{

case 0:
	{
	PORTC=0x01;
	__delay_ms(10);
		
		PORTC=0x02;
	__delay_ms(10);
		PORTC=0x04;
	__delay_ms(10);
		PORTC=0x08;
	__delay_ms(10);
		PORTC=0x10;
		__delay_ms(10); 
		PORTC=0x20;
		__delay_ms(10);
		PORTC=0x40;
		__delay_ms(10);
		PORTC=0x80;
		__delay_ms(10);
	}
 case 1:
	{
		PORTB=0x10;
	PORTC=0x01;
__delay_ms(10);
	PORTC=0x03;
	__delay_ms(10);
	PORTC=0x07;
	__delay_ms(10);
	PORTC=0x0F;
	__delay_ms(10);
	PORTC=0x1F;
	__delay_ms(10);
	PORTC=0x3F;
	__delay_ms(10);
	PORTC=0x7F;
	__delay_ms(10);
	PORTC=0xFF;
	__delay_ms(10);
	count=0;
	}




}
}
void interrupt ISR()
{
	
	if(INTF==1)
	{
		count=count+1;
	
		

	
                
    }		INTF=0;

}		