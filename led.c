#include <reg51.h>

sbit led1 = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;
sbit led4 = P1^3;
sbit led5 = P2^0;
sbit led6 = P2^1;
sbit led7 = P2^2;
sbit led8 = P2^3;

void delay()
{
    unsigned int i, j;
    for(i = 0; i < 500; i++)
        for(j = 0; j < 500; j++);
}

void main()
{
    while(1)
    {
        led1 = 1;
        led2 = 0;
        led3 = 1;
        led4 = 0;
        led5 = 1;
        led6 = 0;
        led7 = 1;
        led8 = 0;

        delay();

        led1 = 0;
        led2 = 1;
        led3 = 0;
        led4 = 1;
        led5 = 0;
        led6 = 1;
        led7 = 0;
        led8 = 1;

        delay();
    }
}
