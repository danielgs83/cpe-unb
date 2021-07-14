#include <iostream>
using namespace std;

int main(){
	int a, b, c; //declaracao das variaveis

	cout << "Digite o primeiro termo: ";
	cin >> a; //leitura de um valor da entrada

	cout << "Digite o segundo termo: ";
	cin >> b; //leitura do segundo valor da entrada

	c = (a + b)/2; //atribuicao
	cout << "A media e: " << c << endl;

	return 0;
}
