
#include<stdio.h>
void main()
{
    int ary[50],n,i;
    printf("Enter The Array Size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Your array %d: ",i);
        scanf("%d",&ary[i]);
    }

    int *ptr;
    ptr= &ary[0];
    for(i=0;i<n;i++)
    {
        printf("\n pointer Your Array is :%d\n",*ptr);
        ptr++;
    }






}
