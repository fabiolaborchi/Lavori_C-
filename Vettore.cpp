#include <iostream>
/*
 *Vettore.cpp
 *Author: Fabiola Borchi
 *Date: 27 Gennaio 2021
*/
using namespace std;
class Vettore {
	
	const int DIM=100;
	int* dati, p=0;
	public:
	Vettore(){
		dati=new int[DIM];
		for(int i=0; i<DIM; i++){
			dati[i]=0;
		}
	}
	void stampa(){
		for(int i=0; i<DIM; i++){
			cout<<dati[i]<<" ";
		}
	cout<<endl;
	}
	void write(int index,int  value){
		if(index<0||index>=DIM){
			return;
		}
		dati[index]=value;
	}
	int read (int index){
		if(index<0||index>=DIM){
			return -1;
		}
		return dati[index];
	}
};
int main ()
{
	Vettore v,w;
	v.write(3,33);
	v.write(4,44);
	v.stampa();
	w.stampa();
	int x=v.read(4);
	cout<<x+1<<endl;
return 0;
}
