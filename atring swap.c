#include<stdio.h>
void main()
{
    char str3[15];

    char str1[15];
    printf("FIRST NAME:");
    gets(str1);
    char str2[15];
    printf("Second Name:");
    gets(str2);
    strcpy(str3,str1);
    strcpy(str1,str2);
    strcpy(str2,str3);
    printf("Swap String1:%s\n",str1);
    printf("Swap String2:%s\n",str2);












}
