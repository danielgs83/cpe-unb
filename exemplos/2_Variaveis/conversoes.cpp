#include <iostream>
using namespace std;

int main() {
  int a;
  float b;

  a = 10;
  b = a;
  cout << "O valor de b e: " << b << endl;
  
  b = 10 / 3;
  cout << "Divisao inteira 10 / 3: " << b << endl;
  
  b = 10 / (float) 3;
  cout << "Divisao de ponto flutuante 10 / (float) 3: " << b << endl;
  
  b = 10 / 3.0;
  cout << "Divisao de ponto flutuante 10 / 3.0: " << b << endl;
  
  return 0;
}
