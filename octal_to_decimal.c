#include <stdio.h>
#include <math.h>

long long convertOctalToDecimal(int octalNumber);
int main()
{
    int octalNumber;

    printf("\nEnter an octal number: ");
    scanf("%d", &octalNumber);

    printf("\n%d in octal = %lld in decimal\n", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}

long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}


