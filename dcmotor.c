#include<pic.h>
#define _XTAL_FREQ 16000000
__CONFIG(0x3F7A);
void main()
{
	int COUNT=1;
	PORTC=0x00;
	TRISC=0x04;
	while(1)
	{
			
		while(RC2==1)
		{ 
			switch(COUNT)
			{
				case 1:__delay_ms(15);

						 PORTC=0x18;
						__delay_ms(15);
						 PORTC=0x00;
						__delay_ms(15);
						 PORTC=0x18;
						__delay_ms(15);
						 PORTC=0x00;
						COUNT++;
						break;
				case 2: __delay_ms(15);
						PORTC=0x55;
						COUNT++;
						break;

				default: PORTC=0x08;
							__delay_ms(100);
						PORTC=0x00;
						
						COUNT++;
							break;
						 
			}
			


	}COUNT=1;
}
}