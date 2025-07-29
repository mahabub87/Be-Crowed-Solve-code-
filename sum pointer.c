#include<stdio.h>
int main()
{
    int x,y;
    printf("Before Swapping: x=%d,y=%d\n",x,y);
    scanf("%d %d",&x,&y);

    swapping(&x,&y);
   // printf("After Swapping: x=%d,y=%d\n",x,y);
printf("sum=%d\n",x+y);


}
void swapping(int *ptr1, int *ptr2)
{
   int temp=0;
   temp=*ptr1 + *ptr2;


}


