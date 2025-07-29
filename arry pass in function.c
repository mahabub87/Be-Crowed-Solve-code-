#include<stdio.h>
int main()
{
    int ary[20],n,i;
    printf("Enter Array size: ");
    scanf("%d",&n);
    printf("Enter Your Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    display(ary);
}
void display(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
