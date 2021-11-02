/*
Se desea realizar un programa para procesar las cantidad de personas que pasan por un vacunatorio en 5 dias a la semana.
El usuario va ingresando en el momento que puede la cantidad de personas que consultaron el vacunatorio en ese dia.
El fin del dia se indica ingresando cero como dato de entrada. 
Se suman los datos ingresados durante el dia y se almacenan en la posicion de memoria correspondiente.
Puede ser que no se atiendan pacientes y se pueden recibir como maximo 20 personas por dia.

Informar:
		-Maximo de pacientes ingresados de una sola vez por dia
		-Promedio de pacientes por dia
		
En el vector, almacenar total de pacientes por dia y mostrar:
		-Dias que se atendieron mas de 15 pacientes
		-Promedio de pacientes atendidos en la semana
		-Cantidad de dias en los que los pacientes atendidos supero al promedio
		-Dia en que se atendio menos pacientes
		-Realizar una busqueda
		-Mostrar el vector ordenado

Prueba de escritorio:

Dia 0:   
		 Se atendieron 3 pacientes. Total: 3
         Se atendieron 2 pacientes. Total: 5
		 Se atendieron 4 pacientes. Total: 9
		 Se atendieron 0 pacientes. | 9 ||  ||  ||  ||  |
         Maximo de pacientes: 4
         Promedio: 3
         Se atendieron 0 pacientes. | 9 || 0 ||  ||  ||  |	 
		
Bonus: En otro vector, se almacenan los nombres del personal de la salud que estuvieron a cargo ese dia (uno por dia).

*/

#include <stdio.h>

float promedio, promedios[5];
int i, dia[5], total, respuesta, max, num, pacientes, cont, N = 5, totales[5], final, dias_s, min, minimo, j, aux, buscando, encontrado; 
main()
	{
		for(i=0; i<5; i++)
		{
			total = 0;
			cont = 0;
			do
			{
				cont = cont + 1;
				printf("Ingrese la catidad de Pacientes del DIA %d:", i + 1);
				printf("\n DIA %d TOTAL PACIENTES CARGADOS HASTA AHORA: %d\n", i + 1, total);
				scanf("%d", &pacientes);

				total = total + pacientes;
				
				while(total > 20)
				{
					cont = cont - 1;
					total = total - pacientes;
	
					printf("No puede ingresar mas de 20 personas por favor Intentelo otra vez: \n");
					printf("Ingrese la catidad de Pacientes del DIA %d:", i + 1);
					printf("\n TOTAL PACIENTES CARGADOS: %d\n", total);
					scanf("%d", &pacientes);
					
					cont = cont + 1;
					total = total + pacientes;
				
				}

				promedio = total / cont;
				promedios[i] = promedio;
				totales[i] = total;
				
				
							
				if(pacientes > max || i == 0)
				{
					max = pacientes;
					num = i + 1;
				}
				

			
			
			}while(total < 20 && pacientes != 0);
			

		}
		
		printf("\n El maximo de Pacientes de un dia: %d", max);
		
		for (i=0; i<N ; i++)
		{
			
			printf("\n El promedio del DIA %d es: %f", i + 1, promedios[i]);
			
		}

		printf("\n El Promedio TOTAL es: %f", promedio);

		for (i=0; i<N ; i++)
		{
			final = final + totales[i]; 
			if(totales[i] > 15)
			{
				printf("\n Dias que tuvieron mas de 15 pacientes: %d", i + 1);
			}
			
			promedio = final / N;
			if(totales[i] > promedio)
			{
				dias_s = i + 1;	
				printf("\n DIAS que Superaron el PROMEDIO: %d", i + 1);
			}
			
			if(totales[i] < min || i == 0)
			{
				min = totales[i];
				minimo = i + 1;
			}
		}
				
		printf("\n El DIA que tuvo menos pacientes fue: %d", minimo);
		
		

		
		//PARTE DEL VECTOR ORDENADO:
		for(j = 1;j < N; j++)
		{
			for(i = 0; i < N - j; i++)
			{
				if(totales[i] < totales[i + 1])
				{
					aux = totales[i];
					totales[i] = totales[i + 1];
					totales[i + 1] = aux;
				}
			}
			
		}
		
		printf("\n Vector ORDENADO:");
		
		for(i=0;i<N;i++)
		{
			printf("| %d |", totales[i]);
		}
		
		printf("\n Ingrese la cantidad de pacientes que hubo en un DIA que desee para buscarlo: ");
		scanf("%d", &buscando);
		
			for(i = 0; i < N; i++)
			{
			if(buscando == totales[i])
			{
				printf("El valor se encuentra en el dia %d\n", i + 1);
				encontrado = 1;
			}
			}
			if(encontrado != 1){
				printf("No se encontro el valor \n");
			}
	}
