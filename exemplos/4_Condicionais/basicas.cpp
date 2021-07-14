/*
 * Exemplos de expressoes
 */
#include <iostream>

using namespace std;

int main() {
  int x;
  char c;
  bool afirmacao; //variavel de tipo booleana, armazena o valor logico true ou o valor logico false


  if (0) //constante inteira igual a zero tem valor logico equivalente a false
    cout << "Esta mensagem nunca sera impressa.\n";
  if (1) //constante inteira DIFERENTE de zero tem valor logico equivalente a true
    cout << "Esta mensagem sempre sera impressa.\n";

  //aqui testando com os valores logicos explicitas
  if (false)
    cout << "Esta mensagem nunca sera impressa.\n";
  if (true)
    cout << "Esta mensagem sempre sera impressa.\n";

  //valor da variavel booleana determina execucao ou nao do comando
  afirmacao = false;
  if (afirmacao)
    cout << "Esta mensagem nunca sera impressa.\n";
  afirmacao = true;
  if (afirmacao)
    cout << "Esta mensagem sempre sera impressa, pois afirmacao = " << afirmacao << '\n';

  x = 0;
  if (x)
    cout << "Esta mensagem nunca sera impressa.\n";
  x = 100;
  if (x)
    cout << "Esta mensagem sempre sera impressa, pois x = " << x << '\n';


  c = 'a';
  if (c) //variavel char armazena inteiro de 8 bits, se for diferente de 0 o teste logico aqui sera true
    cout << "Esta mensagem sempre sera impressa, pois c = " << c << '\n';

  return 0;
}
