#include <reg51.h>
sbit led1=P1^0;
sbit led2=P1^1;
sbit led3=P1^2;
sbit led4=P1^3;
sbit led5=P2^0;
sbit led6=P2^1;
sbit led7=P2^2;
sbit led8=P2^3;
void main()
{
unsigned int i;
P1=0x00; P2=0x00;
while(1)
{
led1=0xff;
led2=0x00;
led3=0xff;
led4=0x00;
led5=0xff;
led6=0x00;
led7=0xff;
led8=0x00;
for(i=0;i<60000;i++);
led1=0x00;
led2=0xff;
led3=0x00;
led4=0xff;
led5=0x00;
led6=0xff;
led7=0x00;
led8=0xff;
for(i=0;i<60000;i++);
}
}