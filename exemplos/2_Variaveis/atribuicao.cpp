#include <iostream>

using namespace std;

int main(){
	int a, b; /*declaracao das variaveis*/

	/*o sinal = significa ATRIBUICAO, i.e. copiar 20 na variavel a*/
	a = 20;
	b = 30;

	a = a + b;  /*soma os valores e guarda resultado em a*/

	cout << a << endl;  /* imprime resultado no terminal/prompt */

	return 0;
}
