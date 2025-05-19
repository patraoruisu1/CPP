#include <iostream>
#include <string>

using namespace std;

int main() {
    auto conta_palavras = 0;    // semelhante a int conta_palavras = 0
    auto conta_inic_vogal = 0;
    cout << "Introduza texto:" << endl;
    string palavra;
    while (cin >> palavra) {
        conta_palavras += 1;
        char ch = palavra[0];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            conta_inic_vogal += 1;
        }
    }           
    cout << "Número de palavras: " << conta_palavras << endl;
    cout << "Número de palavras começadas por vogal: " << conta_inic_vogal << endl;
    return 0;
}