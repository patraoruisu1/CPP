/*
Exercício:
    Pedir um número (double) ao utilizador e exibir 
    1. Dobro
    2. Triplo
    3. Quadrado
    4. Cubo
    5. Resultado da expressão "2.5 * X + 10" onde X é o número introduzido.

    $ prog
    Introduza um número: 3
    Dobro        : 6
    Triplo       : 9
    Quadrado     : 9
    Cubo         : 27
    2.5 * x + 10 : 17.5

double =>    Tipo de dados numérico para lidar com números reais.
             Os números são representados em "vírgula flutuante (binária)".
             O termo "double" vem de "dupla-precisão". 
             Porquê? Porque utiliza 64 bits para representar um número,
             o dobro de um outro tipo de dados, o tipo "float", que utiliza
             32 bits (o float é de precisão simples).
             Sem entrar em muitos detalhes, vírgula flutuante é uma forma
             eficiente de representar números reais, mas com pouca exactidão.
             Por exemplo, um double não consegue representar com exactidão 
             números como 0.1, 1.1 ou 3.3, e isto levanta sérios problemas
             em áreas como finanças, ciências biomédicas ou aero-espaciais,
             onde erros de exactidão são intoleráveis.

v1 : versão inicial com cout e double e .setf/ios_base::fixed
*/

#include <iostream>
//#include <locale>

using namespace std;

int main() {
    // setlocale(LC_ALL, "pt_PT.UTF-8");
    cout << "Introduza um número: ";
    double num;   // float, double
    cin >> num;

    cout.precision(2);           // precisão de dois algarismos
    cout.setf(ios_base::fixed);  // à direita da vírgula

    cout << "Dobro        : " << 2 * num << endl;
    cout << "Triplo       : " << 3 * num << endl;
    cout << "Quadrado     : " << num * num << endl;
    cout << "Cubo         : " << num * num * num << endl;
    cout << "2.5 * x + 10 : " << 2.5 * num  + 10 << endl;
}

/*
identificador - nome que damos a variáveis, funções, classes, etc.
    1. Letras, números ou underscore (_)
    2. Deve começar por uma letra ou por underscore
 */