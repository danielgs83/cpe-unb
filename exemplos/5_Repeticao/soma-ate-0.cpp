#include <iostream>

using namespace std;

int main() {
  int soma, parcela;
  
  soma = 0;

  cout << "numero a ser somado (0 para sair): ";
  cin >> parcela; //leitura do primeiro numero

  while (parcela != 0) {
    soma += parcela; //acumula
    cout << "numero a ser somado (0 para sair): ";
    cin >> parcela; //leitura do proximo numero
  }

  cout << "Soma: " << soma << endl;

  return 0;
}
