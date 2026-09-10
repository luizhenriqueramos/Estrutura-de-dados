#include <stdio.h>

double soma(int n)
{
    if (n == 1)
    {
        return 1.0;
    }

    return 1.0 / n+ soma(n- 1);
}

int main()
{
    int n;

    printf("digite n(tem q ser maior q 0): ");
    scanf("%d", &n);
    printf("soma: %f\n", soma(n));

    return 0;
}
