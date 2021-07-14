#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	int i,j,k,n;
	string aux, vetor[10];
	
	cout << "Quantas palavras? ";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cout << "Informe a palavra: ";
		cin >> vetor[i];
	}
	
	cout << "Tamanho da primeira palavra: " << vetor[0].size() << endl;
	
	for(i = 1; i < n; i++) {
    	aux = vetor[i];
    	//algoritmo de ordenacao insertion-sort
	    for(j = i-1; (j >= 0) && (aux < vetor[j]); j--)
	      vetor[j + 1] = vetor[j];
	    vetor[j + 1] = aux;

	    //imprime lista parcialmente ordenada
	    for (k = 0; k < n-1; k++)
	      cout << setw(13) << vetor[k] << ", ";
	    cout << vetor[n-1] << "\n";
  	}
	
	return 0;	
}
