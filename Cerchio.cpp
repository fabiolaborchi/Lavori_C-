#include <iostream>
/*
 *Cerchio.cpp
 *Author: Fabiola Borchi
 *Date: 11 Gennaio 2021
*/
using namespace std;
class Cerchio {
	private:
	float raggio,pgreco;
	public: Cerchio(float r){
		pgreco=3.14;
		raggio=r;
	}
	public: int getDiametro() { return 2*raggio;}
	public: int getArea() { return raggio*raggio*pgreco;}
	public: int getCirconferenza() { return pgreco*pgreco*raggio;}
	public: void presentati() { cout<<"Sono un cerchio di diametro "<<getDiametro()<<" , l'area di "<<getArea()<<" e la circonferenza di "<<getCirconferenza()<<endl;}
};
int main ()
{
	Cerchio c1(10);
	Cerchio c2(20);
	c1.presentati();
	c2.presentati();


return 0;
}
