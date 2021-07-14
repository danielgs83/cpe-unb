#include <iostream>
#include <string>
#include <iomanip>
#define N_FLORES 5
using namespace std;

int main() {
  int i, j, k;
  //repare que abaixo declaramos um vetor de strings
  string vetor[] = {"rosa", "cravo", "margarida", "violeta", "amor-perfeito"};
  string aux;

  for (k = 0; k < N_FLORES-1; k++)
    cout << setw(13) << vetor[k] << ", ";
  cout << vetor[N_FLORES-1] << "\n";

  for(i = 1; i < N_FLORES; i++) {
    aux = vetor[i];
    //algoritmo de ordenacao insertion-sort
    for(j = i-1; (j >= 0) && (aux < vetor[j]); j--)
      vetor[j + 1] = vetor[j];
    vetor[j + 1] = aux;

    //imprime lista parcialmente ordenada
    for (k = 0; k < N_FLORES-1; k++)
      cout << setw(13) << vetor[k] << ", ";
    cout << vetor[N_FLORES-1] << "\n";
  }
  return 0;
}
