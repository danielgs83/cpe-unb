/**      @file: hello_detalhado.cpp
 *     @author: Daniel Guerreiro e Silva (danielgs@ene.unb.br), adaptado de Guilherme N. Ramos
 * @disciplina: Computação para Engenharia
 *
 * Explicações para o mesmo programa definido no arquivo hello.cpp.
 *
 * O texto entre os marcadores iniciais ("/" e "*") e finais ("*" e "/") é
 * considerado um comentário, e portanto completamente ignorado pelo compilador.
 * Use comentários quando realmente necessários, pois têm a função de
 * esclarescer algo que não é óbvio no código. O texto até aqui é um bom exemplo
 * de comentário (no contexto inicial da disciplina) */


#include <iostream> /* Esta instrução é interpretada pelo pré-processador, e
                    * inclui a biblioteca iostream, que faz parte da distribuição do
                    * sistema para programação em C++. Neste arquivo é definida a
                    * operação << de escrita (impressão) no terminal (cout), 
                    * que é usada neste programa para mostrar a
                    * mensagem na tela. */
using namespace std;/* Esta instrução abrevia os nomes associados
                    * à biblioteca padrão do C++, a std. Por exemplo, com este comando
                    * podemos escrever somente cout, ao invés do nome completo std::cout */

int main() { /* A função main é o ponto de entrada do programa, indicando onde a
              * execução é iniciada. int é o tipo de dado que esta função
              * retorna. Os parênteses delimitam os argumentos passados à função,
              * (neste caso, nenhum). Por fim, as chaves delimitam o escopo da
              * função, indicando onde começam e terminam suas instruções. */


    cout << "Hello World!"<< endl;  /* A operação << imprime o texto
                                    * "Hello World! no terminal de comando, que é representado 
                                    * pelo nome *cout*, e depois imprime uma quebra de linha,
                                    * representada pelo nome *endl*  */


    return 0; /* Retorna o valor dado (0) como resultado da execução da função
               * main. Em C++, geralmente o resultado 0 indica que o código foi
               * executado com sucesso. */
}
