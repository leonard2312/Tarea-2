#include <iostream>
#include <windows.h>

using namespace std;

void contador(int);

HANDLE pos;

void posci_in(int x,int y){
	pos = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cor;
	cor.X = x;
	cor.Y = y;
	SetConsoleCursorPosition(pos,cor);
}

int main(){
	int tiempo;
	
	cout<<"Introduzca la duracion (segundos) del contador:   ";
	cin>>tiempo;
	
	contador(tiempo);
	
	return 0;
}

void contador(int tim){
	if(tim > 0){
		posci_in(1,1);
		cout<<tim;
		Sleep(1000);
		posci_in(1,1);
		cout<<"    ";
		contador(tim-1);//recursividad
	}
	else{
		posci_in(1,1);
		cout<<"0";
		Sleep(1000);
		posci_in(1,1);
		cout<<"    ";
		posci_in(1,1);
		cout<<"BOOOMM!!!";
		exit;
	}
}
