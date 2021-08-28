#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("\nEnter dividend: ");
    scanf("%d", &dividend);
    printf("\nEnter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0;
}

