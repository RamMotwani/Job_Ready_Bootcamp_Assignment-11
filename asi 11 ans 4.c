#include<stdio.h>
int next_prime(int n)
{
    int i;
    do
    {
        n++;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
    }while(i==n);

    return n;

}
