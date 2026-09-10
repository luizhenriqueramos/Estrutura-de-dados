#include <stdio.h>

int potencia(int b, int e)
{
    if (e == 0)
    {
        return 1;
    }

    return b * potencia(b,e - 1);
}

int main()
{
    int base;
    int expoente;

    printf("digite uma base de valor positivo: ");
    scanf("%d", &base);

    printf("digite o expoente (zero ou positivo): ");
    scanf("%d", &expoente);

    if (base <= 0 || expoente < 0)
    {
        printf("coloque outros valores.\n");
        return 1;
    }

    printf("resultado: %d\n", potencia(base,expoente));

    return 0;
}
