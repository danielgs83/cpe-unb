#include <iostream>
using namespace std;

int main () {
  unsigned int variavel; //e se tirar o declaracao unsigned, o que ocorre? Ou se mudar o tipo para long long int?
  variavel = 0;
  variavel = variavel - 2000000000;

  cout << variavel << endl;
  variavel = variavel * 2;
  cout << variavel << endl;
    
  return 0;
}
