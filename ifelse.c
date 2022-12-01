#include <stdio.h>

int main() {
    int a, b;    // Create a 3rd variable 'c'

    printf("Enter two integers separated by spaces: ");
    scanf("%i %i", &a, &b);   // Get input for all THREE variables

    // Test whether a is equal, greater than, or less than the sum of b and c.
    if(a == b) {
        printf("%i is equal to %i", a, b);
    }
    else if(a > b) {
        printf("%i is greater than %i\n", a, b);
    }
    else {
        printf("%i is less than %i\n", a, b);
    }

    return 0;
}
