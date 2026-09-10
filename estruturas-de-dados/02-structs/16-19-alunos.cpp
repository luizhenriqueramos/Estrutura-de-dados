#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[100];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
};

float media (struct aluno a)
{
    return (a.nota1 + a.nota2 + a.nota3) / 3;
}

struct aluno maiormedia(struct aluno a[], int q)
{
	struct aluno melhor = a[0];
	int i;

    for (i = 1; i < q; i++)
    {
        if (media(a[i]) > media(melhor))
        {
            melhor = a[i];
        }
    }

    return melhor;
}

float mediaturma(struct aluno a[], int q)
{
    float soma = 0;
    int i;

    if (q <= 0)
    {
        return 0;
    }

    for (i = 0; i < q; i++)
    {
        soma = soma + media(a[i]);
    }

    return soma / q;
}

int main()
{
    struct aluno a[3] = {
        {"luis felipe", 10, 5.5, 5.9, 7.0},
        {"felipe", 9, 2.0, 3.0, 5.0},
        {"hunder", 11, 9.0, 9.0, 10.0}
    };

    struct aluno melhor;
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Aluno: %s | Media: %f\n",
               a[i].nome, media(a[i]));
    }

    melhor = maiormedia(a, 3);

    printf("maior media: %s, com %f\n",
           melhor.nome, media(melhor));

    printf("Media da turma: %f\n", mediaturma(a, 3));

    return 0;
}
