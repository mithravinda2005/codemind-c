#include<stdio.h>
int main()
{
    float b,d,h,g;
    scanf("%f",&b);
    if(b<=10000)
    {
        d=b*0.80;
        h=b*0.20;
    }
    else if(b<=20000)
    {
        d=b*0.90;
        h=b*0.25;
    }
    else
    {
        d=b*0.95;
        h=b*0.30;
    }
    g=b+d+h;
    printf("%.2f",g);
}