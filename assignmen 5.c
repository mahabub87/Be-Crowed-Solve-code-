#include<stdio.h>
int main()
{
    int n;
    printf("Enter Size of the Array:");
    scanf("%d",&n);
    min_max(n);
    return 0;
}
void min_max(int n)
{
    int a[300],i,min,max;
    printf("Enter Elements in Array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min = max = a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Minimum of Array is:%d",min);
    printf("Maximum of Array is :%d",max);
}

