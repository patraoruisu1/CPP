#include <iostream>
#include <string>

using namespace std;

int main() {
    auto conta_palavras = 0;    // semelhante a int conta_palavras = 0
    auto conta_inic_vogal = 0;
    auto conta_inic_consoante = 0;
    auto conta_inic_digito = 0;

    auto conta_term_vogal = 0;
    auto conta_term_consoante = 0;
    auto conta_term_digito = 0;

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
        else if (ch >= '0' && ch <= '9') {
            conta_inic_digito += 1;
        }

        ch = palavra[palavra.length() - 1];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            conta_term_vogal += 1;
        }
        else if (ch >= 'a' && ch <= 'z') {
            conta_term_consoante += 1;
        }
        else if (ch >= '0' && ch <= '9') {
            conta_term_digito += 1;
        }


    }
    cout << endl;
    cout << "NÚMERO DE PALAVRAS: " << conta_palavras << "\n\n";

    cout << "COMEÇADAS POR:\n";
    cout << "... vogal     : "     << conta_inic_vogal << endl;
    cout << "... consoante : " << conta_inic_consoante << endl;
    cout << "... letra     : " 
         << conta_inic_vogal + conta_inic_consoante << endl;
    cout << "... dígito    : " << conta_inic_digito << endl;

    cout << endl;

    cout << "TERMINADAS EM:\n";
    cout << "... vogal     : "     << conta_term_vogal << endl;
    cout << "... consoante : " << conta_term_consoante << endl;
    cout << "... letra     : "
         << conta_term_vogal + conta_term_consoante << endl;
    cout << "... dígito    : " << conta_term_digito << endl;

    return 0;
}
