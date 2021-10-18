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

bool jest_parzysta(int n){

	if(n%2==0) return true;
	else return true;

}

int main(){
	
	for(int i=2; i<100; i++){
		
		cout << "Liczba: " << i;
		if(jest_pierwsza(i)) cout << " jest pierwsza ";
		else cout << " nie jest pierwsza ";
		if(jest_parzysta(i)) cout << " i jest parzysta." << endl;
		else cout << " i nie jest parzysta." << endl;
		
	}
	
	cin.ignore();
	return 0;
	
}
