#include <iostream>
using namespace std;

int main () {
  int variavel; //e se colocar o declaracao unsigned, o que ocorre?
  
  variavel = 2147483647;
  cout << variavel << endl;
  variavel = variavel + 1;
  cout << variavel << endl;
  
  return 0;
}
