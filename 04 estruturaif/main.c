#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 16;
    printf("Idade: %d\n", idade);
    if (idade >= 18)
    {
        printf("Voce é maior de idade");
    }
    else
    {
        printf("Voce é menor de idade");
    }

    return 0;
}