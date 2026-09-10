#include <stdio.h>

int main()
{
    int num = 10;
    int *pont;

    pont = &num;

    printf("variavel: %d\n", num);
    printf("valor pelo ponteiro: %d\n", *pont);

    return 0;
}
