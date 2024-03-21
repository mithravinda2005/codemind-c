#include<stdio.h>
int main()
{
    int i,n;
    float sum=00;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=1.0/i;
    }
    printf("%.2f",sum);
}