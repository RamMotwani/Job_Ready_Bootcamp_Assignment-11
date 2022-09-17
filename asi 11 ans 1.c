#include<stdio.h>
int LCM(int a, int b)
{
    int l,max;
    max=a>b?a:b;
    for(l=max;l<=a*b;l=l+max)
    {
        if(l%a==0 && l%b==0)
            return l;
    }

}

