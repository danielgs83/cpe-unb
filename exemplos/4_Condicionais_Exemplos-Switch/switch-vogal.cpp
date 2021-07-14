#include <iostream>

using namespace std;

int main() {
  char c;

  cout << "Letra: ";
  cin >> c;  //leitura de um caractere

  switch(c) {
  	case 'a':
  	case 'e':
  	case 'i':
  	case 'o':
  	case 'u':
	    cout << "Vogal minuscula\n"; //imprime se leu uma das vogais acima
	    break;
	  case 'A':
  	case 'E':
  	case 'I':
  	case 'O':
  	case 'U':
	    cout << "Vogal maiuscula\n"; //imprime se leu uma das vogais acima
	    break;
  	default:
    	cout << "Nao e vogal\n";
  }

  return 0;
}
