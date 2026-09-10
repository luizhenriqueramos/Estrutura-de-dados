#include <stdio.h>
#include <locale.h>

int idade_dias (int ano, int mes, int dia){
	return (ano * 365) + (mes *30) + dia;
}

int main ()
{
	setlocale(LC_ALL,"portuguese");
	int anos, meses, dias;
	int total_dias;
	
	
	
	printf ("\nDigite sua idade em anos ");
	scanf ("%d",&anos);
	printf ("\nDigite sua idade em meses ");
	scanf ("%d",&meses);
	printf ("\nDigite sua idade em dias ");
	scanf ("%d",&dias);
	
	total_dias = idade_dias(anos,meses,dias);
	printf ("Sua idade em dias é:%d\n",total_dias);
	
	return 0;
	
	 
}
