#include <iostream>

using namespace std;

int main() {

  cout << "First sentence.\n"; // caractere \n somente quebra a linha 
  cout << "Second sentence.\nThird sentence.";

  cout << "\nFirst sentence." << endl; //endl quebra linha e limpa o buffer (flush)
  cout << "Second sentence." << endl;

  return 0;
}
