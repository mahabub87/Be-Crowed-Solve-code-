#include<stdio.h>
void main()
{
    int ary1[20],ary2[20],ary3[20];
    int n,i;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    printf("Enter Array 1: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ary1[i]);
    }
    printf("Enter Array 2: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ary2[i]);
    }

    printf(" Array 3: ");
    for(i=0; i<n; i++)
    {
        ary3[i] = ary1[i] + ary2[i];
        printf("%d\n",ary3[i]);
    }

}
