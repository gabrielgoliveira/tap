#include <stdio.h>

int main(){
	int num_bolas, soma=0, i, aux=1, rena, mult=0;
	for(i=0;i<9;i++){
		scanf("%d", &num_bolas);
		soma+=num_bolas;
	}
	/*pegar o multiplo mais proximo da soma*/
	do{
		mult = aux*9;
		aux++;
	}while(soma>mult);
	if(mult>=soma){
		mult-=9;
	}
	rena = soma-mult;	
	switch (rena){
		case 1:
			printf("Dasher\n");
		break;
		case 2:
			printf("Dancer\n");
		break;
		case 3:
			printf("Prancer\n");
		break;
		case 4:
			printf("Vixen\n");
		break;
		case 5:
			printf("Comet\n");
		break;
		case 6:
			printf("Cupid\n");
		break;
		case 7:
			printf("Donner\n");
		break;
		case 8:
			printf("Blitzen\n");
		break;
		case 9:
			printf("Rudolph\n");
		break;
				
	}
	return 0;
}
