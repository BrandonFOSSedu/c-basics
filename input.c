#include <stdio.h>

int main() {
    int a, b;
    float x, y;
    char str[50];

    printf("Enter two integers separated by a space: ");
    scanf("%i %i", &a, &b);
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &x, &y);
    printf("Enter your name: ");
    scanf("%s", str);

    printf("Hello, %s. The sum of all of your numbers are: %f\n", str, a + b + x + y);

    return 0;
}
