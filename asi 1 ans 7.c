#include<stdio.h>
void fibonacci_series(int n)
{
    int count=1,c=0,a=1,b=0;
    while(count<=n)
    {
        printf("%d",c);
        c=a+b;
        a=b;
        b=c;
        count++;
    }
}
