#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero = 15;
  //   printf("Digite um numero: ");
  //   scanf("%d", &numero);
  printf("%d e maior que 10? %d\n", numero, numero > 10);
  printf("%d e maior ou igual que 10? %d\n", numero, numero >= 10);
  printf("%d e menor que 10? %d\n", numero, numero < 10);
  printf("%d e menor ou igual que 10? %d\n", numero, numero <= 10);
  printf("%d e igual que 10? %d\n", numero, numero == 10);
  printf("%d e diferente que 10? %d\n", numero, numero != 10);

  return 0;
}
