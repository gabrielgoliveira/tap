#include <iostream> /*cout, cin, fixed*/
#include <iomanip> /*setprecision*/
#include <map> /*map*/


using namespace std;

int main(){

    int n, i, quant_disp, j, quant_prod, quant;
    string nome_prod;
    double custo, valor;

    map<string, double> produtos;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>quant_disp;
        for(j=0;j<quant_disp;j++){
            cin>>nome_prod>>valor;
            produtos[nome_prod] = valor;
        }
        cin>>quant_prod;
        custo=0;
        while(quant_prod--){
            cin>>nome_prod>>quant;
            custo+=produtos[nome_prod]*quant;
        }
        cout<<"R$ "<<fixed<<setprecision(2)<<custo<<"\n";
    }
    return 0;
}