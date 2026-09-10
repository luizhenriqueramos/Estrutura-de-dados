#include <stdio.h>
#include <locale.h>

int calculo (int x, int z)
{
 int r = 1;
 for (int i = 0; i<z;i++) 
 //vai repetindo e multiplicando ate chegar no valor de z elevado a x;
 {
 	r = r * x;
 }
	return r;
}


 int main () 
{
	setlocale (LC_ALL, "Portuguse"); 
	int base; 
	int expoente;
	int resultado_FINAL; 
	
	printf ("\nEscreva o numero que ficara na base:");
	scanf ("%d", &base);
	
	printf ("\nescreva o expoente:");
	scanf ("%d", &expoente);
	resultado_FINAL = calculo (base,expoente);
	printf ("\nO resultado é: %d", resultado_FINAL);
	return 0;   	
}
