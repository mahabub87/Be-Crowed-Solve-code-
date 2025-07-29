#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person mahabub,rana;

    printf("Enter The Information of Mahabub: \n");
    printf("Enter Age = ");
    scanf("%d",&mahabub.age);
    printf("\nEnter Salary = ");
    scanf("%f",&mahabub.salary);

    printf("\nAGE = %d\n",mahabub.age);
    printf("\nSALARY = %.3f\n",mahabub.salary);

     printf("Enter The Information of Rana: \n");
    printf("Enter Age = ");
    scanf("%d",&rana.age);
    printf("\nEnter Salary = ");
    scanf("%f",&rana.salary);

    printf("\nAGE = %d\n",rana.age);
    printf("\nSALARY = %.3f\n",rana.salary);

    getch();
}
