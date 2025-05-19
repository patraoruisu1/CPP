/*
Criar 'OlaMundo4.cpp'. O programa deve suportar a seguinte interação
com o utilizador:

    Qual o seu primeiro nome? Alberto
    Qual o seu apelido? Almeida

    Olá, Alberto Almeida!
    Olá, Almeida/Alberto!
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Qual o seu primeiro nome? ";
    string prim_nome;
    cin >> prim_nome;

    cout << "Qual o seu apelido? ";
    string apelido;
    cin >> apelido;

    cout << endl;
    cout << "Olá, " << prim_nome << " " << apelido << "!\n";
    cout << "Olá, " << apelido << "/" << prim_nome << "!\n";
}