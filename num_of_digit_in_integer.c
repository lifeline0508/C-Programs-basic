#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("\n\nEnter an integer: ");
    scanf("%lld", &n);
 
    // iterate until n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 in each iteration
    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }

    printf("\nNumber of digits: %d\n", count);
}

