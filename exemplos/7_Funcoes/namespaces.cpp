// namespaces
#include <iostream>
using namespace std;

namespace foo{
	int value() {
		return 5;
  	}
}

namespace bar{
	//modificador const impede mudanca na var. pi
	const double pi = 3.1416;
  	double value() {
		return 2*pi;
  	}
}

int main () {
	//acessamos as funcoes pelos nomes qualificados
	cout << foo::value() << '\n';
  	cout << bar::value() << '\n';
  	cout << bar::pi << '\n';
  	return 0;
}
