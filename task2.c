#include <stdio.h>

struct Shopkeeper {
    char name[50];
    int id;
    float dailySales;
    float dailyRevenue;
};

int inputShopkeeperInfo(struct Shopkeeper *s) {
    printf("shopkeeper name: ");
    scanf("%s", s->name);
    printf("ID: ");
    scanf("%d", &s->id);
    printf(" daily sales: ");
    scanf("%f", &s->dailySales);
    printf("daily revenue: ");
    scanf("%f", &s->dailyRevenue);
}

int calculateMonthlyRevenue(struct Shopkeeper *s) {
    float monthlyRevenue = s->dailyRevenue * 30;
    printf("Monthly revenue of shop: %.2f", monthlyRevenue);
}

int main() {
    struct Shopkeeper s;
    inputShopkeeperInfo(&s);
    calculateMonthlyRevenue(&s);
    return 0;
}

