/*
    Pretende-se determinar a classificação final de um aluno sabendo que 
    a avaliação consiste em 2 testes e um trabalho. Para a determinação da
    média sabe-se que cada teste tem um peso de 35% e o trabalho um peso 
    de 30%.

    $ prog
    Introduza as classificações (0 a 20)
    Primeiro teste (35%) : 15
    Segundo teste (35%)  : 12
    Trabalho (30%)       : 18

    Classificação final: 14.85
 */

#include <iostream>

using namespace std;

int main() {
    cout << "Introduza as classificações (0 a 20)\n";

    cout << "Primeiro teste (35%) : ";
    double nota_teste1;
    cin >> nota_teste1;

    cout << "Segundo teste (35%)  : ";
    double nota_teste2;
    cin >> nota_teste2;

    cout << "Trabalho (30%)       : ";
    double nota_trabalho;
    cin >> nota_trabalho;
    
    cout << endl;

    auto nota_final = 0.35 * nota_teste1 + 0.35 * nota_teste2 + 0.30 * nota_trabalho;
    cout << "Classificação final: " << nota_final << endl;
}