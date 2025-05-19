/*
programa em C++ =>  Um ou mais ficheiros com extensão '.cpp' ou '.hpp' (*)
                    compilados juntamente. Para obtermos um programa
                    executável, deve existir nalgum ficheiro .CPP
                    uma função MAIN ("int main() {...etc...}")

                    (*):    na verdade podem existir outras extensões 
                            ('.C', '.C++', '.h', '.h++', etc)
                    
                    As instruções são compiladas pela ordem pela qual são 
                    escritas, e também são executadas por essa ordem.
                    Qual é a ordem: em geral, de cima para baixo, da 
                    esquerda para a direita.

programa "propriamente dito" (*) começa onde? => 
                    Na primeira linha após a função MAIN    ("int main() {...etc...}")

                    (*) No fundo, o que eu pergunto aqui é 'onde é que começa
                        a acção?'

programa "propriamente dito" (*) termina onde? => 
                    Se não houver uma terminação explícita noutro local 
                    (por exemplo, via função EXIT), termina na última linha
                    da função MAIN, isto é, antes do último '}'

            1. Termina na última linha do main

            2. Terminação explícita noutro local. Por exemplo,
               através da função EXIT

            3. Abortar com erro, por via de uma função explícita 
               para tal (exemplo, função ABORT) ou de uma excepção

função MAIN ('int main() { ... }) =>
                    A função MAIN é o ponto de entrada num programa em C/C++.
                    O programa começa pelo MAIN e termina pelo MAIN.
                    Um programa em C/C++ tem que ter uma, e uma só, função
                    MAIN.

função =>   É um bloco de código com nome. Nós utilizamos essa função 
            através do nome ("chamamos ou invocamos a função"). Além da
            referência a um nome correcto, devemos também passar para 
            função toda a informação que ela precisa (ou seja, precisa
            de ARGUMENTOS).
            A função MAIN é uma função especial => ela é chamada pelo 
            sistema operativo.

            NOTA: Vários conceitos relacionados com funções foram omitidos 
            desta explicação. Serão abordados nos locais apropriados

            O que é um 'bloco de código'? Que tipo de instruções podemos 
            encontrar dentro uma função?

palavra-reservada / keyword / reserved word => Uma palavra com um significado 
        especial dentro de uma linguagem de programação, de tal maneira que,
        os compiladores/interpretadores possuem regras específicas para 
        compilar as instruções que envolvem uma palavra-reservada, 
        e não permitem (ie, reservam) que essas palavras sejam utilizadas
        para dar nomes a variáveis, classes, estruturas, etc.
        
        Por norma, os editores de texto especializados em programação 
        reconhecem essas palavras-reservas e dão cores específicas 
        a essas palavras. É o caso aqui do VS Code que dá a mesma cor
        às palavras-reservadas 'include', 'using', 'namespace', 'int' e
        'return', que são palavras-reservadas da linguagem C++.

instruções simples =>   Uma das várias operações concretas que a linguagem
                        C++ reconhece (e que iremos estudar ao longo 
                        destes módulos) e que termina em ';'.
                        No contexto de uma função, uma instrução simples 
                        corresponde a uma operação concreta. Por exemplo:
                        1. Somar dois ou mais números
                        2. Multiplicar um número pelo outro
                        3. Exibir informação no terminal
                        4. Invocar uma função
                        5. Definir uma variável (ou seja, um parâmetro)
                        6. Pedir memória ao S.O.
                        8. Abrir uma janela num sistema gráfico
                        9. Terminar a execução de uma função ou de todo o 
                           programa
                        ... etc ...

                        Sempre que possível, colocamos uma instrução 
                        simples numa linha de código.

instruções compostas => Uma instrução que "precisa" de outras instruções.
                        Essas outras instruções são delimitadas por '{' e '}'.
                        Designamos o conjunto de instruções entre '{' e '}' 
                        por 'bloco de instruções' (ou 'bloco de código')

                        Exemplos de instruções compostas:
                        1. Definição de função ou de método:
                                int sum_a_to_b(int a, int b) {
                                    //...
                                }
                        2. Definição de classes 
                        3. Definição de espaços de nomes (namespaces)
                        4. Instruções para controlo do fluxo de execução:
                                if (x > y) {
                                    int z = x + y;
                                    int w = 2*x + y*y;
                                    cout << z << "," << w << endl;
                                }

                                while (x > 0) {
                                    // ...
                                    x -= 1;
                                }
                        ... e existem muitas instruções compostas ...

bloco de instruções / bloco de código => 
            Conjunto de instruções entre '{' e '}'. Todas as instruções de 
            um bloco de instruções devem começar na mesma coluna e devem 
            ser escritas um nível de indentação à direita

'#include <iostream>' =>
            Estamos a incluir o módulo IOSTREAM da biblioteca padrão do C++. 
            Este módulo (e outros mais) possui um conjunto de "mecanismos"
            para exibir informação no terminal, para pedir informação 
            ao utilizador e para manipular ENTRADAS/SAÍDAS (INPUT/OUTPUT).
            Instruções começadas por '#' não terminam em ';' (depois vemos 
            porquê). São instruções para o compilador conseguir código.
            O '#include' serve para incluir na compilação os tais 
            mecanismos definidos em 'iostream'.

            É no IOSTREAM que são definidos os objectos ENDL, COUT e CIN 
            (este último vamos utilizar no próximo exemplo)

'using namespace std;' => 
            Serve para indicar ao compilador que pretendemos importar
            todas as definições do espaço de nomes 'std'. Ver próximo 
            exemplo.

espaço de nomes   =>    ou 'namespace', todos os identificadores que o C++
                        reconhece num determinado "contexto". Neste caso,
                        esses indentificadores são os nomes 'cout' e 'endl'
                        e o contexto é o contexto dado pelo espaço 
                        de nomes 'std'.

biblioteca, biblioteca padrão => Uma 'biblioteca' é um conjunto de módulos
        já feitos (já programados) com um propósito específico. Por exemplo,
        existem bibliotecas para:
        1.  Utilizar ENTRADAS/SAÍDAS
        2.  Utilizar o ambiente gráfico (criar janelas, reconhecer cliques do 
            rato), etc.
        3.  Para comunicar em rede (eg, através de redes TCP/IP como é o caso 
            da Internet)
        4.  Para manipular imagens (JPG, PNG, etc.)
        5.  Para manipular ou definir PDFs.
        6.  Para arquivar e comprimir ficheiros e directorias
        7.  Para encriptar dados
        ... e um zilião de outras funcionalidades ...

        A biblioteca padrão é o conjunto de bibliotecas definidas pelo 
        comité que define própria linguagem C++. Ou seja, é o conj. de
        bibliotecas que são instaladas com o compilador.
        Todas as definições contidas nas sub-bibliotecas e módulos da 
        biblioteca padrão, estão dentro do espaço de nomes STD.

'cout', 'endl', 'return 0;', "Olá, Mundo"  => Vemos num dos próximos exemplos
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Ola, Mundo" << endl;
}
