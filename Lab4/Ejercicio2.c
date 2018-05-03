// Algoritmo narrado
// Abrir programa
// Se establece una funcion
// Determinar variables de tipo float e int
// Luego determinar variables y valores constantes
// Dar algunos datos, para que el usuario los inteprete
// Se determinan acuacaciones para establecer valores pedidos
// se establece un int main, dentro se determina la funcion utilizada
// Se cierra el programa con retorna 0
#include <stdio.h>

float valor_reparto (){
	
	float repartir;
	float huevos=8;
	float amigos=3;
	repartir = (huevos / amigos);
	//scanf("%f", &repartir);
	printf("Los huevos que deben repartirse son por cada uno: %.1f \n", repartir);
	
	float j=5;
	float m=3;
	float amigo_j;
	float amigo_m;
	amigo_j= (j-repartir);
	//scanf("%f", &amigo_j);
	printf("El porcentaje que debe darse a Juan es: %.1f \n", amigo_j);
	amigo_m= (m-repartir);
	//scanf("%f", &amigo_m);
	printf("El porcentaje que debe darse a Manuel es: %.1f \n", amigo_m);
	int valor_huevo= 10;
	float pago_para_j;
	pago_para_j= (amigo_j * valor_huevo);
	//scanf("%f", &pago_para_j);
	printf("Se debe pagar a Juan: %.1f \n", pago_para_j);
	float pago_para_m;
	pago_para_m= (amigo_m * valor_huevo);
	printf("Se debe pagar a Manuel: %.1f \n", pago_para_m);
	
	return 0;
	}
	
int main (){
	valor_reparto();
	return 0;
}

