#include <iostream>

using namespace std;

int main() {
  	char c;

  	cout << "Letra: ";
  	cin >> c;  //leitura de um caractere

  	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
   		cout << "Vogal minuscula\n"; //imprime se leu uma das vogais acima
   	else
  		if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
     		cout << "Vogal maiuscula\n"; //imprime se leu uma das vogais acima
  		else
  			cout << "Nao e vogal\n";

  return 0;
}
