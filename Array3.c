#include<stdio.h>
void main()
{
    int ary[10]= {0};
    int n,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(ary[rem]==1)
            break;
        ary[rem]=1;
        n=n/10;
    }
    if(n>0)
        printf("YES");
    else
        printf("NO");












}
