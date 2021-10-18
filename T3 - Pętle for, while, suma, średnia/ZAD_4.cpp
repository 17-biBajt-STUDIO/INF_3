#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	
	int wybor;
	
	do{
		
		system("cls");
		
		int ilosc_ocen;
		float suma = 0; // 4.5
		
		cout << "Podaj ilosc ocen z matematyki: ";
		cin >> ilosc_ocen;
		cout << endl;
		
		float oceny[ilosc_ocen];
		int wagi[ilosc_ocen];
		
		for(int i=0; i<ilosc_ocen; i++){
			
			float ocena;
			int waga;
			
			do{
			
				cout << "Podaj " << i+1 << " z " << ilosc_ocen << " ocen: ";
				cin >> ocena;
				
			}while(!(ocena>=1 && ocena<7));
			
			oceny[i] = ocena;
			
			do{
			
				cout << "Podaj wage dla " << i+1 << " z " << ilosc_ocen << " ocen: ";
				cin >> waga;
				
			}while(!(waga>=1 && waga<=3));
			
			wagi[i] = waga;
			
		}
		
		float dzielna=0;
		int dzielnik=0;
		for(int i=0; i<ilosc_ocen; i++){
			
			dzielna += oceny[i] * wagi[i];
			dzielnik += wagi[i];
			
		}
		
		cout << fixed << setprecision(2);
		cout << endl << "Srednia wazona ocen: " << dzielna/dzielnik;
		
		cout << "\n\nWpisz 1 jezeli chcesz ponownie obliczyc srednia: ";
		cin >> wybor;
		
	}while(wybor==1);
	
	cin.ignore();
	return 0;
	
}
