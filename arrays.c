#include <stdio.h>

int main() {
    char str[6] = "hello";
    
    for(int i = 0; i < 6; i++)
    {
        printf("str[%i] = %c and %i (ASCII code)\n", i, str[i], str[i]);
    }

    return 0;
}
