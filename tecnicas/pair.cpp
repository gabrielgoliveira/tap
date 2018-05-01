#include <bits/stdc++.h>

using namespace std;

int main(){
    /*Declaração pair e inicializando*/
    pair<int, string> teste (10, "Gabriel");
    /*Acessando os elementos*/
    cout<<teste.first<<" - "<<teste.second<<endl;
    /*Alterando o Valor dos elementos*/
    teste.first = 1;
    teste.second = "Gabriel G Oliveira";
    cout<<teste.first<<" - "<<teste.second<<endl;

    /*Vetor de Pair*/
    pair <int, int> vetor[3];
    /*Acessando um Elemento*/
    vetor[0].first = 1;
    vetor[0].second = 2;

    /*Make Pair*/
    vetor[1] = make_pair(2, 3);

    /*pair com 3 elementos*/
    pair <int, pair<string, double>> produto[2];
    //1 maneira de atribuir valores aos elementos
    produto[0] = make_pair(1, make_pair("Mouse", 10.55));
    //2 maneira
    produto[1].first = 2;
    produto[1].second.first = "Teclado";
    produto[1].second.second = 20.99;
    /*Acessando os vetor de pair para imprimir*/
    for(int i=0;i<2;i++){
        cout<<produto[i].first<<" - "<<produto[i].second.first<<" - "<<produto[i].second.second<<endl;
    }



    return 0;
}