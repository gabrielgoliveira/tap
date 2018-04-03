#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, quant, i;
	/*declarando um vetor de inteiros de nome "vetor" */
	vector<int> vetor;
	cout<<"Digite a quantidade de elementos que vc deseja inserir no vetor: ";
	cin>>quant;
	while(quant--){
		cin>>n;
		/*inserir elementos no vetor*/
		vetor.push_back(n);
	}
	/*Essa função recebe o inicio do vetor e o final, e o ordena crescentemente,
	a funçao sort pertence a biblioteca algorithm*/
	sort(vetor.begin(), vetor.end());

	/*vetor.size() é uma função que retorna o tamanho do vetor*/
	for(i=0;i<vetor.size();i++){
		/*acessando o vetor na posição i*/
		cout<<"\nO vetor na pos "<<i<<" e: "<<vetor[i];
	}
	
	/*Limpar o vetor*/
	vetor.clear();	
	return 0;
}
