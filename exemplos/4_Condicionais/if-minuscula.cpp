#include<iostream>

using namespace std;

//exemplo de programa usando if e operadores relacionais para caracteres
int main() {
  char c;

  cout << "Letra: ";
  cin >> c;
  
  if (c >= 'a' && c <= 'z') //repare que isso esta correto
    cout << "Letra minuscula.\n";
  else
    cout << "Outro caracter.\n";
  
  return 0;
}
