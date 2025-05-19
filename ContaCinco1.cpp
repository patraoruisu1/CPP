/*
6 5 14 44 555 5 10
4 -1
O número 5 foi introduzido 2 vezes.
Soma dos números 643
*/

// Variáveis definidas com 'auto'. O tipo de dados da variável 
// é inferido a partir da expressão à direita do '=':
//      auto VARIAVEL = OBJECTO;
//
//      auto a = 0;             // int a = 0;
//      auto b = 2.7;           // double b = 2.7;
//      auto nome = "manel"s;   // string nome = "manel";
//      auto b = true;          // bool b = true;


#include <iostream>

using namespace std;

int main() {
    auto soma = 0;
    auto conta_cinco = 0;

    cout << "Introduza números (-1 para terminar):\n";
    int num;
    cin >> num;
    while (num != -1) {
        soma += num;
        if (num == 5) {
            conta_cinco += 1;
        }
        cin >> num;
    }
    cout << "O número 5 foi introduzido " << conta_cinco << " vezes\n";
    cout << "Soma de todos os números: " << soma << "\n";
}

/*
while (CONDIÇÃO) {
    BLOCO DE INSTRUÇÕES
}

Repete BLOCO DE INSTRUÇÕES __enquanto__ a CONDIÇÃO for verdadeira

--------------

if (CONDIÇÃO) {
    BLOCO DE INSTRUÇÕES
}

Executa BLOCO DE INSTRUÇÕES uma vez __se__ a CONDIÇÃO for verdadeira

*/



/*
auto x = 56.0;      // var
auto y = 2 * x;
// ...

auto z = x + y;
 */

 /*
    a += x;   EQUIVALENTE A    a = a + x;
    w -= r;   EQUIVALENTE A    w = w - r;
    valor *= coeficiente;   EQUIVALENTE A    valor = valor * coeficiente;
    parametro /= factor;    EQUIVALENTE A    parametro = parametro / factor;
 */
