#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes = 1;
    printf("Numero do mês: %d\n", mes);
    switch (mes)
    {
    case 1:
        printf("janeiro");
        break;
    case 2:
        printf("feveiro");
        break;
    case 3:
        printf("março");
        break;
    case 4:
        printf("abril");
        break;
    case 5:
        printf("maio");
        break;
    case 6:
        printf("junho");
        break;
    case 7:
        printf("julho");
        break;
    case 8:
        printf("agosto");
        break;
    case 9:
        printf("setembro");
        break;
    case 10:
        printf("outubro");
        break;
    case 11:
        printf("novembro");
        break;
    case 12:
        printf("dezembro");
        break;
    default:
        printf("Mes invalido");
        break;
    }
    return 0;
}