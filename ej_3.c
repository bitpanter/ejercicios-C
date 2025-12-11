#include <stdio.h>
#include <stdlib.h>

// Prototipo o Declaracion
void checkInput(int code, char *type);

int main()
{
    int initial;
    int final;
    int eval;

    printf("Buscador de numeros primos, ingrese valor inicial y final:\n");

    printf("Ingrese el inicial: ");
    checkInput(scanf("%d", &initial), "inicial");

    printf("Ingrese el final: ");
    checkInput(scanf("%d", &final), "final");

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
