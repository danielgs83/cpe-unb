#include <iostream>

using namespace std;

//exemplo do comando switch
int main() {
  unsigned int a;

  cout << "Matricula: ";
  cin >> a;   //leitura 
  
  switch(a) {
  case 10129:
    cout << "O aluno entrou na UnB em 2010.\n";
    break;
  case 33860://eh possivel indicar multiplos casos, como se fossem encadeados por OUs
  case 33967:
  case 33485:
    cout << "O aluno entrou na UnB em 2013.\n";
    break;
  case 960231:
    cout << "O aluno entrou na UnB em 1996.\n";
    break;
  }
  
  return 0;
}
