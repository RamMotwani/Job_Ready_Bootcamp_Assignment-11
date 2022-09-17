#include<stdio.h>
void square(int);
int main()
{
    int a;
    printf("enter a no. to find its square");
    scanf("%d",&a);
    square(a);
    return 0;
}
void square(int n)
{
    int s;
    s=n*n;
    printf("square of a given no. is %d",s);

}



