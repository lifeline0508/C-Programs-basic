#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("\nEnter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("\nSum of %d natural number = %d\n",n , sum);
    return 0;
}

