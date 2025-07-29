#include <stdio.h>

int main()
{
    int code1, quantity1, code2, quantity2;
    float price1, price2, totalAmount;


    scanf("%d", &code1);

    scanf("%d", &quantity1);

    scanf("%f", &price1);



    scanf("%d", &code2);

    scanf("%d", &quantity2);

    scanf("%f", &price2);


    totalAmount = (quantity1 * price1) + (quantity2 * price2);


    printf("VALOR A PAGAR: R$ %.2f\n", totalAmount);


}

