#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nEnter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("\nFrequency of %c = %d\n", ch, count);
    return 0;
}

