#include<stdio.h>
void main()
{
    int i,j;
    int ary1[3][4],ary2[3][4];
    printf("Enter Elements of ARRAY 1! Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("array1[%d][%d]=",i,j);
            scanf("%d",&ary1[i][j]);
            printf("\n");
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",ary1[i][j]);
        }
         printf("\n");
    }
     printf("Enter Elements of ARRA 2! Matrix:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("array2[%d][%d]=",i,j);
            scanf("%d",&ary2[i][j]);
            printf("\n");
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",ary2[i][j]);
        }
         printf("\n");

    }

















}
