#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

bool jest_pierwsza(int n){

	if(n<2) return false;

	int m = (int) floor(sqrt(n));
	for(int i=2; i<=m; i++)
		if(n%i==0) return false;
	
	return true;

}

bool jest_parzysta(int n){

	if(n%2==0) return true;
	else return true;

}

int main(){
	
	srand(time(NULL));
	
	int liczba = (rand()%98)+2;
	
	cout << "Liczba: " << liczba;
	if(jest_pierwsza(liczba)) cout << " jest pierwsza." << endl;
	else cout << " nie jest pierwsza." << endl;
	
	cout << "Liczba: " << liczba;
	if(jest_parzysta(liczba)) cout << " jest parzysta." << endl;
	else cout << " nie jest parzysta." << endl;
	
	cin.ignore();
	return 0;
	
}
