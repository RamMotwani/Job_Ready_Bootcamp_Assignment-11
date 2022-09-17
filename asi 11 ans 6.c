#include<stdio.h>
void prime_between_two(int a, int b)
{
    int min,max;
    max=a>b?a:b;
    min=a>b?b:a;
    while(min<=max)
    {
        if(min%2==0)
        {
            min++;
        }
        else
        {
            printf("%d",min);
            min++;
        }

    }
}
