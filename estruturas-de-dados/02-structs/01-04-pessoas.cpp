#include <stdio.h>

struct Pessoa
{
    char nome[100];
    int idade;
    float altura;
};

void imprimirPessoa(struct Pessoa pessoa)
{
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %f\n", pessoa.altura);
}

float media(struct Pessoa pessoas[], int q)
{
    int soma = 0;
    int i;

    if (q <= 0)
    {
        return 0;
    }

    for (i = 0; i < q; i++)
    {
        soma = soma + pessoas[i].idade;
    }

    return (float)soma / q;
}

int main()
{
    struct Pessoa pessoa = {"Ana", 20, 1.65f};

    struct Pessoa pessoas[3] = {
        {"Ana", 20, 1.65f},
        {"Bruno", 25, 1.80f},
        {"Carla", 30, 1.70f}
    };

    imprimirPessoa(pessoa);

    printf("Media das idades: %f\n", media(pessoas, 3));

    return 0;
}
