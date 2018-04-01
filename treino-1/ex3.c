#include<stdio.h>

int main(){

	int n, i, num, quant, sub;
	char v[300];
	int leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	scanf(" %d", &n);
	for(i=0;i<n;i++){
		scanf("%s", v);
		quant=0;
		sub=0;
		while(v[sub]!='\0'){
		
			quant += leds[v[sub]-48];
			sub++;
		}
		printf("%d leds\n", quant);
	}

	return 0;
}
