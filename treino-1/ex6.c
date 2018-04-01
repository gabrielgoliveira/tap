#include <stdio.h>
#define TAM 300


int main(){
	char frase[TAM], time1[TAM], time2[TAM];
	int t, i, sub, ocorrencias1, ocorrencias2;
	
	scanf(" %d",&t);
	for(i=0;i<t;i++){
		scanf(" %299[^\n]s", frase);
		scanf(" %299[^\n]s", time1);
		scanf(" %299[^\n]s", time2);
		sub=0;
		ocorrencias1=0;
		ocorrencias2=0;
		while(frase[sub]!='\0'){
			if(frase[sub] == time1[sub]){
				ocorrencias1++;
			}
			if(frase[sub] == time2[sub]){
				ocorrencias2++;
			}
			sub++;
		}
		printf("Instancia %d\n", i+1);
		if(ocorrencias1 > ocorrencias2){
			printf("time 1\n");
		}
		if(ocorrencias1 < ocorrencias2){
			printf("time 2\n");
		}
		if(ocorrencias1 == ocorrencias2){
			printf("empate\n");
		}
		
	}
	return 0;
}
