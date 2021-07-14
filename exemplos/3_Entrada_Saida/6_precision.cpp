#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float numerador, denominador;
	
	cin >> numerador;
	cin >> denominador;
	
	cout << setprecision(3) << fixed;
	cout << numerador/denominador << endl;
	
	return 0;
}
