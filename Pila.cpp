#include <iostream>
/*
 *Pila.cpp
 *Author: Fabiola Borchi
 *Date: 11 Gennaio 2021
*/
using namespace std;
class Pila {// la pila usa la politica FIFO (first in- first out)
	public:
	int d=100, dati[100], p=0;
	Pila(){
	}
	void push (int e){
		dati[p]=e;
		p++;
	}
	int pop(){
		p--;
		return dati[p];
	}
};
int main ()
{
	Pila p;
	p.push(33);
	p.push(11);
	p.push(2);//estrazione al contrario
	cout<<p.pop()<<endl;
	cout<<p.pop()<<endl;
	cout<<p.pop()<<endl;
return 0;
}
