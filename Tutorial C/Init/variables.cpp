#include <iostream> //cin.get()
#include <stdlib.h> // system("PAUSE") new  delete
#include <conio.h> //getch() 
#include <stdio.h> // printf

using namespace std;

int num = 10;
int num1 = 5;
int num2 = num * num1;


char letra = 'd';
char* cadenaCaracteres = "Cadena de caracteres";

bool boolean = true;

float numDec = 2.567;

const int constante = 12;

int operador = 10;
int *punteroNumero = &operador;

int *datos = new int[5];
int *datos1[5];

char array[4];


struct Hogar{
	int numeroDireccion;
	int numeroTel;
} Fernandez, Gonzales, *Puntero;

typedef bool boleano;

boleano bol = false;

int main() {
	
	cout << num2 << "\n\n" << endl;
	cout << letra <<"\n\n" << endl;
	cout << cadenaCaracteres <<"\n\n" << endl;
	cout << boolean <<"\n\n" << endl;
	cout << numDec <<"\n\n" << endl;
	
	
	
	cout << (operador+=10 )<<"\n\n" << endl;
	cout << (operador)<<"\n\n" << endl;
	
	//Fernandez.numeroDireccion = 112312;
	//Fernandez.numeroTel = 12312;
	
	//cout << "Numero direccion: "<<Fernandez.numeroDireccion << "\nNumero telefono: " << Fernandez.numeroTel<< endl;
	
	Hogar familia;
	familia.numeroDireccion = 1212;
	familia.numeroTel = 16456;
	
	Gonzales = Fernandez;
	
	datos[0] = 5;
	printf("%d \n",datos[0]);
	delete[] datos;
	
	int *x;
 
   	x = new int(67);
   	cout << *x << endl;
   	delete x;
	
	cin.get(); // Pausa despues de la ejecucion
	getch(); // Pausa despues de la ejecucion
	system("Pause"); // Pausa despues de la ejecucion
	return 1;
}
