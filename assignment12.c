#include <string.h>

int main()
{
    char s[1000],c;
    int i;

    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();

    for(i=0;s[i];i++)
    {
    	if(s[i]==c)
    	{
		    printf("character '%c' found at location: %d\n ",c,i);

		}
 	}




    return 0;
}
