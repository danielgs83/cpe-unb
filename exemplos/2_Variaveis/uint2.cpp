#include <iostream>
using namespace std;

int main () {
  unsigned int variavel; //e se colocar unsigned long long, o que ocorre?
  
  variavel = 2000000000;
  cout << variavel << endl;
  variavel = variavel * 2;
  cout << variavel << endl;
  
  return 0;
}
