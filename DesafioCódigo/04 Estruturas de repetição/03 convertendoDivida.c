//Informe seu código aqui
for (int i = 1; i <= qtdParcelas; i++)
{
    printf("%d"
           " - "
           "%.2f\n",
           i, parcelaInicial);
    parcelaInicial = parcelaInicial - (parcelaInicial * (porcentagemDecrecimo / 100));
}

or

    float parcela,
    porcentagem;

parcela = parcelaInicial;

porcentagem = (100 - porcentagemDecrecimo) / 100;

for (int contador = 1; contador <= qtdParcelas; contador++)
{
    printf("%d - %4.2f\n", contador, parcela);

    parcela = (parcela * porcentagem);
}