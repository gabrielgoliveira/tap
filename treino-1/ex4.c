#include <stdio.h>

int main(){
	int i, j, l, n, aux;
	while(scanf("%d", &n)!=EOF){
		if(n%2 == 0){
			aux=(n/2)-1;
		} else {
			aux=(n/2);
		}
		for(i=1;i<=n;i++){
			if(i%2!=0){
				for(l=aux;l>0;l--){
					printf(" ");
				}
				aux--;
				for(j=1;j<=i;j++){ 
					printf("%c", '*');
				}
				printf("\n");
			}
		}
		if(n%2 == 0){
			aux=(n/2)-1;
		} else {
			aux=(n/2);
		}
		for(i=0;i<aux;i++){
			printf(" ");
		}
		aux--;
		printf("%c\n", '*');
		for(i=0;i<aux;i++){
			printf(" ");
		}
		printf("%c%c%c\n\n", '*', '*', '*');
	}
	return 0;
}

