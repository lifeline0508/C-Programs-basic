#include <stdio.h>

int main() {
int n;
printf ("\n\nEnter the decimal number to be coverted in binary : ");
scanf ("%d", &n);
int rem;
int a[15];
int i = 0;

while(n)
{
    rem = n%2 ;
    n = n/2;
    a[i]= rem;
    i++;
}
printf("\nBinary:");
for (int j = i - 1; j >=0; j--)
{
    printf("%d", a[j]);
}
printf("\n");

return 0;
}
