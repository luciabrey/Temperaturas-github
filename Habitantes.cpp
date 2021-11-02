/* 
	Se leen la cantidad de habitantes en 5 comunas.
	INFORMAS:
	- Porcentaje de habitantes que tiene cada comuna, funcion al TOTAL
	- Comuna con mayor cantidad de habitantes
	- Promedio de habitantes por comuna
	- Expresar en porcentaje la cantidad de comunas que tienen mas de 500 habitantes  
*/

#include <stdio.h>

int habitantes[5], max, i, posicion, N = 5, total, cont;
float porcentaje, promedio, comunas;

main()
{
	for(i = 0; i < N; i++)
	{
		printf("\n Ingrese la cantidad de habitantes de la COMUNA %d: ", i + 1);
		scanf("%d", &habitantes[i]);
		
		total = total + habitantes[i];
		
		if(habitantes[i] > max || i == 0)
		{
			max = habitantes[i];
			posicion = i + 1;	
		}
		
		if(habitantes[i] > 500)
		{
			cont = cont + 1;	
		}	
	}
	
	for(i = 0; i < N; i++)
	{
		comunas = (habitantes[i] * 100) / total;	
		printf("\n Porcentaje de habitantes por COMUNA: %f", comunas);
	}	



	promedio = total / N;
	porcentaje = (cont * 100) / N;
	
	printf("\n Comuna con MAYOR cantidad de habitantes: %d", posicion);
	printf("\n Promedio: %f", promedio);
	printf("\n Porcentaje de MAYORES 500 de habitantes: %f", porcentaje);
}
