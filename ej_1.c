#include <stdio.h>

void main() {
    int sum = 0;

    printf("Sumando numeros: \n");
    
    for (int i = 0; i <= 10; i++) {
        sum = sum + i;
    }

    printf("%d\n", sum);
}