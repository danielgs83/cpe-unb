#include <iostream>
#include <string>
using namespace std;

void altera(string vet, int x) {
  vet[0] = 'X';
  x = -1;
}

int main() {
  string s = "BOM DIA!";
  int x = 0;

  altera(s, x);//s eh passado por valor, por ser string
  cout << s << "\n";
  cout << "x      = " << x << "\n";
  return 0;
}
