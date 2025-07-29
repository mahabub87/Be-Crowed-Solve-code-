#include<stdio.h>
void main()
{
    int x,y,temp;
    printf("Enter The value Of X = ");
    scanf("%d",&x);
    printf("\nEnter The value Of Y = ");
    scanf("%d",&y);
    printf("\nX = %d\n",x);
    printf("\nY = %d\n",y);
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("\n swap X=%d\n",*ptr1);
    printf("\n swap Y=%d\n",*ptr2);










}
