// Algoritmo narrado:
// Se abrio el programa
// Se determino funciones tipo int, donde se calcular el sueldo
// se declaro un void, para imprimir resultado
// luego se determinan otras variables tipo int, para determinar valores
// Se determina un clico for
// Se pide, lee y guarda los valores necesarios para entregar un resultado adecuado
// Se efectuan los resultados y se cierra el programa con return 0.
#include <stdio.h>

int calcular_de_sueldo (int horas_por_dia, int sueldo_por_horas){
	int total_sueldo;
	total_sueldo= (horas_por_dia * sueldo_por_horas);
	return total_sueldo;
    }
    
void  imprimir_total_sueldo_del_trabajador(int total_sueldo){
	  printf("El sueldo que recibira es: %d", total_sueldo);    
}
int main()
{
	int valor_por_horas;
	int horas;
	int cantidad_de_horas=0;
	int i;
	
	for (i=0; i < 6; i++){ 
	printf("Ingrese cuantas horas trabajo el dia %i:", i+1);
	scanf("%d", &horas);
	cantidad_de_horas= (cantidad_de_horas + horas);
    }
	printf("Ingrese el valor de paga por hora: ");
	scanf("%d", &valor_por_horas);
    int total_sueldo = calcular_de_sueldo (cantidad_de_horas, valor_por_horas);
    imprimir_total_sueldo_del_trabajador(total_sueldo);
	
	return 0;
}

