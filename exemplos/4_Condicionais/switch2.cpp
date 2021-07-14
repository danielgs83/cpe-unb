#include <iostream>

using namespace std;

int main() {
  unsigned int a;

  cout << "Matricula: ";
  cin >> a;  //leitura

  switch(a) {
  case 10129: //todos esses casos caem na impressao abaixo, caso contrario nada eh feito 
  case 33860:
  case 33967:
  case 33485:
  case 960231:
    cout << "O aluno esta matriculado em CPE.\n";
  }

  return 0;
}
