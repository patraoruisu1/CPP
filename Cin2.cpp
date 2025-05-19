/*
    Ciclos de "processamento" de texto em C++ (com std::string)
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Para ler texto da entrada padrão (representa em C++ pelo objecto CIN)
    // devemos considerar (pelo menos) três situações:

    // 1. Processar texto linha a linha
    string linha;
    while (getline(cin, linha)) {
        cout << "Linha introduzida => " << linha << endl;
    }

    // 2. Processar texto palavra a palavra
    // string palavra;
    // while (cin >> palavra) {
    //     cout << "Palavra introduzida => " << palavra << endl;
    // }

    // 3. Processar texto caractere a caractere
    // char ch;
    // while (cin.get(ch)) {
    //     cout << "Caractere introduzido => " << ch << endl;
    // }
}

/*
        _____________________________________________
CIN:   | ALBERTO          ARMANDO\n
        _________________________________________ 

cin >> palavra;    palavra: "ALBERTO"

        _____________________________________________
CIN:   |\n
        _________________________________________ 

cin >> palavra;    palavra: "ARMANDO"
*/