/*
 * Exemplos de expressoes relacionais
 */
#include <iostream>

using namespace std;

int main() {

  cout << "(5 == 3) vale " << (5 == 3) << endl;
  cout << "(5 != 3) vale " << (5 != 3) << endl;

  cout << "(1 == 1) vale " << (1 == 1) << endl;
  cout << "(3 == 3) vale " << (3 == 3) << endl;

  cout << "(1 == 1 == 1) vale " << (1 == 1 == 1) << endl;
  cout << "(3 == 3 == 3) vale " << (3 == 3 == 3) << endl;

  cout << "(3 == 3 == 1) vale " << (3 == 3 == 1) << endl;

  cout << "(3 == 5 == 0) vale " << (3 == 5 == 0) << endl;  

  if (3 == 5 == 0 == 1)
    cout << "Esta expressao esquisita e verdadeira!\n";
  
  return 0;
}
  
