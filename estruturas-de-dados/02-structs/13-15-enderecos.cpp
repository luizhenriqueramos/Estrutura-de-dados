#include <stdio.h>
#include <string.h>


struct endereco
{
    char rua[100];
    int numero;
    char cidade[100];
    char cep[10];
};

int enderecosiguais(endereco x, endereco y)
{
    return strcmp(x.rua, y.rua) == 0 && //strcmp compare string significa
           x.numero == y.numero &&
           strcmp(x.cidade, y.cidade) == 0 &&
           strcmp(x.cep, y.cep) == 0;
}


void imprimirendereco(endereco e)
{
    printf("%s, %d\n", e.rua, e.numero);
    printf("cidade: %s\n", e.cidade);
    printf("CEP: %s\n", e.cep);
}

int main()
{
    endereco x = {
        "av flores da cunha", 12, "poa", "94055-313"
    };

    endereco y = {
        "av oswaldo aranha", 1, "poa", "31313-222"
    };

    imprimirendereco(x);

    if (enderecosiguais(x, y))
    {
        printf("os enderecos sao iguais.\n");
    }
    else
    {
        printf("os enderecos sao diferentes.\n");
    }

    return 0;
}
