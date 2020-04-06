#include <iostream>
#include <string>
#include <stdlib.h> // Trae exit()
#include <fstream>


using namespace std;

void escribir();
void lectura();
void aniadir();

int main() {
	//escribir();
	aniadir();
	lectura();
	string a = "12";
	int b = std::stoi(a);
	system("pause"); 
	return 0;
}

void escribir(){
	
	ofstream archivo;
	string nom;
	cin>>nom;
	archivo.open("prueba.txt", ios::out); // Arbiendo el archivo
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}else{
		archivo<<nom;
		archivo.close();
	}
}

void lectura(){
	ifstream archivo;
	string texto;
	archivo.open("prueba.txt", ios::in);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){
		getline(archivo, texto);
		cout<<texto<<endl;
	}
	archivo.close();
}

void aniadir(){
	ofstream archivo;
	archivo.open("prueba.txt", ios::app); // Abrimos el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"\nHola añadiendo xd";
	archivo.close();
}
