#include <iostream>
#include <string>
using namespace std;
int main(){
	string nome = "Gabriel G";
	
	cout<<"String: "<<nome<<endl;
	cout<<"Tamanho: "<<nome.size()<<endl;
	cout<<"Pos 3: "<<nome.at(3)<<endl;
	cout<<"Ultimo Caracter da String: "<<nome.at(nome.size()-1)<<endl; 
	/*concatena string*/
	nome.append(" de Oliveir");
	cout<<"String Concatenada: "<<nome<<endl;

	/*Adicionando apenas um caractere*/
	nome.push_back('a');
	cout<<"Nome com 1 caractere inserido no final: "<<nome<<endl;
	
	/*Inserindo a partir de uma determinada posição*/
	nome.insert(0, "String ");
	cout<<"Inserindo uma String na posição 0 de nome: "<<nome<<endl;

	/*apagando*/

	//nome.erase(int pos_inicio, int pos_final);
	nome.erase(14, nome.size()-1);
	cout<<"String Apagada: "<<nome<<endl;

	/*apagando tudo*/
	nome.erase(0, nome.size());
	/*
		ou ainda: nome.clear();
	*/
	if(nome.empty()){
		cout<<"String Vazia!!"<<endl;
	} else {
		cout<<"String NAO vazia!!"<<endl;
	}
	
	/*String do c++ e String do C*/
	/*
		No c++ a string é um objeto, logo existe conflito de tipos caso
		precise passar uma variavel do tipo string para uma função que recebe 
		um ponteiro para char, porem existe um metodo que retorna uma string
		equivalente ao vetor de caracteres que é:
		
			- nome.str.c_str();
	*/

	return 0;
}
