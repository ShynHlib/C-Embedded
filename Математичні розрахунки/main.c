#include <stdio.h>
#include <math.h>

int main() {
    double x, z1, z2;

    printf(«Type alfa: ");
    scanf("%lf", &x);

    z1 = 1 - 1.0/4 * pow(sin(2*x), 2) + cos(2*x);
    z2 = pow(cos(x), 2) + pow(cos(x), 4);

    printf("z1 = %lf\n", z1);
    printf("z2 = %lf\n", z2);

    return 0;
}
