#include<pic.h>
#define _XTAL_FREQ 16000000
__CONFIG(0x3F7A);
void main()
{
	TRISC=0x00;
	while(1)
	{
		PORTC=0x01;
		__delay_ms(15);
		PORTC=0x00;
		__delay_ms(100);
		PORTC=0x03;
		__delay_ms(15);
		PORTC=0x07;
		__delay_ms(100);
		PORTC=0x0F;
		__delay_ms(100);
		PORTC=0x1F;
		__delay_ms(100);
		PORTC=0x3F;
		__delay_ms(100);
		PORTC=0x7F;
		__delay_ms(100);
		PORTC=0xFF;
		__delay_ms(100);

	}
}		
