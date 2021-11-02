//ordenar el vector y busqueda

#include <stdio.h>


int numero[5], aux, N = 5, j, i, buscando, encontrado = 0;

main()
{
	for(i = 0;i < N; i++)
	{
		printf("\n Ingrese el Numero %d:", i + 1);
		scanf("%d", &numero[i]);
			
	}	
	
	printf("\n Ingrese el numero que desea buscar: ");
	scanf("%d", &buscando);
	
	for(i = 0;i < N; i++)
	{
		if(buscando == numero[i])	
		{
			printf("El numero se encuentra en la posicion: %d", i + 1);
			encontrado = 1;
		}
	}	
	
	if(encontrado == 0)
	{
		printf("No se encontro el numero ingresado \n");
	}
	
	//ORDENAR EL VECTOR
	for(j = 1; j < N; j++)
	{
		for(i = 0; i < N - j; i++)
		{
			if(numero[i] > numero[i + 1])
			{
				aux = numero[i];
				numero[i] = numero[i + 1];
				numero[i + 1] = aux;
			}
		}
	}
	
	printf("\n VECTOR ORDENADO:");
	
	for(i = 0;i < N; i++)
	{
		printf("| %d |", numero[i]);
	}
}
