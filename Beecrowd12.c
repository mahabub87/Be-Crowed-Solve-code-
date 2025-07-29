#include<stdio.h>
#include<math.h>
int main()
{

    double A, B, C;
    scanf("%lf %lf %lf",&A,&B, &C);

    double triangle = 0.5 * A * C;
    double circle = 3.14159 * pow(C, 2);
    double trapezium = 0.5 * (A + B) * C ;
    double square = pow(B, 2);
    double rectangle = A * B ;

    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);
}
