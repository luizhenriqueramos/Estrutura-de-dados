#include <stdio.h>
#include <locale.h>

int perfeito(int num)
{
    int soma = 0;
    int i;

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma = soma + i;
        }
    }

    if (soma == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero;
    int rfinal;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    rfinal = perfeito(numero);

    if (rfinal == 1)
    {
        printf("Seu numero %d eh perfeito.\n", numero);
    }
    else
    {
        printf("%d nao e perfeito.\n", numero);
    }

    return 0;
}
