// Abrir programa
// Determinar variables tipo int
// Determinar un ciclo for
// Pedir y guardar datos puestos por el usuario
// Integrar un condicionales, if, if else para establecer puntos
// Se establece ganador, perdero, o si fue empate
// Se dice cuantos puntos lleva el equipo
// Se cierra el programa con un return 0  

#include <stdio.h>

int main()
{
	int i;
    int equipo1 =0;
    int equipo2 =0;
    int puntos =0;
	
	for (i=0; i<5; i++) {
	printf("Ingrese el resultado del equipo: \n");
	scanf ("%d", &equipo1);
	printf("Ingrese el resultado del otro equipo: \n");
	scanf ("%d", &equipo2);
    

	
	if (equipo1 > equipo2){
		puntos= puntos +3;
		printf("El equipo 1 gano.\n");
	}
	else if (equipo1 < equipo2){
		puntos = puntos + 0;
		printf("Empataron ambos equipos.\n");
	}
	else if (equipo1 == equipo2){
		puntos = puntos + 1;
		printf("El equipo 1 perdio.\n");
	}
  }
    
	printf("El total de puntos obtenidos hasta ahora son: %d", puntos);
    
	
	return 0;
}

