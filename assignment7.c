#include<stdio.h>
void main()
{
   char str1[20];
   char str2[20];
   printf("Enter First String: ");
   gets(str1);
   printf("\nEnter Second String: ");
   gets(str2);
   int d;
   d=strcat(str1,str2);
   printf("\nTwo String Concatenation is :%s\n",d);











}
