#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototipo o Declaracion
void checkInput(int code, char *type);
bool isPrime(int number);

int main()
{
    int initial;
    int final;
    int current;

    // Inputs:

    printf("Buscador de numeros primos, ingrese valor inicial y final\n\n");

    printf("Ingrese el inicial: ");
    checkInput(scanf("%d", &initial), "inicial");

    printf("Ingrese el final: ");
    checkInput(scanf("%d", &final), "final");

    if (initial == 1)
    {
        initial = initial + 1;
    }

    for (current = initial; current <= final; current++)
    {

        if (isPrime(current))
        {
            printf("%d es primo!\n", current);
        }
    }

    return 0;
}

// Definicion
void checkInput(int code, char *type)
{
    if (code == 0)
    {
        printf("Numero %s invalido\n", type);
        exit(1);
    }

    if (code == EOF)
    {
        printf("Fin inesperado del input\n");
        exit(1);
    }
}

bool isPrime(int number)
{
    for (int divisor = 2; divisor * divisor <= number; divisor++)
        if (number % divisor == 0)
            return false;

    return true;
}
