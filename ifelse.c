#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers separated by spaces: ");
    scanf("%i %i", &a, &b);

    if(a == b) {
        printf("Your two numbers are equal\n");
    }
    else if(a > b) {
        printf("%i is greater than %i\n", a, b);
    }
    else {
        printf("%i is less than %i\n", a, b);
    }

    return 0;
}
