#include <iostream>

using namespace std;

	int main(){
		
		int contador=0;
		int i, idade;
	
		
		//Ler a idade de 10 pessoas e imprimir quantas são maiores de idade.
		
		
	for (int i=0; i<=10; i++){ //variaveis
		cout<<"Informe a idade: "; //imprimir 
		cin>>idade; //armazenar 
		
	
		
			if(idade>=18){
				contador++;
			
			}
			
			}
	cout<<"A quantidade de pessoas com maior idade eh "<<contador;
	return 0;	
	}
