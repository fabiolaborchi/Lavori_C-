#include <iostream>
/*
 *Rettangolo.cpp
 *Author: Fabiola Borchi
 *Date: 08 Gennaio 2021
*/
using namespace std; 
class Rettangolo {
	private: //perchè non usato nel main ma solo nella classe
	int lato_minore, lato_maggiore;
	public: Rettangolo(int lmin, int lmag){
		lato_minore=lmin;
		lato_maggiore=lmag;
	}
	public: int getArea() { return lato_minore*lato_maggiore;}
	public: void presentati() { cout<<"Sono un rettangolo di area "<<getArea()<<" e "<< lato_minore << " x "<< lato_maggiore <<endl;}
};
int main ()
{
	Rettangolo r1(10,15);
	Rettangolo r2(20,32);
	r1.presentati();
	r2.presentati();


return 0;
}

