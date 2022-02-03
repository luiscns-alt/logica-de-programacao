//Informe seu código aqui
float soma, media, maior, menor;
soma = 0;
maior = 0;
menor = rendaFamilias[0];
for (int i = 0; i < qtdFamilias; i++)
{
    soma = soma + rendaFamilias[i];
    if (rendaFamilias[i] > maior)
    {
        maior = rendaFamilias[i];
    }
    if (rendaFamilias[i] < menor)
    {
        menor = rendaFamilias[i];
    }
}
media = soma / qtdFamilias;
printf("Média - %4.2f\n", media);
printf("Maior - %4.2f\n", maior);
printf("Menor - %4.2f", menor);
