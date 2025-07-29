#include<stdio.h>
void main()
{
   char str[30],ch;
   int vowel,consonant,i;
   printf("Enter Any String: ");
   gets(str);
   i=vowel=consonant=0;
   while((ch=str[i])!='\0')
   {
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
            vowel++;
       else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        consonant++;
        i++;

   }
    printf("\nNumber of Vowel:%d\n",vowel);
    printf("\nNumber of Consonant:%d\n",consonant);








}
