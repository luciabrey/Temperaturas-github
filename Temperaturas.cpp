/* 
	Se desea realizar un programa para procesar 10 temperaturas
	Se almacenan en un vector y la posicion de memoria corresponde con el dia que fueron tomadas.
	INFORMAR: 
	- Temperatura minima y en que dia fue tomada
	- Porcentaje de temperaturas menores a 18 
	- Promedio de las temperaturas mayores a 20, que dias fueron tomadas.
	- Indicar si existieron temperaturas negativas
	- Mostrar el vector ordenado
	
	EXTRA:
	- Realizar una busqueda.
	
*/

#include <stdio.h>

int	i, N = 10, temperatura[10], posicion, existieron = 0, cont, contador, min, suma, j, aux, buscado, encontrado = 0;
float porcentaje, promedio; 

main()
{
	for(i = 0;i < N; i++)
	{
		printf("\n Ingrese la temperatura del DIA %d: ", i + 1);
		scanf("%d", &temperatura[i]);
		
		if(temperatura[i] < min || i == 0)
		{
			min = temperatura[i];
			posicion = i + 1;
		}
		
		if(temperatura[i] < 18)
		{
			cont = cont + 1;
		}
		
	}
	
	
	porcentaje = (cont * 100) / N;
	
	printf("\n Temperatura MINIMA: %d | DIA que se tomo: %d", min, posicion);
	printf("\n Porcentaje Temperaturas MENORES a 18: %f", porcentaje);
	
	
	for(i = 0;i < N; i++)
	{
		if(temperatura[i] > 20)
		{
			suma = suma + temperatura[i];
			contador = contador + 1;
			
			printf("\n DIAS que la temperatura supero los 20 Grados: %d", i + 1);
		}
		if(temperatura[i] < 0)
		{
			existieron = 1;
		}
	}
	
	promedio = suma / contador;
	printf("\n Promedio de temperaturas que superaron los 20 GRADOS: %f", promedio);
	
	if(existieron == 1)
	{
		printf("\n SI Existieron temperaturas negativas");
	}
	
	if(existieron == 0)
	{
		printf("\n NO Existieron temperaturas negativas");
	}
	
	//BUSQUEDA
	printf("Busque la temperatura: ");
	scanf("%d", &buscado);
	
	for(i = 0;i < N; i++)
	{
		if(buscado == temperatura[i])
		{
			printf("\n La temperatura se tomo el dia: %d", i + 1);
			encontrado = 1;
		}
	}
	
	if(encontrado == 0)
	{
		printf("\n No se encontraron resultados.");
	}
	
	
	
	//ORDENADO
	
	for(j = 1;j < N; j++)
	{
		for(i = 0;i < N - j; i++)
		{
			if(temperatura[i] < temperatura[i + 1])
			{
				aux = temperatura[i];
				temperatura[i] = temperatura[i + 1];
				temperatura[i + 1] = aux;
			}
		}
	}
	
	printf("\n VECTOR ORDENADO: ");
	for(i = 0;i < N; i++)
	{
		printf("| %d |", temperatura[i]);
	}
}
