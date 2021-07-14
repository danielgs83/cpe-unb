#include <iostream>
using namespace std;

int main () {
  float variavel;
  variavel = 1000.0;
  
  cout << variavel << endl;
  variavel = variavel + 0.00000000000001;
  cout << variavel << endl;
  
  return 0;
}
