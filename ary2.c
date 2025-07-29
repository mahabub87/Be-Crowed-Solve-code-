#include<stdio.h>
void main()
{
    int a1[100],a2[100],a3[100],i,n;
    printf("Enter ARRY size:");
    scanf("%d",&n);
    printf("First Number:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("secound Number:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a2[i]);
    }
    printf("Final Number:");
    for(i=0; i<n; i++)
    {
        a3[i]=a1[i]+a2[i];
          printf("%d",a3[i]);
    }










}
