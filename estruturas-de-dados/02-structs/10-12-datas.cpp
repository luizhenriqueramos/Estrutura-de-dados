#include <stdio.h>

struct data
{
    int dia;
    int mes;
    int ano;
};

int maisrecente(data x,data y)
{
    if (x.ano != y.ano)
    {
        return x.ano > y.ano;
    }

    if (x.mes != y.mes)
    {
        return x.mes > y.mes;
    }

    return x.dia > y.dia;
}

int diferencaanos(data x, data y)
{
    data e;
    int anos;
    if (maisrecente(x, y))
    {
        e = x;
        x = y;
        y = e;
    }

    anos = y.ano - x.ano;
    if (y.mes < x.mes ||
        (y.mes == x.mes &&
         y.dia < x.dia))
    {
        anos = anos - 1;
    }

    return anos;
}

int main()
{
    data x = {10, 6, 2007};
    data y = {10, 6, 2027};

    if (maisrecente(x,y))
    {
        printf("a primeira data eh mais recente.\n");
    }
    else
    {
        printf("a primeira data nao eh mais recente.\n");
    }

    printf("diferenca: %d anos completos.\n",
           diferencaanos(x, y));

    return 0;
}
