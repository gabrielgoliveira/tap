/*
Um exemplo de como utilizar map
*/

#include <iostream>
#include <map>
using namespace std;
int main(void){
    string produto;
    int quant_prod, quant;
    map<string, int> cadastro;
    cout<<"Digite a quantidade de produtos: ";
    cin>>quant;
    do{
        cout<<"Digite o produto: ";
        cin>>produto;
        cout<<"Digite a quantidade do produto: ";
        cin>>quant_prod;
        cadastro[produto] = quant_prod;
        quant--;
    }while(quant);
    cout<<"Busca de produtos: \nDigite o nome do produto: ";
    cin>>produto;
    cout<<"A quantidade e: "<<cadastro[produto]<<"\n";

    return 0;
}