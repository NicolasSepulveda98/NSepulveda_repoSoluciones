#include <stdio.h>

void sumatoria_por_filas (int n, int matriz[n][n]){
	
	int i, j;
	int suma_filas=0;
	int suma_columnas=0;
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			suma_filas= suma_filas + matriz[i][j];
			suma_columnas=suma_columnas + matriz[j][i];
		}
		printf("Suma de la fila: %d\n", suma_filas);
		suma_filas=0;
		printf("Suma de las columna es: %d\n",suma_columnas);
	}
}

void sumatoria_numeros_totales (int n, int matriz[n][n]){
	
	int i,j;
	int suma = 0;
	
	for(i=0; i<n; i++){
		for(j=0;j<n;j++){
			suma=suma + matriz[i][j];
		}
	}
	printf("La suma total es: %d ", suma);
}


void llenar_matriz(int n, int matriz[n][n]){
	int i,j;
	int numero;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Ingrese numero: ");
			scanf("%d",&numero);
			
			matriz[i][j]=numero;	
		}
	}
}

void imprimir_matriz(int n, int matriz[n][n]){
	
	int i,j;
	
	for(i=0; i<n;i++){
		for (j=0; j<n; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int n;
	
	printf("Columnas: Hacia abajo");
	printf("Filas hacia el lado");
	
	printf("Ingrese el valor de n: ");
	scanf("%d",&n);
	
	int matriz[n][n];
	
	llenar_matriz(n, matriz);
	
	imprimir_matriz(n, matriz);
	
	sumatoria_por_filas(n, matriz);
	
	sumatoria_numeros_totales(n, matriz);
	
	return 0;
}

