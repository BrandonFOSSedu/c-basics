#include <stdio.h>

int main() {
    short int a;

    printf("Enter a number: ");
    scanf("%hu", &a);
    while(a > 0)
        printf("Decrementing a... a = %i\n", --a);

    return 0;
}
