/*
 Qual o seu nome completo? Alberto Almeida
 Qual a sua idade? 23

 Olá, Alberto Almeida!
 Para o ano vai ter 24 anos
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Qual o seu nome completo? ";
    string nome_completo;
    getline(cin, nome_completo);

    cout << "Qual a sua idade? ";
    int idade;
    cin >> idade;

    cout << endl;
    cout << "Olá, " << nome_completo << "!" << endl;
    cout << "Para o ano vai ter " << idade + 1 << " anos" << endl;
}