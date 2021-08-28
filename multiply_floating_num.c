#include <stdio.h>
int main() {
    double a, b, product;
    printf("\nEnter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("\nProduct = %.6lf\n", product);
    
    return 0;
}
