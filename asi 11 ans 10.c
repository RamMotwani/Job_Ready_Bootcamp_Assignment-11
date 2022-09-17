#include<stdio.h>
int factorial(int);
int series();
main()
{
    int ser;
    printf("program to find the sum of the series");
    ser=series();
    printf("%d",ser);
    return 0;

}
int series()
{
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum=sum+factorial(i)/i;

    }
    return sum;
}
int factorial(int n)
{
    int fact=1;
    while(n)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}
