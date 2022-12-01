#include <stdio.h>

int main() {
    int a = 7, b = -4;
    float x = 2.5, y = -2.501;
    char c = 'M', d = 'R';   // Single character = 1 byte

    printf("a + b = %i\n", a + b);
    printf("x + y = %f\n", x + y);
    printf("c + d = %c\n", c + d);
    printf("c + d = %i (ASCII code)\n", c + d);
    printf("b + y = %f\n", b + y);
    printf("c - a = %c\n", c - a);
    printf("c - a = %i (ASCII code)\n", c - a);

    return 0;
}
