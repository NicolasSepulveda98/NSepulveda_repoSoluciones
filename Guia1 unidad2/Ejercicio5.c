#include <stdio.h>

void traspuesta(int N, int M, int matriz[N][M]){
	printf("\n Traspuesta \n");
	int i,j;
	for(i=0; i<M;i++){
		for (j=0; j<N; j++){
			printf("%d", matriz[j][i]);
		}
		printf("\n");
	}
}
	
void imprimir_matriz(int N, int M, int matriz[N][M]){
	
	int i,j;
	
	for(i=0; i<N;i++){
		for (j=0; j<M; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}

void llenar_matriz(int N, int M, int matriz[N][M]){
	int i,j;
	int numero;
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("Ingrese numero: ");
			scanf("%d",&numero);
			
			matriz[i][j]=numero;	
		}
	}
}

int main ()
{
	int N,M;
	
	printf("Ingrese el valor de las filas (N): ");
	scanf("%d",&N);
	
	printf("Ingrese el valor de las columnas(M): ");
	scanf("%d",&M);
	
	int matriz[N][M];
	
	llenar_matriz(N,M,matriz);
	imprimir_matriz(N, M, matriz);
	traspuesta(N, M, matriz);
	return 0;
}
