/* Realiar un progrma para almacenar 5 edades en un vector.
Informar: 
- Promedio
- Porcentaje de los mayores de edad
- Edad maxima y posicion de memoria
- Imprimir posiciones de memoria menores al promedio
*/

#include <stdio.h> 

int N = 5, i, edades[5], max, posicion, total, cont;
float promedio;
main()
{
	for(i = 0;i < N;i++)
	{
		printf("\n Ingese la Edad %d:", i + 1);
		scanf("%d", &edades[i]);
		
		total = total + edades[i];
		
		if(edades[i] >= 18)
		{
			cont = cont + 1;
			
		}
		
		if(edades[i] > max || i == 0)
		{
			max = edades[i];
			posicion = i + 1;
		}
	}
	
	promedio = total / N;
	
	printf("\n [PROMEDIO] = %f", promedio);
	printf("\n [EDAD MAXIMA = %d POSICION DE MEMORIA = %d]", max, posicion);
	
	for(i = 0;i < N;i++)
	{
		if(edades[i] < promedio)
		{
			printf("\n Posiciones de memoria MENORES al promedio: %d", i + 1);	
		} 
	}
}
