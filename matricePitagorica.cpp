#include <iostream>
#include<time.h>
#include<string>
#include <cstdlib>
using namespace std;
/*
 * Matrice Tabella Pitagorica 
 *Author: Fabiola Borchi
 *Date: 15 December 2020
*/

void stampaMatrice(int matrice[10][10], int valore){
	for(int x=0; x<10; x++){		//riga
		for(int y=0; y<10; y++){ 		//c=colonna
			valore=rand()%10;
			matrice[x][y]=valore;
			cout<<matrice[x][y]<<" \t ";
		}cout<<endl;
	}cout<<endl;
}
void stampaPitagorica(int matrice[10][10]){
	for(int x=0;x<10;x++){
		for(int y=0; y<10;y++){
			matrice[x][y]=(x+1)*(y+1);
			cout<<matrice[x][y]<<" \t ";
		}
		cout<<endl;
	}
}	
int sommaMatrice (int matrice[10][10] ){
	int somma=0;
	int r=0;
	for (int x=0; x<10; x++){
				somma=somma+matrice [r] [x];
		}return somma;
	}

int main ()
{	int somma;
	int m[10][10];
	srand(time(NULL));
	stampaMatrice(m,10);
	stampaPitagorica(m);
	cout<<endl;
	somma=sommaMatrice(m);
	cout<<"somma:"<<somma<<endl;
	return 0;
}

