// 1. Definir array de C com os valores de 10 a 15

// 2. Escrever código para somar os valores do array anterior

// 3. Definir vector (com std::vector) com valores pares de 0 a 20

// 4. Definir outro vector que é uma cópia deste vector

// 5. Definir vector (com std::vector) com os seguintes nomes: ALBERTO, 
//    ARMANDO, ARNALDO, AUGUSTO.

// 6. Escrever código para indicar a posição do ARNALDO neste vector.

// 7. Contar o número de ocorrências de ARNALDO

// 8. Escrever código para indicar se o ARNALDO está presente no vector (usar FOR-each)

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template<typename T>
void print_vector(const vector<T>& elems) {
    for (int i = 0; i < elems.size(); i += 1) {
        cout << elems[i] << endl;
    }
}

void print_array(const int array[], const int SIZE) {
    for (int i = 0; i < SIZE; i += 1) {
        cout << array[i] << endl;
    }
}

int main() {
    // 1. Definir array de C com os valores de 10 a 15
    cout << "\n\nEXERCÍCIO 1\n";
    const int SIZE = 6;
    int numeros[] = {10, 11, 12, 13, 14, 15};

    // // ALTERNATIVA1:
    // int numeros[SIZE];
    // numeros[0] = 10;
    // numeros[1] = 11;
    // // etc.

    // // ALTERNATIVA2:
    // int numeros[SIZE];
    // for (int i = 0; i < SIZE; i += 1) {
    //     numeros[i] = 10 + i;
    // }

    // 2. Escrever código para somar os valores do array anterior
    cout << "\n\nEXERCÍCIO 2\n";
    int soma = 0;
    for (int i = 0; i < SIZE; i += 1) {
        soma += numeros[i];
    }
    cout << "SOMA: " << soma << endl;

    soma = 0;
    for (auto numero : numeros) {
        soma += numero;
    }
    cout << "SOMA: " << soma << endl;

    // 3. Definir vector (com std::vector) com valores pares de 0 a 20
    cout << "\n\nEXERCÍCIO 3\n";
    vector<int> pares;

    for (int p = 0; p <= 20; p += 2) {
        pares.emplace_back(p);
    }
    print_vector(pares);

    // 4. Definir outro vector que é uma cópia deste vector
    cout << "\n\nEXERCÍCIO 4\n";
    vector<int> paresB(pares);
    print_vector(paresB);

    // 5. Definir vector (com std::vector) com os seguintes nomes: ALBERTO, 
    //    ARMANDO, ARNALDO, AUGUSTO.
    cout << "\n\nEXERCÍCIO 5\n";
    vector<string> nomes{
        "ALBERTO",
        "ARMANDO",
        "ARNALDO",
        "AUGUSTO",
    };
    cout << "\nNOMES:\n";
    print_vector(nomes);

    // 5.5. Indicar se ARNALDO está presente:
    cout << "\n\nEXERCÍCIO 6\n";
    bool encontrado = false;
    for (auto nome : nomes) {
        if (nome == "ARNALDA") {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "Encontrado\n";
    }
    else {
        cout << "Não encontrado\n";
    }

    // 6. Escrever código para indicar a posição do ARNALDO neste vector.
    // ALTERNATIVA1:
    cout << "\n\nEXERCÍCIO 7\n";
    cout << "ALTERNATIVA1:\n";
    encontrado = false;
    auto i = 0;
    for (auto nome : nomes) {
        if (nome == "ARNALDO") {
            encontrado = true;
            break;
        }
        i += 1;
    }

    if (encontrado) {
        cout << "Encontrado na posição " << i << "\n";
    }
    else {
        cout << "Não encontrado\n";
    }

    // ALTERNATIVA2:
    cout << "ALTERNATIVA2:\n";
    i = 0;
    for (; i < nomes.size(); i += 1) {
        if (nomes[i] == "ARNALDO") {
            break;
        }
    }

    if (i < nomes.size()) {
        cout << "Encontrado na posição " << i << "\n";
    }
    else {
        cout << "Não encontrado\n";
    }

    // 7. Contar o número de ocorrências de ARNALDO
    auto conta_nome = 0;
    for (auto nome : nomes) {
        if (nome == "ARNALDO") {
            conta_nome += 1;
        }
    }

    cout << "ARNALDO encontrado " << conta_nome << " veze(s) no vector\n";

    // 8. Escrever código para indicar se o ARNALDO está presente no vector (usar FOR-each)
    // Ver 5.5
}