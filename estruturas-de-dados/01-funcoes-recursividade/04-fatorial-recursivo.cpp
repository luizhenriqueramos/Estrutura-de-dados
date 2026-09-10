#include <stdio.h>
#include <locale.h>
int fatorial(int F){
	if(F == 0){
		return 1;
	}else{
		return F * fatorial(F-1);
	}
}

main(){
	setlocale (LC_ALL, "portuguese");
	int num;						
	printf("Calcule o fatorial do número: ");
	scanf("%d", &num);
	printf("Resultado do fatorial de %d: %d\n", num, fatorial(num));		

return 0;
}
