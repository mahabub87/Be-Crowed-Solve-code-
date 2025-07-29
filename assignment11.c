#include<stdio.h>
void main()
{
  char str[100],ch;
  int i,d;
  d=0;
  printf("\nEnter Any String: ");
  gets(str);
  printf("\nEnter A character you want to search: ");
  scanf("%c",&ch);
  for(i=0;i<=strlen(str);i++)
  {
      if(str[i]==ch)
      {
          d++;
          break;
      }

  }
  if(d==0)
    printf("\nSorry! Not Find The value '%c'",ch);
  else
    printf("\nSearch Your Element '%c' is Position %d",ch,i+1);



getch();







}
