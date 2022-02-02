#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDigitados[10];
    int i = 0;
    for (i = 0; i <= 9; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeroDigitados[i]);
    }
    printf("Os numeroDigitados: \n");
    for (i = 0; i <= 9; i++)
    {
        printf("%d\n", numeroDigitados[i]);
    }

    return 0;
}