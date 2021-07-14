#include <iostream>

using namespace std;

int main() {
  int selecao;
  //opcoes do cardapio
  
  cout << "Prato 1 - Miojo\n";
  cout << "Prato 2 - Ensopado\n";
  cout << "Prato 3 - Pizza\n";
  cout << "Prato 4 - Bife acebolado\n";
  cout << "Prato 5 - Vitela\n";

  cout << "Escolha a sua opcao: ";
  cin >> selecao;
  
  //comando switch para checar a opcao escolhida
  switch (selecao) {
  case 1:
    cout << "Macarrao instantaneo.\n";
    break;
  case 2:
    cout << "Carne de segunda bem macia.\n";
    break;
  case 3:
    cout << "O alimento universal.\n";
    break;
  case 4:
    cout << "Para quem ja esta com saudades de casa.\n";
    break;
  case 5:
    cout << "Carne branca e macia de bezerro criado em cubiculo.\n";
    break;
  default:
    cout << "Selecao invalida.\n";
  }
  
  return 0;
}
