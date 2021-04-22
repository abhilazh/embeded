#include<pic.h>
#define _XTAL_FREQ 16000000
__CONFIG (0X3F7A);
int c=0;
void main()
{
   //int c=0;
   GIE=1;
   PEIE=1;
   INTE=1;
   TRISB=0X01;
   TRISC=0X00;
   PORTC=0X00;
 while(1)
{
if(c==1)
   { PORTC=0X01;
     c=1;
   }
if(c==2)
   { PORTC=0X02;
     c=2;
   }
if(c==3)
   { PORTC=0X04;
     c=3;
   }
}
}
void interrupt isr()
{ 
   if(INTF==1)
    {
      c++;
    }
INTF=0;
}