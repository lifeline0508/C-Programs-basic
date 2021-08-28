#include <stdio.h>
int main() {
    int n, i;
    float num[]={}, sum = 0.0, avg;

    printf("\nEnter the numbers of elements: ");
    scanf("%d", &n);

    while (n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }
    for (i = 0; i < n; ++i) {
        printf("\n%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("\nAverage = %.2f\n", avg);
    return 0;
}

