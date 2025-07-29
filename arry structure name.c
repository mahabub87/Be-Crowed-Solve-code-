#include<stdio.h>
struct person
{
    char name[50];
       int age;
    int salary;
};

int main()
{
    struct person person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Enter information for person %d\n",i+1);
        printf("Enter Name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter Age = ");
        scanf("%d",&person[i].age);
        printf("\nEnter salary = ");
        scanf("%d",&person[i].salary);
    }
    for(i=0; i<4; i++)
    {
        printf("\nInformation for person %d\n",i+1);
        printf("Name = %s",person[i].name);
        printf("\n Age = %d\n",person[i].age);
        printf("\nsalary = %d\n",person[i].salary);
    }
}
