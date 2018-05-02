#include <stdio.h>
#include <stdlib.h>

int** alocaMatriz(int, int);
void liberaMatriz(int **, int);
int calcularCaminhos(int **, int, int);

int main(){
	int l, c, i, j, x, y;
	int gatos;
	int **matriz;
	scanf("%d %d", &l, &c);
	matriz = alocaMatriz(l, c);
	scanf("%d", &gatos);
	for(i=0;i<gatos;i++){
		scanf("%d %d", &x, &y);
		matriz[x-1][y-1] = -1;
	}	

	printf("%d\n", calcularCaminhos(matriz, l, c));
	liberaMatriz(matriz, l);
	return 0;
}

int** alocaMatriz(int l, int c){
	int **matriz;
	int i, j;
	matriz = (int**) malloc(l*sizeof(int*));
	for(i=0;i<l;i++){
		matriz[i] = (int*) malloc(c*sizeof(int));
		for(j=0;j<c;j++){
			matriz[i][j] = 9;
		}
	}
	if(matriz == NULL){
		exit(1);
	}
	return matriz;
} 
void liberaMatriz(int **matriz, int l){
	int i;
	for(i=0;i<l;i++){
		free(matriz[i]);
	}
	free(matriz);
}

int calcularCaminhos(int **matriz, int l, int c){
	int i, j, k;
	//calculando os caminhos da primeira linha
	for(i=0;i<c;i++){
		if(matriz[0][i] != -1){
			matriz[0][i] = 1;
		} else {
			for(k=i;k<c;k++){
				matriz[0][k] = 0;
			}
			break;
		}
	}
	//calculando os caminhos da primeira coluna
	for(i=0;i<l;i++){
		if(matriz[i][0] != -1){
			matriz[i][0] = 1;
		} else {
			for(k=i;k<l;k++){
				matriz[k][0] = 0;
			}
			break;
		}
	}
	/*calculando o restante*/
	
	for(i=1;i<l;i++){
		for(j=1;j<c;j++){
			if(matriz[i][j]!=-1){
				matriz[i][j] = matriz[i-1][j] + matriz[i][j-1];
			}else {
				//Se achar um gato zera a possibilidade de passar por aquele caminho
				matriz[i][j]=0;
			}
		}
	}
	return matriz[l-1][c-1];
}