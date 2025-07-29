#include<stdio.h>
int main()
{
    int x;
    printf("Enter Your value: ");
    scanf("%d",&x);
    printf("Square Is:%d\n",squ(x));
}
int squ(int a)
{
    return a*a;
}
