#include <iostream>

using namespace std;
void operacion(int[],int);
void suma (int [],int,int);
int main(){
	int x,res=0;
	int y[1000];
	
	cout<<"Introduzca el tamaño de la lista:   ";
	cin>>x;
	
	operacion(y,x);
	suma(y,x-1,res);
	
	return 0;
}

void operacion(int cad[],int ta){
		
	for(int i=0;i<ta;i++){
		cout<<"Introduzca un numero: ";
		cin>>cad[i];
	}
	cout<<"\n";	
}

void suma(int cad[],int ta,int res){
	
	res += cad[ta];
	
	if(ta>0){
	suma(cad,ta-1,res);//recursividad
	}
	else{
	cout<<"El resultado es:  "<<res<<"\n\n";
	}
}
