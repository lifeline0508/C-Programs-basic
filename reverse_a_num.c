#include <stdio.h>
int main() {
    int n, rev = 0, remainder;
    printf("\n\nEnter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    return 0;
}

