#include<stdio.h>
int main()
{
    int base,height;
    printf("Enter Base : ");
    scanf("%d",&base);
     printf("Enter Height : ");
    scanf("%d",&height);
    printf("Area Of Triangle Is: %d\n",area(base,height));

}
int area(int a,int b)
{
    return (0.5*a*b);
}
