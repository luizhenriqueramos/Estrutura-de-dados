#include <stdio.h>
#include <locale.h>
int maior_num() {
    int num, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &maior);

    for (int i = 2; i <= 50; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }

    return maior;
}

int main() {
	setlocale(LC_ALL,"Portuguse");
    int resultado;

    resultado = maior_num();

    printf("O maior valor é: %d\n", resultado);

    return 0;
}
