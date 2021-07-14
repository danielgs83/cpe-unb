#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int nota1, nota2;
  double media;

  cout << "Digite a primeira nota: ";
  cin >> nota1;

  cout << "Digite a segunda nota: ";
  cin >> nota2;

  media = (nota1 + nota2) / 2.0;  //divisao de ponto flutuante devido ao 2.0

  /* configura 3 casas decimais para representacao*/
  cout << setprecision(3) << fixed;

  cout  << "A media final e: " << media << endl;//impressao

  cout << 1000.556 << endl << endl;

  return 0;
}
