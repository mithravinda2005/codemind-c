#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,r,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
}