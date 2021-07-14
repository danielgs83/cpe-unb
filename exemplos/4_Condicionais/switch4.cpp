#include <iostream>

using namespace std;

/*exemplo do comando switch*/
int main() {
  unsigned int a;

  cout << "Matricula: ";
  cin >> a; //leitura
  
  switch(a) {
  case 10129: 
    cout << "Maria Candida Moreira Telles\n";
    break;
  case 33860:
    cout << "Larissa Garcia Alfonsi\n";
    break;
  case 33967:
    cout << "Leonardo Kozlowiski Kenupp\n";
    break;
  default:
    cout << "O aluno nao esta matriculado.\n";
  }
  
  return 0;
}
