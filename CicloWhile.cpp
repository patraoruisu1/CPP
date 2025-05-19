/*
while (CONDIÇÃO) {
    INST1;
    INST2;
    ...
    INST_N;
}

Enquanto a CONDIÇÃO for verdadeira, o bloco de instruções é executado.

*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    /*
    // 1o EXEMPLO: Ciclo de contagem (gama de valores)
    cout << "1o EXEMPLO: Ciclo de contagem (gama de valores)" << endl;
    auto soma = 0;
    auto i = 1;
    while (i <= 5) {
        soma += i;
        i += 1;
    }
    cout << "Soma: " << soma << endl;

    // 2o EXEMPLO: Percorrer os elementos de uma estrutura de dados (string)
    cout <<  "2o EXEMPLO: Percorrer os elementos de uma estrutura de dados (string)" << endl;
    string nome("ALBERTO");

    i = 0;
    while (i < nome.length()) {
        cout << nome[i] << endl;
        i += 1;
    }

    cout << "------------------- AO CONTRÁRIO -------------------\n";

    i = nome.length() - 1;
    while (i > -1) {    // OU i >= 0
        cout << nome[i] << endl;
        i -= 1;
    }

    // 3o EXEMPLO: Percorrer os elementos de uma estrutura de dados (vector)
    cout <<  "3o EXEMPLO: Percorrer os elementos de uma estrutura de dados (vector)" << endl;
    vector<int> nums{40, 27, 52, 78, 14};

    soma = 0;
    i = 0;
    while (i < nums.size()) {
        soma += nums[i];
        i += 1;
    }
    cout << "Soma dos números no vector -> " << soma << endl;
    */

    // 4o EXEMPLO
    cout << "4o EXEMPLO: Ciclo de validação" << endl;
    cout << "-------- TIPO DE DADOS CORRECTO / VALORES INVÁLIDOS ----------" << endl;

    cout << "Qual a sua idade? ";
    int idade;
    cin >> idade;
    while (idade < 0 || idade > 120) {  // OU !(idade >= 0 && idade <= 120)
        cout << "Idade inválida!\n";
        cout << "Qual a sua idade? ";
        cin >> idade;
    }

    cout << "------------------- WHILE TRUE C/ BREAK -------------------\n";

    while (true) {
        cout << "Qual a sua idade? ";
        int idade;
        cin >> idade;
        if (idade >= 0 && idade <= 120) {
            break;
        }
        cout << "Idade inválida!\n";    
    }

    cout << "-------- TIPO DE DADOS INCORRECTO / VALORES INVÁLIDOS ----------" << endl;

    cout << "Introduza um inteiro: ";
    int num;
    while ( !(cin >> num) ) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Valor inválido. Introduza um inteiro: ";
    }

    // 5o EXEMPLO: Menu de opções
    cout << "5o EXEMPLO: Menu de opções" << endl;

    string opcao;
    while (opcao != "T") {
        // 1. Exibir as opções do menu
        cout << "1. LEVANTAR\n";
        cout << "2. DEPOSITAR\n";
        cout << "T. TERMINAR PROGRAMA\n";

        // 2. Ler opção introduzida pelo utilizador
        cout << "Opcao > ";
        getline(cin, opcao);

        // 3. Analisar e executar a opção escolhida
        if (opcao == "1") {
            cout << "Opção LEVANTAR escolhida\n";
        }
        else if (opcao == "2") {
            cout << "Opção DEPOSITAR escolhida\n";
        }
        else if (opcao == "T") {
            cout << "O programa vai terminar\n";
        }
        else {
            cout << "Opção <" << opcao << "> inválida!\n";
        }
    } // while
}