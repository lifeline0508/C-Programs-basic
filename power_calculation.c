#include <stdio.h>
int main() {
    int base, exp;
    long double result = 1.0;
    printf("\nEnter a base number: ");
    scanf("%d", &base);
    printf("\nEnter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("\nAnswer = %.2Lf\n", result);
    return 0;
}
