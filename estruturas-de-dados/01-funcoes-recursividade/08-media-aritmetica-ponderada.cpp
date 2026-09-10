#include <stdio.h>

float media(float num1, float num2, float num3, char l)
{
    if (l == 'a')
    {
        return (num1 + num2 + num3) / 3;
    }
    else
    {
        return (num1 * 5 + num2 * 3 + num3 * 2) / 10;
    }
}

int main()
{
    float n1, n2, n3;
    char letra;

    printf("escreva suas tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite a para aritmetica ou p para ponderada: ");
    scanf(" %c", &letra);

    if (letra != 'a' && letra != 'p')
    {
        printf("nao foi possivel fazer a media (digite p ou a).\n");
        return 1;
    }

    printf("Media: %f\n",
         media(n1, n2, n3, letra));

    return 0;
}
