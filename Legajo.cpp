/* Se almacenan en un vector 5 edades. La posicion de memoria se corresponde con el numero del legajo al cual pertenecen.
IMPRIMIR:
- Edad minima y legajo al que corresponde
- Porcentaje de mayores de edad
- Calcular el promedio de las edades menores al promedio. Imprimir a que numero de legajo corresponden
- Indicar si se registraron edades menores a 18 años (si se registraron, no se registraron)



- Mostrar el vector ordenado
*/

#include <stdio.h>

int edades[5], N = 5, registrado = 0, i, total, min, legajo, cont, cont_menores, total_menores, J, aux;
float porcentaje, promedio_total, promedio_menores; 

main()
{
	
	
	for(i = 0; i < N ; i++)
	{
		//INGRESA LAS EDADES
		printf("Ingrese la edad del usuario %d: ", i + 1);
		scanf("%d", &edades[i]);
		
		//SUMATORIA TOTAL DE EDADES
		total = total + edades[i];
		
		//OBTENEMOS LA EDAD MINIMA
		if(edades[i] < min || i == 0)
		{
			min = edades[i];
			legajo = i + 1;
		}
		
		//OBTENEMOS LA CANTIDAD DE MAYORES DE EDAD (para poder realizar el porcentaje)
		
		if(edades[i] >= 18)
		{
			cont = cont + 1;
		}
	}
	
	porcentaje = (cont * 100) / N;
	
	//CALCULAMOS EL PROMEDIO TOTAL 
	promedio_total = total / N;
	
	//CREAMOS OTRO FOR PARA PODER "BUSCAR" LAS EDADES MENORES AL PROMEDIO
	for(i = 0; i < N; i++)
	{
		//CREAMOS EL IF PARA PODER OBTENER LAS EDADES MENORES AL PROMEDIO
		if(edades[i] < promedio_total)
		{
			cont_menores = cont_menores + 1;
			total_menores = total_menores + edades[i];
			
			printf("\n LEGAJO de edades menores al promedio: %d", i + 1);
		}
		
		//ACA PONEMOS QUE REGISTRADO ES 1, SOLO EN EL CASO DE QUE SE HAYAN REGISTRARON EDADES MENORES A 18 AÑOS
		
		if(edades[i] < 18)
		{
			registrado = 1;
		}
	}
	
	
	//EN EL CASO DE QUE registrado ES IGUAL A 1, SE IMPRIME LO SIGUIENTE:
	if(registrado == 1)
	{
		printf("\n SI se registraron edades menores a 18 años \n");
	}
	
	//EN EL CASO DE QUE registrado ES IGUAL A 0, SE IMPRIME LO SIGUIENTE:
	if(registrado == 0)
	{
		printf("\n NO se registraron edades menores a 18 años \n");
	}
	
	//CALCULAMOS EL PROMEDIO DE LAS EDADES MENORES AL PROMEDIO
	promedio_menores = total_menores / cont_menores;
	
	
	//IMPRIMIMOS:
	printf("\n Edad minima: %d y Legajo: %d", min, legajo);
	printf("\n Porcentaje de MAYORES de edad: %f", porcentaje);
	printf("\n PROMEDIO de edades MENORES al promedio: %f", promedio_menores);
	
	
	
	//ORDENAMOS EL VECTOR
	for(J = 1; J < N; J++)
	{
		for(i = 0; i < N - J; i++)
		{
			if(edades[i] > edades[i + 1])
			{
				aux = edades[i];
				edades[i] = edades[i + 1];
				edades[i + 1] = aux;
			}
		}
	}


	//IMPRIMIMOS EL VECTOR ORDENADO
	printf("\n Vector ordenado");
		
	for(i = 0; i < N; i++)
	{
		printf("| %d |", edades[i]);
	}
	
}
