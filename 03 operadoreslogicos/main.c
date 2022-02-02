#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 15;
  int b = 10;
  //   printf("Digite um numero: ");
  //   scanf("%d", &numero);
  printf("%d > 10 E %d > 20? %d\n", a, b, a > 10 && b > 20);
  printf("%d > 10 OU %d > 20? %d\n", a, b, a > 10 || b > 20);
  printf("%d > 10 Não %d > 20? %d\n", a, b, !(a > 10 && b > 20));
  printf("%d > 10 OU %d > 20? %d\n", a, b, !(a > 10 || b > 20));

  return 0;
}