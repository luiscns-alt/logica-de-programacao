//Informe seu código aqui
for (int linha = 0; linha < tamanho; linha++)
{
    for (int coluna = 0; coluna <= linha; coluna++)
    {
        printf("*");
    }
    printf("\n");
}
for (int linha = tamanho - 2; linha >= 0; linha--)
{
    for (int coluna = 0; coluna <= linha; coluna++)
    {
        printf("*");
    }
    printf("\n");
}