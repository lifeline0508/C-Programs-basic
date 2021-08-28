#include <stdio.h>
int checkPrimeNumber(int n);
int main() {
    int n1, n2, i, flag;
    printf("\n\nEnter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i) {

        // flag will be equal to 1 if i is prime
        flag = checkPrimeNumber(i);

        if (flag == 1)
            printf("%d\t ", i);
    }
    printf("\n");
    return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n) {
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}
