#include <iostream>

using namespace std;

void eliminacion(int[],int,int);

int main(){
	int tam,oftam,res;
	int lista[1000];
	
	cout<<"Introduzca el tamaño de la lista:  ";
	cin>>tam;
	
	oftam = tam;
	
	if((tam%=2)>0){
		res = (oftam/2)+1;
	}
	
	else if ((tam%=2)==0){
		res = oftam/2;
	}
	
	eliminacion(lista,oftam,res);
	
	return 0;
}

void eliminacion(int lis[],int ta,int elimi){
	if((ta!=elimi)&&(ta>0)){
	cout<<ta;
	}
	else if(ta==elimi){
		cout<<" ";
	}
	eliminacion(lis,ta-1,elimi);//recursividad
}
