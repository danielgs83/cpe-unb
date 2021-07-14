/**      @file: hello_detalhado.cpp
 *     @author: Daniel Guerreiro e Silva (danielgs@ene.unb.br), adaptado de Guilherme N. Ramos
 * @disciplina: Computa��o para Engenharia
 *
 * Explica��es para o mesmo programa definido no arquivo hello.cpp.
 *
 * O texto entre os marcadores iniciais ("/" e "*") e finais ("*" e "/") �
 * considerado um coment�rio, e portanto completamente ignorado pelo compilador.
 * Use coment�rios quando realmente necess�rios, pois t�m a fun��o de
 * esclarescer algo que n�o � �bvio no c�digo. O texto at� aqui � um bom exemplo
 * de coment�rio (no contexto inicial da disciplina) */


#include <iostream> /* Esta instru��o � interpretada pelo pr�-processador, e
                    * inclui a biblioteca iostream, que faz parte da distribui��o do
                    * sistema para programa��o em C++. Neste arquivo � definida a
                    * opera��o << de escrita (impress�o) no terminal (cout), 
                    * que � usada neste programa para mostrar a
                    * mensagem na tela. */
using namespace std;/* Esta instru��o abrevia os nomes associados
                    * � biblioteca padr�o do C++, a std. Por exemplo, com este comando
                    * podemos escrever somente cout, ao inv�s do nome completo std::cout */

int main() { /* A fun��o main � o ponto de entrada do programa, indicando onde a
              * execu��o � iniciada. int � o tipo de dado que esta fun��o
              * retorna. Os par�nteses delimitam os argumentos passados � fun��o,
              * (neste caso, nenhum). Por fim, as chaves delimitam o escopo da
              * fun��o, indicando onde come�am e terminam suas instru��es. */


    cout << "Hello World!"<< endl;  /* A opera��o << imprime o texto
                                    * "Hello World! no terminal de comando, que � representado 
                                    * pelo nome *cout*, e depois imprime uma quebra de linha,
                                    * representada pelo nome *endl*  */


    return 0; /* Retorna o valor dado (0) como resultado da execu��o da fun��o
               * main. Em C++, geralmente o resultado 0 indica que o c�digo foi
               * executado com sucesso. */
}
