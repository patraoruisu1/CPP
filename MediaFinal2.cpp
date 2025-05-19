/*
    Pretende-se determinar a classificação final de um aluno sabendo que 
    a avaliação consiste em 2 testes e um trabalho. Para a determinação da
    média sabe-se que cada teste tem um peso de 35% e o trabalho um peso 
    de 30%.

    TAREFAS:
        1) Indicar se aprovado ou não
        2) Colocar valor dos pesos num só local
        3) Exibir resultado final com PRINTF e uma casa decimal (5 espaços)

    $ prog
    Introduza as classificações (0 a 20)
    Primeiro teste (35%) : 15
    Segundo teste (35%)  : 12
    Trabalho (30%)       : 18

    Classificação final: 14.9   
    APROVADO
 */

#include <iostream>

using namespace std;

int main() {
    const auto peso_teste1 = 35.0;
    const auto peso_teste2 = 35.0;
    const auto peso_trabalho = 30.0;

    cout << "Introduza as classificações (0 a 20)\n";

    cout << "Primeiro teste (" << peso_teste1 << "%) : ";
    double nota_teste1;
    cin >> nota_teste1;

    cout << "Segundo teste (" << peso_teste2 << "%)  : ";
    double nota_teste2;
    cin >> nota_teste2;

    cout << "Trabalho (" << peso_trabalho << "%)       : ";
    double nota_trabalho;
    cin >> nota_trabalho;

    cout << endl;

    auto nota_final =   peso_teste1 * nota_teste1 
                       + peso_teste2 * nota_teste2 
                       + peso_trabalho * nota_trabalho;
    nota_final /= 100;
    
    printf("Classificação final: %5.1f\n", nota_final);

    if (nota_final >= 9.5) {
        cout << "APROVADO\n";
    }
    else {
        cout << "NÃO APROVADO\n";
    }
}