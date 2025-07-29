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
  d=strcmp(str1,str2);
  if(d==0)
    printf("\nTwo_String_Is_ SAME");
  else
    printf("\nTwo_String_IS_NOT_ SAME");














}
