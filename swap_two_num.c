#include<stdio.h>
int main() {
      double first, second, temp;
      printf("\nEnter first number: ");
      scanf("%lf", &first);
      printf("\nEnter second number: ");
      scanf("%lf", &second);

      // Value of first is assigned to temp
      temp = first;

      // Value of second is assigned to first
      first = second;

      // Value of temp (initial value of first) is assigned to second
      second = temp;

      // %.2lf displays number up to 2 decimal points
      printf("\nAfter swapping, firstNumber = %.2lf\n", first);
      printf("After swapping, secondNumber = %.2lf\n", second);
      return 0;
}
