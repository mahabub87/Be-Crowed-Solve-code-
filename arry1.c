#include<stdio.h>
void main()
{
    int ary1[50],ary2[50],i,n;
    printf("Enter ary size:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ary1[i]);
    }
    printf("Array1:");
    for(i=0; i<n; i++)
    {
        printf("%d",ary1[i]);
    }
    for(i=0; i<n; i++)
    {
        ary2[i]=ary1[i];
    }
    printf("\n arry2:");
    for(i=0; i<n; i++)
    {
        printf("%d",ary2[i]);
    }






}
