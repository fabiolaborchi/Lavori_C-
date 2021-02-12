#include <iostream>
#include<string>
using namespace std;
/*
 * Matrice1
 *Author: Fabiola Borchi
 *Date: 11 December 2020
*/
int main ()
{	string cars[4]={"Volvo ", "BMW", "Ford", "Ferrari"};//cars(0)=Volvo; cars(1)=BMW...cars(1)(2)=W...primo indice macchina, secondo lettera
	
	cout<<cars[0]<<endl;

	//string s = cars[0];
	for(int i=0; i<5; i++){
		cout<<cars[0][i]<<endl;
	}


return 0;
}

