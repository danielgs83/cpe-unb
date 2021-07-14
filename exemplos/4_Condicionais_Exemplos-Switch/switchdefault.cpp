#include <iostream>
using namespace std;

int main () {
  int a;
  char newmat;
  cin >> a;
  switch(a) {
    case 10129:
        cout << "Maria Candida Moreira Telles\n";
        break;
    case 33860:
        cout << "Larissa Garcia Alfonsi\n";
        break;
    default:
        cout << "O aluno nao esta matriculado\n";
        cout << "Quer matricular esse aluno? (S/N) ";
        cin >> newmat;
        if(newmat == 'S')
        	cout << "Matriculado com sucesso.\n";
  }
  return 0;
}
