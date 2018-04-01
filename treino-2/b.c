#include <stdio.h>
#include <math.h>
int main(){

	int n, i, cont, oco, maior_seq;
	long long seq;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lld", &seq);
		/*Decompondo o Numero*/
		maior_seq=0;
		oco=0;
		
		while(seq>0){
			if(seq%2 == 1){
				oco++;
			} else {		
				oco=0;
			}
			if(oco>maior_seq){
				maior_seq=oco;
			}
			seq=seq/2;		
		}
		printf("%d\n", maior_seq);

	}

	return 0;
}
