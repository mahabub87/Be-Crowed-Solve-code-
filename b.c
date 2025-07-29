#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Two Integer Number: ");
    scanf("%d %d",&a,&b);
    printf("Enter Your Choice: ");
    scanf("%d",&c);
    if(c==1)
   {
       if(a%2==0)
       {
          printf("%d is even",a);
       }
       else
       {
           printf("%d is Odd",a);
       }
   }
else if(c==2)
{
    if(b%2==0)
    {
        printf("%d if Even ",b);

    }
    else
    {
        printf("%d is Odd",b);
    }
}
else
{
    printf(" Invalid Choice");
}



}


