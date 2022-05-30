#include <iostream>

using namespace std;

	int main(){
		//Ler 5 números e informar o menor e o maior
	
		int numero ,maior,menor ,i;
		
			for( i=0; i <=4; i++){
				cout<<"Informe um nuemro: ";
				cin>>numero;
					if(i==0){
						maior=numero;
						menor=numero;
					} else{
						
					 if (numero>maior){
						maior=numero;}
						else{
						
					  if ( numero<menor){
						menor=numero;}else{
						
					
					}
				}
				}
		}
		cout<< "*******************************\nO numero maior eh  " <<maior;
		cout<<"\n********************************\nO numero menor eh " <<menor;
		return 0;
	}
				
			
					
		
