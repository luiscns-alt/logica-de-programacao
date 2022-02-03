float total = 0;

for (int i = 0; i < qtdAportes; i++)
{
    if (i > 0)
    {
        total += (total * ((porcentagemJuros) / 100)) + valorAporte[i];
    }
    else
    {
        total += valorAporte[i];
    }
}

printf("%.2f", total);

// Resposta do Professor

float acumulado,
    juros;

juros = porcentagemJuros / 100;
acumulado = 0;

for (int i = 0; i < qtdAportes; i++)
{
    acumulado = acumulado + (juros * acumulado);

    acumulado = acumulado + valorAporte[i];
}

printf("%4.2f", acumulado);
