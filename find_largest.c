#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("\nEnter the number of elements: ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("\nEnter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("\n=>Largest element = %.2lf\n", arr[0]);

  return 0;
}

