float soma = 0;
for (int i = 0; i < qtdLinhas; i++)
{

    if (produtos[i] == 1)
    {
        soma = soma + (quantidades[i] * 3.8);
        printf("Leite Integral x %d - %0.2f\n", quantidades[i], quantidades[i] * 3.8);
    }
    if (produtos[i] == 2)
    {
        soma = soma + (quantidades[i] * 5.98);
        printf("Manteiga x %d - %0.2f\n", quantidades[i], quantidades[i] * 5.98);
    }
    if (produtos[i] == 3)
    {
        soma = soma + (quantidades[i] * 8.25);
        printf("Café 500g x %d - %0.2f\n", quantidades[i], quantidades[i] * 8.25);
    }
}
printf("Total - %0.2f", soma);

// Resposta do professor
float total = 0;

for (int i = 0; i < qtdLinhas; i++)
{
    switch (produtos[i])
    {
    case 1:
        total = total + (quantidades[i] * 3.80);
        printf("Leite Integral x %d - %2.2f\n", quantidades[i], quantidades[i] * 3.80);
        break;

    case 2:
        total = total + (quantidades[i] * 5.98);
        printf("Mantega x %d - %2.2f\n", quantidades[i], quantidades[i] * 5.98);
        break;

    case 3:
        total = total + (quantidades[i] * 8.25);
        printf("Café 500g x %d - %2.2f\n", quantidades[i], quantidades[i] * 8.25);
        break;
    }
}

printf("Total - %4.2f", total);