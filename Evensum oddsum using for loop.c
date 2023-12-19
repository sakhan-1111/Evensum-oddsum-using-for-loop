#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,es=0,os=0;

    for(i=2; i<=100; i=i+2)
    {es=es+i;}
    printf("Evensum = %d\n", es);

    for(j=1; j<=99; j=j+2)
    {os=os+j;}
    printf("Oddsum = %d", os);

    return 0;
}
