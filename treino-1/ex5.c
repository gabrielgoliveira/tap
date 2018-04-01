#include <stdio.h>

int main(){
	int n, i,j, sub, diamante;
	char mina[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s", mina);
		sub=0;
		diamante=0;
		while(mina[sub]!='\0'){
			if(mina[sub] == '<'){
				j=sub;
				while(mina[j] != '\0'){
					if(mina[j] == '>'){
						diamante++;
						mina[j] = '.';
						break;
					}
					j++;
				}
			}
			sub++;
		}
		printf("%d\n", diamante);
	}

	return 0;
}
