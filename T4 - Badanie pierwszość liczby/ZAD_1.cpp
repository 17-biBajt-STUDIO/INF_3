#include <iostream>
#include <cmath>

using namespace std;

bool jest_pierwsza(int n){

	if(n<2) return false;

	int m = (int) floor(sqrt(n));
	for(int i=2; i<=m; i++)
		if(n%i==0) return false;
	
	return true;

}

int main(){
	
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	
	cout << "Liczba: " << liczba;
	if(jest_pierwsza(liczba)) cout << " jest pierwsza." << endl;
	else cout << " nie jest pierwsza." << endl;
	
	cin.ignore();
	return 0;
	
}
