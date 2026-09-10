#include <stdio.h>
#include <string.h>

struct Livro
{
    char titulo[100];
    char autor [100];
    int ano;
    float preco;
};

maiorqcinquenta (Livro livros [], int q)
{
	int i;
	for (i=0;i<q;i++)
{
	if (livros[i].preco >50)
{
	printf("Titulo: %s\n", livros[i].titulo);
    printf("Autor: %s\n", livros[i].autor);
    printf("Ano: %d\n", livros[i].ano);
    printf("Preco: R$ %f\n\n", livros[i].preco);
}
}
}

Livro livromaiscaro(Livro livros[], int q)
{
    Livro maisCaro = livros[0];
    int i;

    for (i = 1; i < q; i++)
    {
        if (livros[i].preco > maisCaro.preco)
        {
            maisCaro = livros[i];
        }
    }

    return maisCaro;
}


float totallivros(Livro livros[], int q)
{
    float total = 0;
    int i;

    for (i = 0; i < q; i++)
    {
        total = total + livros[i].preco;
    }

    return total;
}

int main()
{
   
    Livro livros[5] = {
        {"O Hobbit", "J. R. R. Tolkien", 1937, 30.00},
        {"1984", "George Orwell", 1949, 30.00},
        {"Dom Casmurro", "Machado de Assis", 1899, 55.00},
        {"Harry Potter", "J. K. Rowling", 1997, 56.00},
        {"A revolução dos bichose", "George Orwell", 1945, 12.00}
    };

    Livro maiscaro;
    printf("livro maior que 50:\n\n");
    maiorqcinquenta(livros, 5);

    maiscaro = livromaiscaro(livros, 5);

    printf("Mais caro: %s - R$ %f\n",
           maiscaro.titulo, maiscaro.preco);

    printf("Total gasto: R$ %f\n", totallivros(livros, 5));

    return 0;
}


