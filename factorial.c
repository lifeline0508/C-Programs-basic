#include<stdio.h>

/*
Program to print factorial of positive numbers
*/

int main() {

    int n, fact=1; // Initialize fact with 1 for further multiplications
    printf("Enter a number");
    scanf("%d", &n);
    printf("Factorial=");
    if(n>=0)  // Work only if number is positive
    {
        for(int i = 2; i <= n; i++) 
        fact*=i; // Iterate as fact*2*3*.....*n
        printf("%d\n", fact); // At last print the factorial
    }
    else printf("Undefined number given is negative\n"); // print undefined if number is negative
    return 0;
}
