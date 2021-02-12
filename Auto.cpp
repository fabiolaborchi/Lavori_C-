#include <iostream>
/*
 *Auto.cpp
 *Author: Fabiola Borchi
 *Date: 08 Gennaio 2021
*/
using namespace std;
class Auto {
	public:
	int conta;
	string colore;
	string marca;
	Auto(string col, string m){
		conta=0;
		colore=col;
		marca=m;
	}
	void presentati(){
		cout<<"Buongiorno, sono un' auto di colore "<< colore << " e di marca "<< marca << " e ho fatto "<<conta<<" km !"<<endl;
	}
	void viaggia (int km){
		conta=conta+km;
	}
};
int main ()
{
	Auto x("verde","audi");
	Auto y("rosso","BMW");
	
	x.viaggia(20);
	x.viaggia(90);
	y.viaggia(45);
	x.presentati();
	y.presentati();
return 0;
}

