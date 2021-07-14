#include <iostream>
using namespace std;

int main () {
  
  unsigned int variavel; //e se tirar o declaracao unsigned, o que ocorre?
  variavel = 2147483647;
  cout << variavel << endl;
  variavel = variavel + 1;
  cout << variavel << endl;
  
  return 0;
}
