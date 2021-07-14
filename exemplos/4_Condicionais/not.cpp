/*
 * Exemplos de expressoes da operacao de negacao
 */
#include <iostream>

using namespace std;

int main() {

  cout << "!0  vale " << !0 << endl;
  cout << "!1  vale " << !1 << endl;
  cout << "!5  vale " << !5 << endl;

  cout << "!(!5)  vale " << !!5 << endl;
  
  cout << "!(1 || 1) vale " << !(1 || 1) << endl;
  
  return 0;
}
  
