/*
	En un vector se almacena las nottas de 5 alumnos
	Informar: 	
	- Promedio
	- Porcentaje de Aprobadas
	- Imprimir Numero de Estudiantes cuyas notas fueron mayores a 8
	- Promedio de los Estudiantes cuyas notas fueron menores a 8 
	
	
	EXTRA: 
	- Mostrar las notas Ordenadas
	
*/

#include <stdio.h>

int notas[5], total, total_men, i, N = 5, cont, cont_men, j, aux, buscado, encontrado = 0;
float porcentaje, promedio, promedio_men;

main()
{
	for(i = 0; i < N; i++)
	{
		printf("\n Ingrese la nota del Alumno %d: ", i + 1);
		scanf("%d", &notas[i]);
		
		total = total + notas[i];
		
		if(notas[i] > 6)
		{
			cont = cont + 1;
		}
		
		if(notas[i] < 8)
		{
			cont_men = cont_men + 1;
			total_men = total_men + notas[i];
		}
	}
	
	promedio = total / N;
	porcentaje = (cont * 100) / N;
	promedio_men = total_men / cont_men;
	
	for(i = 0; i < N; i++)
	{
		if(notas[i] > 8)
		{
			printf("\n Numero de Estudiantes cuyas notas superan el 8: %d", i + 1);
			
		}
	}
	
	printf("\n PROMEDIO: %f", promedio);
	printf("\n PORCENTAJE APROBADAS: %f", porcentaje);
	printf("\n PROMEDIO DE ESTUDIANTES QUE SUS NOTAS SON MENORES A 8: %f", promedio_men);
	
	
	
	for(j = 1; j < N; j++)
	{
		for(i = 0; i < N - j; i++)
		{
			if(notas[i] < notas[i])
			{
				aux = notas[i];
				notas[i] = notas[i + 1];
				notas[i + 1] = aux;
			}
		}
	}
	
	printf("\n VECTOR ORDENADO:");
	for(i = 0; i < N; i++)
	{
		printf("| %d |", notas[i]);
	}
	
	
	
	//BUSQUEDA
	
	printf("\n Ingrese la nota que desea buscar: ");
	scanf("%d", &buscado);
	for(i = 0; i < N; i++)
	{
		if(buscado == notas[i])
		{
			printf("La nota pertenece al Alumno %d", i + 1);
			encontrado = 1;
		}
	}
	
	if(encontrado == 0)
	{
		printf("\n No se encontro resultados");
		printf("\n Por favor intentelo nuevamente: ");
		
		printf("\n Ingrese la nota que desea buscar: ");
		scanf("%d", &buscado);
	}
	
		for(i = 0; i < N; i++)
	{
		if(buscado == notas[i])
		{
			printf("La nota pertenece al Alumno %d", i + 1);
			encontrado = 1;
		}
	}

}
