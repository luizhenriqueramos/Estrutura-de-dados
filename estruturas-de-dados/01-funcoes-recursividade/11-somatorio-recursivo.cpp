#include <stdio.h>

int somatorionaturais(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + somatorionaturais(n - 1);
}

int main()
{
    int n;

    printf("digite N: ");
    scanf("%d", &n);
    printf("soma: %d\n", somatorionaturais(n));
    return 0;
}
