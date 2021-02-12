/*
 * genera.cpp
 * Fabiola Borchi
 */
//indovina il numero
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main ()
{	int n;
	int x;
	int vite;
	cout<<"BENVENUTO IN 'INDOVINA IL NUMERO'!!!"<<endl;
	cout<<"inserisci un numero da 1 a 10 (hai a disposizione solo 3 vite) "<<endl;
	
	cin>>n;	
	cout<<"numero generato ";
	srand(time(NULL));
	x=(rand() % 10)+1;
	cout<<x<<endl;
	for (vite=1;vite<3; vite++){
		if(n!=x){
		cout<<"riprova"<<endl;
		cout<<"inserisci un numero ";
		cin>>n;	
		cout<<"numero generato ";
		srand(time(NULL));
		x=(rand() % 10)+1;
		cout<<x<<endl;}
		else {cout<<"hai indovinato";
		return 0;
		}
	
	} 
	if(n!=x){
		cout<<"hai perso";}
	else {	cout<<"hai vinto";
	
	}
	}



