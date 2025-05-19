/*
<< - Operador de INSERÇÃO ('put to'). Serve para enviar "informação"
     para um "local". Por norma esse local é o terminal
     representado pelo objecto STD::COUT. Mas na verdade
     podemos enviar para outro local (por exemplo, para um 
     ficheiro)

    Exemplos de utilização do << com o objecto STD::COUT :

        cout << "Bom dia!";
        cout << "Bom dia!" << endl;
        cout << "Bom dia!\n";
        int x = 72;
        cout << "Valor de x é " << x << endl; 

    Formato geral de utilização do operador << com STD::COUT:alignas

        cout << VALOR1 << VALOR2 << ... << VALOR_N;
*/

#include <iostream>
#include <cstdio>      // Em C incluir com #include <stdio.h>

int main() {
    std::cout << "Olá, Mundo (C++)!" << std::endl;
    std::printf("Olá, Mundo (C)!\n");
}