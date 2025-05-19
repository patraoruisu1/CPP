/*
    if (CONDIÇÃO) {
        INST1;
        INST2;
        etc...
    }
    else  {
        INST_X;
        INST_Y;
        etc...
    }

CONDIÇÃO: Expressão lógica utilizada no contexto de uma instrução
    de decisão/selecção.

INSTRUÇÃO DE DECISÃO/SELECÇÃO: if, switch-case

CLÁUSULA ELSE : Alternativa ao bloco de instruções do IF. Esta cláusula
     é opcional.
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Idade: ";
    int idade;
    cin >> idade;

    if (idade < 18) {
        cout << "Menor de idade" << endl;
    }
    else if (idade < 65) {    // C++: else if | Python: elif
        cout << "Maior de idade" << endl;
    }
    else {
        cout << "Sénior" << endl;
    }
}