/*
 CICLO FOR "TRADICIONAL":

 for (INICIALIZAÇÃO; CONDIÇÃO; ACTUALIZAÇÃO) {
    INST1;
    INST2;
    ...
    INST_N;
 }

 A semântica do ciclo FOR tradicional é semelhante à do WHILE: enquanto 
 a CONDIÇÃO fôr verdadeira, o bloco de instruções é executado.
 A inicialização é executada apenas uma vez, logo no inicio do FOR.
 A actualização é executado após INST_N e antes de testar novamente 
 a CONDIÇÃO. 

    CICLO DE CONTAGEM COM WHILE:
    auto i = A;
    while (i <= B) {
        //.... fazer qq coisa com i 
        
        i += C;
    }

    CICLO DE CONTAGEM COM FOR TRADICIONAL (mais adequado):
    for (auto i = A; i <= B; i += C ) {
        //.... fazer qq coisa com i 
    }

CICLO FOR-each:

    for (DECLARAÇÃO VAR : COLECÇÃO) {       // ler o ":" como "in" (dentro de)
        INST1;  
        INST2;
        ...
        INST_N;
    }

O ciclo FOR-each (também designado em inglês por "range based FOR") é 
utilizado para iterar elementos de colecções. Por iterar entenda-se,
aceder repetidamente a todos os elementos de uma colecção.
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    // 1o EXEMPLO: Ciclo de contagem (gama de valores)
    cout << "1o EXEMPLO: Ciclo de contagem (gama de valores)" << endl;
    cout << "FOR tradicional" << endl;
    auto soma = 0;
    for (int i = 1; i <= 5; i += 1) {
        soma += i;
    }
    cout << "Soma: " << soma << endl;

    // 2o EXEMPLO: Percorrer os elementos de uma estrutura de dados (string)
    cout <<  "2o EXEMPLO: Percorrer os elementos de uma estrutura de dados (string)" << endl;
    string nome("ALBERTO");

    cout << "FOR tradicional" << endl;
    for (int i = 0; i < nome.length(); i += 1) {
        cout << nome[i] << endl;
    }

    cout << "FOR-each" << endl;
    for (char letra : nome) {
        cout << letra << endl;
    }

    for (auto letra : nome) {       // ou for (const auto& letra : nome)
        cout << letra << endl;
    }

    // int x = 10;
    // int& y = x;
    // y += 2;
    // cout << x << endl;   // 12
    // cout << y << endl;   // 12

    for (auto& letra : nome) {   
        letra += 32;
    }
    cout << nome << endl;   // alberto

    cout << "------------------- AO CONTRÁRIO -------------------\n";

    cout << "FOR tradicional" << endl;
    for (int i = nome.length() - 1; i > -1; i -= 1) {
        cout << nome[i] << endl;
    }

    cout << "Com FOR-each" << endl;
    for (auto letra : string(nome.rbegin(), nome.rend())) {
        cout << letra << endl;
    }


    // 3o EXEMPLO: Percorrer os elementos de uma estrutura de dados (vector)
    cout <<  "3o EXEMPLO: Percorrer os elementos de uma estrutura de dados (vector)" << endl;
    vector<int> nums{40, 27, 52, 78, 14};

    cout << "FOR tradicional" << endl;
    soma = 0;
    for (int i = 0; i < nums.size(); i += 1) {
        soma += nums[i];
    }
    cout << "Soma dos números no vector -> " << soma << endl;

    cout << "FOR-each" << endl;
    soma = 0;
    for (auto num : nums) {
        soma += num;
    }
    cout << "Soma dos números no vector -> " << soma << endl;

        // 4o EXEMPLO: Percorrer os elementos de uma estrutura de dados (map)
        cout << "4o EXEMPLO: Percorrer os elementos de uma estrutura de dados (map)" << endl;
        map<string, int> idades{
            {"alberto",  23},
            {"armando",  44},
            {"antónio",  72},
            {"augusto",  31}
        };
    
        for (auto nome_idade : idades) {
            cout << "Idade do " << nome_idade.first << " é " << nome_idade.second << endl;
        }
        cout << "----\n";
    
        for (auto [nome, idade] : idades) {
            cout << "Idade do " << nome << " é " << idade << endl;
        }
        cout << "----\n";
    
}