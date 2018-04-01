#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    string palavra, texto;
    int i=0, cont, temp;
    
    while(getline(cin, texto) /*texto[i]!='.'*/){
         i=0;
         while(texto[i]!='\0'){
             cont=0;
             temp=i;
             palavra="";
             if(texto[i]!=' '){
                palavra[cont]=texto[i];
                cont++;
                i++;
             } else {
                if(cont>2){
                    cout<<"A palavra tem "<<cont<<" caracteres\n";
                    cout<<palavra<<" pode ser abreviada\n";
                }else {
                    cout<<palavra<<" nao pode ser abreviada\n";
                }
                 cont=0;
                 i++;
             }    
             

         }

         cout<<"\n";
    }
    
   
    return 0;
}
