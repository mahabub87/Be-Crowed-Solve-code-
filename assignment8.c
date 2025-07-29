#include<stdio.h>
void main()
{
   char str[30],ch;
   int letter,digit,other,i;
   printf("Enter Any String: ");
   gets(str);
   i=letter=digit=other=0;
   while((ch=str[i])!='\0')
   {
       if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        letter++;
       else if(ch>='0' && ch<='9')
       digit++;
       else
        other++;
        i++;

   }
    printf("\nNumber of Letter:%d\n",letter);
    printf("\nNumber of Digit:%d\n",digit);
    printf("\nNumber of Other:%d\n",other);







}
