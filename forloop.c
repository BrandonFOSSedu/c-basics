#include <stdio.h>

int main() {
    int a = 0;

    for(int i = 1; i <= 10; i++)
        printf("Iteration #%i with a = %i\n", i, a--);

    return 0;
}
