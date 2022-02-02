#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i, numero, alteracoes = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero para entrar no vetor: ");
        scanf("%d", &numero);
        vetor[i] = numero;
    }

    printf("Vetor antes da ordenação: \n");

    for (i = 0; i < 5; i++)
    {
        numero = vetor[i];
        printf("%d\n", numero);
    }

    while (alteracoes > 0)
    {
    }

    return 0;
}