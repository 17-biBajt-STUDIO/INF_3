#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int ilosc_ocen;
float suma = 0; // 4.5

int main(){
	
	cout << "Podaj ilosc ocen z matematyki: ";
	cin >> ilosc_ocen;
	cout << endl;
	
	for(int i=0; i<ilosc_ocen; i++){
		
		float ocena;
		
		do{
		
			cout << "Podaj " << i+1 << " z " << ilosc_ocen << " ocen: ";
			cin >> ocena;
			
		}while(!(ocena>=1 && ocena<7));
		
		suma = suma + ocena; // lub suma += ocena;
		
	}
	
	cout << fixed << setprecision(2);
	cout << endl << "Srednia ocen: " << suma/ilosc_ocen;
	
	cin.ignore();
	return 0;
	
}
