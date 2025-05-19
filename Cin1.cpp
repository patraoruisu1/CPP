/*
cout    =>  Characters OUTput. Em C++, este objecto representa a saída 
            padrão. Como é que enviamos informação através do COUT?
            Mais de que uma maneira, mas a principal é através do 
            operador de inserção '<<' ('put to', 'put').

            Exemplos de COUT com operador de inserção:
                cout << dados;
                cout << dados << dados;
                cout << dados << ... << dados;

            Em Python: cout ===> sys.stdout

cin     =>  Characters INput. Em C++, este objecto representa a entrada 
            padrão. Como é que recebemos informação através do CIN?
            Mais de que uma maneira, mas a principal é através do 
            operador de extracção '>>' ('get from', 'get'). O CIN
            necessita de uma "local" onde guardar a informação. Por outras
            palavras, o CIN precisa de pelo menos uma variável que ficará
            associada à informação recebida

            Exemplos de CIN com operador de extracção:
                int numero;
                cin >> numero;  // solicitar um valor inteiro

                double a, b;
                cin >> a >> b;  // solicitar dois valores reais

                OU 
                    cin >> a;
                    cin >> b;

saída padrão / standard output => É um "canal" de comunicação undireccional,
        orientado ao caractere. Um programa coloca informação nesse canal e ela 
        é recebida pelo SO que depois a envia para o terminal.
        A saída padrão é um conceito do SO e não da linguagem A ou B. Em C++, a
        saída padrão é representada pelo objecto COUT (*), em C é representada
        pelo objecto STDOUT (#include <cstdio>)

        (*) -> definido em IOSTREAM

entrada padrão / standard input => É também um "canal" de comunicação 
        undireccional e orientado ao caractere. Um programa recebe informação
        através desse canal. Tipicamente, a informação é introduzida através
        do teclado.
        A entrada padrão é um conceito do SO e não da linguagem A ou B. Em C++, 
        a entrada padrão é representada pelo objecto COUT (*), em C é 
        representada pelo objecto STDIN (#include <cstdio>)

        (*) -> definido em IOSTREAM
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Para ler texto da entrada padrão (representa em C++ pelo objecto CIN)
    // devemos considerar (pelo menos) três situações:

    // 1. Ler uma linha de texto
    // cout << "Introduza uma linha: ";
    // string linha;
    // getline(cin, linha);
    // cout << "Linha introduzida: " << linha << endl;

    // 2. Ler uma palavra
    // cout << "Introduza uma palavra: ";
    // string palavra;
    // cin >> palavra;
    // cout << "Palavra introduzida: " << palavra << endl;

    // 3. Caractere a caractere
    cout << "Introduza um caractere: ";
    char ch;
    cin.get(ch);
    cout << "Caractere introduzido: " << ch << endl;

    cout << "Introduza outra palavra: ";
    string palavra;
    cin >> palavra;
    cout << "Nova palavra: " << palavra << endl;
}

/*
        _____________________________________________
CIN:   | ALBERTO          ARMANDO\n
        _________________________________________ 

cin >> palavra;    palavra: "ALBERTO"

        _____________________________________________
CIN:   |\n
        _________________________________________ 

cin >> palavra;    palavra: "ARMANDO"
*/