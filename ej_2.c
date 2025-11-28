#include <stdio.h>
#define BOLD "\033[1m"
#define RESET "\033[0m"

void main()
{
    int a;
    int b;
    int multiplicacion;
    int division;
    int suma;
    int resta;
    int modulo;
    int nega;
    int negb;
    int bin;

    printf("\n%s=== Bienvenido a algebra basica ===%s\n", BOLD, RESET);
    printf("Ingrese el valor A: ");
    scanf("%d", &a);
    printf("Ingrese el valor B: ");
    scanf("%d", &b);

    multiplicacion = a * b;
    division = a / b;
    suma = a + b;
    resta = a - b;
    modulo = a % b;
    nega = a * (-1);       // unario
    negb = b * (-1);       // unario
    bin = (nega) - (negb); // binario

    printf("\n%s=== RESULTADOS ===%s\n", BOLD, RESET);
    printf("Multiplicacion: %d x %d = %d \n", a, b, multiplicacion);
    printf("Division: %d / %d = %d \n", a, b, division);
    printf("Suma: %d + %d = %d \n", a, b, suma);
    printf("Resta: %d - %d = %d \n", a, b, resta);
    printf("Modulo: %d %% %d = %d (resto de la division)\n", a, b, modulo);
    printf("\n%s=== USO DE PARENTESIS ===%s\n", BOLD, RESET);
    printf("%d * (-1): = %d \n", a, nega);
    printf("%d * (-1): = %d \n", b, negb);
    printf("(%d) - (%d) = %d \n", nega, negb, bin);
}
