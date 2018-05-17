// Abrir el programa
// Determinar librerias correspondientes al programa
// Determinar variables, en un procedimiento
// Crear una funcion int main para llamar al procedimiento
// inciar un ciclo de while para pedir terminarlo
// Dentro del while incluir condiciones para ganar o perder
// Perdir, guardar e imprimir valores que se necesiten tanto para el programa y son deseados por el usuario
// cerrar el programa con un return 0  


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

		
void ganador () {	
	
	int numero_a;
	int numero_b;
	int partidas_ganadas=0;
	int partidas_perdidas=0;
	char voto;
	char tecla='s';	
		
	
	while (tecla != 'n'|| tecla !='N'){		
		
		numero_a = rand() %10;
		numero_b = rand() %10;
	
		printf("Elige el numero A o B: ");
		scanf(" %c", &voto);
		
		printf("El numero generado en A es: %d \n", numero_a);
		printf("El numero generado en B es: %d \n", numero_b);

	
		if (voto == 'a' && numero_a>numero_b){
			partidas_ganadas ++;
			printf("Ganador\n");
		}
		else if (voto == 'b' && numero_a<numero_b){
			partidas_ganadas ++;
			printf("Ganador\n");
		}
		else{
			partidas_perdidas ++;
			printf("Perderor\n");
		}
		printf("Desea continuar S/N: ");
		scanf(" %c",&tecla);
		while (getchar()!='\n');
	
		printf("Llevas %d ganadas y %d de partidas perdidas\n", partidas_ganadas, partidas_perdidas);
		if (tecla=='n' || tecla == 'N'){
			break; 
		}
	}
}
																																								
int main()
{
	
	srand(time(0));
	
	ganador();
	
	return 0;
} 
