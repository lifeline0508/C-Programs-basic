#include <stdio.h>
int main() {

  int n, i, range;
  printf("\nEnter an integer whose table you want: ");
  scanf("%d", &n);

  // prompt user for positive range
  do {
    printf("\nEnter the range (positive integer) upto which you want the table: ");
    scanf("%d", &range);
  } while (range <= 0);

  for (i = 1; i <= range; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
printf("\n");
  return 0;
}

