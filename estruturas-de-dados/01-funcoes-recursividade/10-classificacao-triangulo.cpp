#include <stdio.h>

void vertriangulo(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0 ||x >= y + z || y >= x + z || z >= x + y)
    {
        printf("Os valores nao formam um triangulo.\n");
    }
    else if (x == y && y == z)
    {
        printf("seu triangulo possui todos os lados iguais (equilatero).\n");
    }
    else if (x == y || x == z || y == z)
    {
        printf("seu triangulo eh isoceles.\n");
    }
    else
    {
        printf("TEM TODOS OS LADOS DIFERENTES (ESCALENO).\n");
    }
}

int main()
{
    float x, y, z;

    printf("escreva os tres lados do seu triangulo: ");
    scanf("%f %f %f", &x, &y, &z);

    vertriangulo(x, y, z);

    return 0;
}
