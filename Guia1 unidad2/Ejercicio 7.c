
#include <stdio.h>

void suma_fila(int N, int M, int mtrz[N][M]){
	
	int i, j;
	int suma_fila=0;

	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			
			suma_fila= suma_fila + mtrz[i][j];
		}
		
		printf("Suma de la fila es: %d\n", suma_fila);
		suma_fila=0;
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

int main()
{
	int N,M;
	N=4;
	M=5;
	int matriz[N][M];
	
	llenar_matriz(N, M, matriz);
	imprimir_matriz(N, M, matriz);
	suma_fila(N, M, matriz);
	
	return 0;
}

