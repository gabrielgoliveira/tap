#include <stdio.h>
#include <stdlib.h>

char** alocaMatriz(int, int);
void liberaMatriz(char **, int);
char mudarOrientacao(char, char);
int mover(char **, int, int);
void cadeRobo(char **, int, int);
int pos[2];
int main(){

	int l, c, s, i, j, adesivos = 0, letra;
	char **matriz;
	char orientation;
	scanf("%d %d %d", &l, &c, &s);
	matriz = alocaMatriz(l, c);
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			scanf(" %c", &matriz[i][j]);
		}
	}
	cadeRobo(matriz, l,  c);
	for(i=0;i<s;i++){
		scanf(" %c", &orientation);
		if(orientation == 'F'){
			 adesivos+= mover(matriz, l, c);
			 cadeRobo(matriz, l,  c);
		} else {
			matriz[pos[0]][pos[1]] = mudarOrientacao(orientation,matriz[pos[0]][pos[1]]);
		}
	}

	printf("%d\n", adesivos);


	return 0;
}
char** alocaMatriz(int l, int c){
	char **matriz;
	int i, j;
	matriz = (char**) malloc(l*sizeof(char*));
	for(i=0;i<l;i++){
		matriz[i] = (char*) malloc(c*sizeof(char));
		for(j=0;j<c;j++){
			matriz[i][j] = ' ';
		}
	}
	if(matriz == NULL){
		exit(1);
	}
	return matriz;
} 
void liberaMatriz(char **matriz, int l){
	int i;
	for(i=0;i<l;i++){
		free(matriz[i]);
	}
	free(matriz);
}
char mudarOrientacao(char coordenada, char letra){
	if(coordenada == 'D') {
		if(letra == 'N'){
			return 'L';
		}else if(letra == 'S'){
			return 'O';
		} else if(letra == 'L'){
			return 'S';
		} else if(letra == 'O'){
			return 'N';
		}
	}else if (coordenada == 'E'){
		if(letra == 'N'){
			return 'O';
		}else if(letra == 'S'){
			return 'L';
		} else if(letra == 'L'){
			return 'N';
		} else if(letra == 'O'){
			return 'S';
		}
	}
}
int mover(char **matriz, int l, int c){
	int i, j, cont=0;
	i = pos[0];
	j = pos[1];
	//subiu
	if(matriz[i][j] == 'S' && (matriz[i+1][j] != '#') && i+1<l){
		matriz[i][j] = '.';
		if(matriz[i+1][j] == '*'){
			cont++;
		}
		matriz[i+1][j] = 'S';
	}
	//desceu
	if(matriz[i][j] == 'N' && (matriz[i-1][j] != '#') && i-1 > 0){
		matriz[i][j] = '.';
		if(matriz[i-1][j] == '*'){
			cont++;
		}
		matriz[i-1][j] = 'N';
	}
	//esquerda
	if(matriz[i][j] == 'O' && (matriz[i][j-1] != '#') && (j-1 > 0)){
		matriz[i][j] = '.';
		if(matriz[i][j-1] == '*'){
			cont++;
		}
		matriz[i][j-1] = 'O';
	}
	//direita
	if(matriz[i][j] == 'L' && (matriz[i][j+1] != '#') && j+1 < c){
		matriz[i][j] = '.';
		if(matriz[i][j+1] == '*'){
			cont++;
		}
		matriz[i][j+1] = 'L';
	}

	return cont;
}
void cadeRobo(char **matriz, int l, int c){
	int i, j;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(matriz[i][j] == 'N' || matriz[i][j] == 'S' || matriz[i][j] == 'O' || matriz[i][j] == 'L'){
				pos[0] = i;
				pos[1] = j;
				return;
			}
		}
	}
}