/*
>> - Operador de EXTRACÇÃO ('get from'). Serve para receber 
     "informação" textual vinda de um "local". Por norma esse
     local é o teclado representado pelo objecto STD::CIN. Mas 
     na verdade podemos receber informação de outro local (por 
     exemplo, a partir de um ficheiro)

Variável - Nome associado a um valor, e que possui uma estrutura dada 
           pelo tipo de dados da variável. Em C/C++, uma variável
           representa um local na memória.

           Definir variáveis em C++ (existem várias formas, na verdade, mas 
           começar por ver apenas a mais simples):

                TIPO_DADOS NOME_VAR;
                TIPO_DADOS NOME_VAR = VALOR_INICIAL;

           Exemplos:
                int x;       // 'x' é uma variável do tipo inteiro
                int y = 70;  // 'y' é uma variável inteira com valor inicial 70
                double z = 9.9;     // 'z' é uma variável do tipo de dados double
                                    // este tipo de dados indica valores reais (com casas decimais)
                string morada;      // 'morada' é uma variável do tipo std::string
                                    // string é o tipo de dados de C++ para texto
                                    // a variável morada está vazia
                string cidade = "Lisboa";   // valor inicial de 'cidade' é "Lisboa" 
*/

#include <iostream>
#include <string>
// #include <locale> 

using namespace std;

int main() {
    // setlocale(LC_ALL, "pt_PT.UTF-8");
    system("chcp 65001>nul");
    cout << "Como se chama? ";
    string prim_nome;
    cin >> prim_nome;
    cout << "Olá, " << prim_nome << endl;
}
