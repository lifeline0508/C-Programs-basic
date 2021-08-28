#include <stdio.h>
int main() {
    int n1, n2, i, gcd, lcm;
    printf("\nEnter two integers: ");
    scanf("%d %d", &n1, &n2);
	 n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2; //if given number is negative change in positive
    for (i = 1; i <= n1 && i <= n2; ++i) {
        
        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("The LCM of two numbers %d and %d is %d.\n", n1, n2, lcm);
    return 0;
}
