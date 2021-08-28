#include <math.h>
#include <stdio.h>

int main() {
    double base, exp, result;
    printf("\nEnter a base number: ");
    scanf("%lf", &base);
    printf("\nEnter an exponent: ");
    scanf("%lf", &exp);

    // calculates the power
    result = pow(base, exp);

    printf("\nAnswer=%.1lf^%.1lf = %.2lf\n", base, exp, result);
    return 0;
}
//gcc filename.c -lm for compilation in linux
