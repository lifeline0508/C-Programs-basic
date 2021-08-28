#include <stdio.h>

int main(){
    float celsius,fahrenheit;
    printf("\n\nEnter the degree in celsius ");
    scanf("%f",&celsius);
    fahrenheit=celsius*1.8+32;
    printf("The degree of celsius to fahrenheit is %f\n\n",fahrenheit);
    return 0;
}
