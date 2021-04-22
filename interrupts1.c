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

int a[]={0X01,0X02,0X04,0X08,0X10,0X020,0X40,0X80};
int b[]={0X01,0X03,0X07,0X0F,0X1F,0X3F,0X7F,0XFF};
 
 while(1)
 {
	while(count==0)
	{
		
	for(int i=0;i<=7 && count==0;i++)
	{
		//while(count==0)
		{
		PORTC=a[i];
		__delay_ms(10);
		}
	}
	}
while(count==1)
	for(int i=0;i<=7;i++)
	{
		PORTC=b[i];
		__delay_ms(10);
		count=0;
	}
}
}

void interrupt ISR()
{
	if(INTF==1)
	{
		count++;
	}INTF=0;
}
	
		 


