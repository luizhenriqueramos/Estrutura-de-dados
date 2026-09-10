#include <stdio.h>


	int svetor (int vetor [], int q)
	{
		int soma = 0;
		int i;
		for (i=0;i<q;i++)
		{
			soma=soma +vetor[i];
		
	}
	return soma;
	
	}
	
	main ()
	{
		int v[100];
		int q;
		int i;
		printf ("quantos elementos quer inserir? (1 a 100):");
		scanf ("%d", &q);
		for (i=0;i<q;i++)
		{printf ("digite o elemento %d:",i+1);
		scanf ("%d", &v[i]);
		}
		printf ("soma: %d\n", svetor(v,q));
		return 0; 
	}
