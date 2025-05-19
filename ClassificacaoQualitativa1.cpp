/*
3. Programa a solicitar uma classificação quantitativa (0-20) ao utilizador
    e depois exibe a classificação qualitativa.

    Classificação qualitativa:
        0-4: Fraco
        5-9: Insuficiente
        10-14: Suficiente
        15-20: Bom
        > 20 ou < 0: Inválida (ou seja, é um erro)

    EXEMPLOS:
        $ prog
        Insira uma classificação: 12
        Classificação "Suficiente"

        $ prog
        Insira uma classificação: 7
        Classificação "Insuficiente"

        $ prog
        Insira uma classificação: 17
        Classificação "Bom"

        $ prog
        Insira uma classificação: 31
        ATENÇÃO: classificação 31 INVÁLIDA!
 */

#include <iostream>

using namespace std;

int main() {
    cout << "Insira uma classificação: ";
    int classif;
    cin >> classif;

    if (classif < 0) {
        cout << "ATENÇÃO: classificação " << classif << " INVÁLIDA!\n";
    }
    else if (classif <= 4) {
        cout << "Classificação \"Fraco\"\n";
    }
    else if (classif <= 9) {
        cout << "Classificação \"Insuficiente\"\n";
    }
    else if (classif <= 14) {
        cout << "Classificação \"Suficiente\"\n";
    }
    else if (classif <= 20) {
        cout << "Classificação \"Bom\"\n";
    }
    else {
        cout << "ATENÇÃO: classificação " << classif << " INVÁLIDA!\n";
    }
}