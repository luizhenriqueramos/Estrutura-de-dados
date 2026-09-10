#include <stdio.h>
#include <locale.h>
float calculo_peri (float r)
{ 
float peri = (r * 2 * 3.14); 
return peri;			
}
float calculo_area (float r)
{ 
float area = (r * r * 3.14); 
return area;			
}
	main(){
		setlocale(LC_ALL,"Portuguese");
		float raio;
		float area;
		float peri;
	printf ("Coloque o raio do seu círculo para calcular sua área e perímetro:\t");
	scanf ("%f",&raio);
	area = calculo_area(raio);
	peri = calculo_peri(raio);
	printf ("\nA área do seu círculo é:\n%f", area);
	printf ("\nO períemetro do seu círculo é:\n%f",peri);
	return 0;
}
