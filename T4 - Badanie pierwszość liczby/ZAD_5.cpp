#include <iostream>
#include <cmath>

using namespace std;

int suma = 0;

bool jest_pierwsza(int n){

	if(n<2) return false;

	int m = (int) floor(sqrt(n));
	for(int i=2; i<=m; i++)
		if(n%i==0) return false;
	
	return true;

}

int main(){
	
	for(int i=1; i<100; i++)
		if(jest_pierwsza(i)) suma++;
	
	cout << "Ilosc liczb: " << suma;
	
	cin.ignore();
	return 0;
	
}
