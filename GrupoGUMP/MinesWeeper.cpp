#include <stdio.h>

int matriz[100][100];
int nLineas = 100;
int nColum = 100;

void establecerTamanio(int l, int c) {
	nLineas = l;
	nColum = c;
}

void prepararMatriz() {
	for(int i=0; i<nLineas; i++) {
		for(int j=0; j<nColum; j++){
			matriz[i][j] = 0;
		}
	}
}

bool puntoValido(int i, int j) {
	return i>=0 && i<nLineas && j>=0 && j<nColum && matriz[i][j] != -1;
}

void incrementarAdyacencia(int i, int j) {
	if(puntoValido(i, j))
		++matriz[i][j];
}

void imprimirTablero(int nTab) {
	printf("Field #%d:\n", nTab);
	for(int i=0; i<nLineas; i++) {
		for(int j=0; j<nColum; j++) {
			int x = matriz[i][j];
			if(x==-1)
				printf("*");
			else
				printf("%d",x);
		}
		printf("\n");
	}
}

void ponerBomba(int i, int j) {	
	matriz[i][j] = -1;
	for(int x=-1; x<=1; x++) {
		for(int y=-1; y<=1; y++) {		
			incrementarAdyacencia(i+x, j+y);
		}
	}
}

int main() {
	
	int l,c, nTab=1;
	
	for(;;) {		
		scanf("%d %d",&l ,&c);
		if (l == 0 && c == 0)
			break;
			
		establecerTamanio(l, c);
		prepararMatriz();
		
		for( int i=0; i<l; i++) {			
			char fila[c+1];
			scanf("%s", fila);
			
			for(int j=0; j<c; j++) {
				char auxChar = fila[j];			
				if(auxChar == '*') 
					ponerBomba(i, j);				
			}
		}
		if (nTab > 1)
			printf("\n");
		
		imprimirTablero(nTab);
		nTab++;
	}
	return 0;
}
