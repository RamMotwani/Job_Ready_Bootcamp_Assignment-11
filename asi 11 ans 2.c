#include<stdio.h>
int HCF(int a, int b)
{
    int min;
    for(min=a>b?b:a;min>=1;min--)
    {
        if(min%a==0&&min%b==0)
        {
            return min;
        }
    }
}
