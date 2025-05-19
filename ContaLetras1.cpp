#include <iostream>
#include <string>

using namespace std;

int main() {
    auto conta_palavras = 0;    // semelhante a int conta_palavras = 0
    auto conta_inic_vogal = 0;
    auto conta_inic_consoante = 0;
    cout << "Introduza texto:" << endl;
    string palavra;
    while (cin >> palavra) {
        conta_palavras += 1;
        char ch = palavra[0];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            conta_inic_vogal += 1;
        }
        else if (ch >= 'a' && ch <= 'z') {
            conta_inic_consoante += 1;
        }
    }

    cout << "Número de palavras: " << conta_palavras << endl;
    cout << "Número de palavras começadas por vogal: "     << conta_inic_vogal << endl;
    cout << "Número de palavras começadas por consoante: " << conta_inic_consoante << endl;
    cout << "Número de palavras começadas por letra: " 
         << conta_inic_vogal + conta_inic_consoante << endl;
    return 0;
}
