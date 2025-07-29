#include <stdio.h>

struct Footballer
{
    char name[50];
    int jersey_number;
    int age;
    char club[50];
    float daily_wage;
    float monthly_wage;
    float yearly_wage;
};

int calculate_wages(struct Footballer *p)
{
    p->daily_wage = p->monthly_wage / 30;
    p->yearly_wage = p->monthly_wage * 12;
}

int main()
{
    int n,i;
    printf("Enter How Many Player: ");
    scanf("%d",&n);
    struct Footballer team[n];
    for (i = 0; i < n; i++)
    {
        printf("name  %d: ", i + 1);
        scanf("%s", team[i].name);
        printf("jersey number %d: ", i + 1);
        scanf("%d", &team[i].jersey_number);
        printf("age %d: ", i + 1);
        scanf("%d", &team[i].age);
        printf(" club name %d: ", i + 1);
        scanf("%s", team[i].club);
        printf("monthly wage  %d: ", i + 1);
        scanf("%f", &team[i].monthly_wage);
        calculate_wages(&team[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\n", team[i].name);
        printf("Jersey Number: %d\n", team[i].jersey_number);
        printf("Age: %d\n", team[i].age);
        printf("Club: %s\n", team[i].club);
        printf("Daily Wage: %.2f\n", team[i].daily_wage);
        printf("Monthly Wage: %.2f\n", team[i].monthly_wage);
        printf("Yearly Wage: %.2f\n", team[i].yearly_wage);
    }
    return 0;
}

