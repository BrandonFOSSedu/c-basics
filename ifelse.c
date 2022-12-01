#include <stdio.h>

int main() {
    int a, b, c;    // Create a 3rd variable 'c'

    printf("Enter three integers separated by spaces: ");
    scanf("%i %i %i", &a, &b, &c);   // Get input for all THREE variables

    // Test whether a is equal, greater than, or less than the sum of b and c.
    if(a == b + c) {
        printf("%i is equal to the sum of %i and %i", a, b, c);
    }
    else if(a > b + c) {
        printf("%i is greater than the sum of %i and %i\n", a, b, c);
    }
    else {
        printf("%i is less than %i\n", a, b);
    }

    return 0;
}
