#include <stdio.h>

int main()
{
    int num = 10;
    float valor = 2;
    char letra = 'A';

    int *pontInt;
    float *pontFloat;
    char *pontChar;

    pontInt = &num;
    pontFloat = &valor;
    pontChar = &letra;

    printf("Antes:\n");
    printf("Inteiro: %d\n", num);
    printf("Float: %f\n", valor);
    printf("Char: %c\n", letra);

    *pontInt = 20;
    *pontFloat = 5.75;
    *pontChar = 'Z';

    printf("\nDepois:\n");
    printf("Inteiro: %d\n", num);
    printf("Float: %f\n", valor);
    printf("Char: %c\n", letra);

    return 0;
}
