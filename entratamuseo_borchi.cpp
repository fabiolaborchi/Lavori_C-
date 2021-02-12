//stabilisce il prezzo finale del biglietto 
#include <iostream>
using namespace std;

int main ()
{
	float prezzo;
	float pf;
	int v;//visitatore
	cout<<"inserire prezzo del biglietto:";
	cin>> prezzo;
	while(prezzo<=0){
		cout<< "prezzo inserito non valido!!"<<endl;
		cout<< "inserire prezzo del biglietto:";
		cin>>prezzo;}
		
	cout<<"inserire tipologia di visitatore:\n1(studente)\n2(pensionato)\n3(cittadino residente nel comune di Bologna)\n4(portatori di handicap)\n5(visitatore generico):";
	cin>> v;
	
	while(v>5 || v<1){
		cout<< "tipologia inserita non valida!!"<<endl;
		cout<< "inserire tipologia di visitatore:";
		cin>>v;}
	switch (v){
		case 1: pf=50*prezzo; pf= pf/100; pf= prezzo - pf; cout<<"il prezzo finale e':"<<pf; break;
		case 2: pf=30*prezzo; pf= pf/100; pf= prezzo - pf; cout<<"il prezzo finale e':"<<pf; break;
		case 3: pf=25*prezzo; pf= pf/100; pf= prezzo - pf; cout<<"il prezzo finale e':"<<pf; break;
		case 4: cout<<"entrata libera"; break;
		default: cout<<prezzo;
	}
	

return 0;
}

