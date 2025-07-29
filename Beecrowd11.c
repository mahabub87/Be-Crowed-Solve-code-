#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double radius, volume;
    const double pi = 3.14159;
    scanf("%lf", &radius);

    // Calculate the volume
    volume = (4.0 / 3.0) * pi * pow(radius, 3);

    // Display the result
    printf("VOLUME = %.3lf\n", volume);


}

