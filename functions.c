#include <stdio.h>

int add3(int a, int b, int c) {
    printf("Inside add3 function\n");
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    printf("c = %i\n", c);
    return a + b + c;
}

int main() {
    int x, y, z, sum;
    
    printf("Enter 3 integers separated by spaces: ");
    scanf("%i %i %i", &x, &y, &z);

    add3(x, y, z); 

    return 0;
}

