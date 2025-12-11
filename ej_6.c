// Declarar una constante string global y contar la cantidad de palabras que tiene.
// Los strings son arrays de chars que terminan en 0.
// El tipo de string es char*
// Laburo extra: Sacar el && y sacar el el else if

#include <stdio.h>

char text[] =
    " La bella y   graciosa moza\n"
    "marchose a lavar la ropa\n"
    "la mojo la mojo\n"
    "la mojo en el arroyuelo\n"
    "y cantando         la lavo\n"
    "la froto sobre una piedra\n"
    "la colgo de una abedul\n"
    "fa la la fa la la la la";

int main()
{
    int count = 0;
    int inWord = 0;

    for (int pos = 0; pos < sizeof(text); pos++)
    {
        if (text[pos] != ' ')
        {
            if (text[pos] != '\n')
            {
                if (text[pos] != '\0')
                {
                    inWord = 1;
                }
                else
                {
                    count++;
                    inWord = 0;
                }
            }
            else
            {
                count++;
                inWord = 0;
            }
        }
        else
        {
            if (inWord == 1)
            {
                count++;
                inWord = 0;
            }
        }
    }
    printf("Hay %d palabras\n", count);

    return 0;
}
