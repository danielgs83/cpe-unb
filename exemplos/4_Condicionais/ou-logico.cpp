/*
 * Exemplos de expressoes da operacao ou-logico
 */
#include <iostream>

using namespace std;

int main() {

  cout << "(1 || 1) vale " << (1 || 1) << endl;
  cout << "(1 || 0) vale " << (1 || 0) << endl;
  cout << "(0 || 1) vale " << (0 || 1) << endl;
  cout << "(0 || 0) vale " << (0 || 0) << endl;  

  cout << "(5 == 5 || 3 == 3) vale " << (5 == 5 || 3 == 3) << endl;
  cout << "(5 != 5 || 3 != 3) vale " << (5 != 5 || 3 != 3) << endl;  
    
  return 0;
}
  
