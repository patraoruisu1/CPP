
/*
 QUESTIONÁRIO:

 1) Indique duas formas de construir/declarar/definir uma string?
    R: string str1 = "ABC";
       string str2("ABC");
       string str3(str2);

 2) Indique como definir uma string com dez símbolos '#'
    R: string str(10, '#')

 3) Dada a string xpto, definida como:
            string xpto("ABC ABCDEF")
    Indique expressões em C++ para:

        3.1) Obter o primeiro caractere
            R: xpto[0]

        3.2) Obter o último caractere
            R: xpto[xpto.length() - 1] OU xpto.back()

        3.3) Obter o penúltimo caractere
            R: xpto[xpto.length() - 2]

        3.4) Obter a posição do espaço 
            R: xpto.find(' ')

        3.5) Obter a substring à direita do espaço
            R: xpto.substr(xpto.find(' ') + 1);

        3.6) Obter uma substring com os caracteres compreendidos entre
             as posições 2 e 5.
            R: xpto.substr(2, 4)

        3.7) Obter a posição do segundo 'A'
            R: xpto.find('A', xpto.find('A') + 1);

        3.8) Confirmar que a substring "AXY" não existe na string XPTO
            R: xpto.find("AXY") == string::npos
    
        3.9) Apagar a segunda ocorrência de "ABC"
            R:
            auto pos_abc = xpto.find("ABC", xpto.find("ABC") + 1);
            xpto.erase(pos_abc, 3);

        3.10) Substituir a substring "DEF" por "XYZ"
            R: xpto.replace(xpto.find("DEF"), 3, "XYZ");

 */

// STRING é uma sequência de CHARs
// 
// ESTRUTURA DE DADOS  =>   Representação física de um tipo de dados, ou,
//                          é a implementação de um tipo de dados.
//                          Esta implementação abrange dois "aspectos":
//                          1) estrutura em mémória   2) operações disponíveis
//                                                       para manipular objectos
//                                                       do tipo de dados.
//
//                          Porém, é mais comum utilizar o termo "estrutura de 
//                          dados" como sinónimo de "colecção de elementos".
//
// COLECÇÃO DE ELEMENTOS    =>  "Conjunto" ou "grupo" de objectos que podem 
// (COLLECTION ou CONTAINER)    ser ou não  do mesmo tipo de dados 
//                              (tipicamente, são)
//
// COLECÇÕES TÍPICAS NA MAIORIA DAS LINGUAGENS:
//
//      1. SEQUÊNCIAS:  associação de posições a objectos; elementos estão por
//                      por ordem (ou seja, sabemos qual é o 1o, qual é o 2o, etc.)
//                      Tipicamente, temos operações para aceder aos elementos 
//                      por posição, para obter o comprimento da sequência, 
//                      para iterar a sequência por uma determinada ordem e pela
//                      ordem inversa, etc.
//
//          1.1 STRINGS: Uma sequência de caracteres. Em C++, uma string é uma 
//                       sequência de "objectos" do tipo CHAR (ou similar).
//                       Temos dois tipos de string em C++:
//                          1) strings herdadas da linguagem C
//                          2) std::string
//                          
//          1.2 ARRAYS:
//          1.3 VECTORES/LISTAS:
//    
//      2. MAPAS:   associação de qualquer coisa a qualquer coisa. Por exemplo,
//                  podemos querer associar nomes a datas de nascimento.
//
//      3. CONJUNTOS "MATEMÁTICOS"/SETs: são conjuntos de elementos sem 
//                  repetição, ou seja, não aceitam duplicados
//
//
//  DOIS TIPOS DE FUNÇÃO EM C++ NO QUE TOCA À INVOCAÇÃO:
//
//  1. FUNCAO(ARG1, ARG2, ..., ARG_N)
//     Exemplos:
//          pow(2, 3)                 // devolve 2^3 == 8
//          getline(cin, str);        // lê uma linha de texto para variável str
//          system("cls");            // invocar um subprocesso/programa
//
// 2. ARG1.FUNCAO(ARG2, ..., ARG_N)     => estas funções designam-se também por
//    Exemplos:                           "método" ou (em C++) "função membro";
//          cin.get(ch);                   estas funções são executadas num 
//          str.length();                   determinado contexto dado pelo ARG1
//     
//          char ch;
//          cin.get(ch);              // lê caractere a partir do cin
//          string xpto;
//          getline(cin, xpto);
//          cout << xpto.length()     // string.length() dá a dimensão da string

#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;
// using namespace std::literals;

int main() {
    cout << "---------------------------------" << endl;
    cout << "CONSTRUÇÃO" << endl;
    cout << "---------------------------------" << endl;

    string nome = "Alberto";
    string nome2("Alberto");
    auto nome3 = "Alberto"s;

    cout << nome << endl;
    cout << nome2 << endl;
    cout << nome3 << endl;

    string varios_pontos(40, '.');
    // possível mas errado: string varios_pontos('.', 40);
    cout << varios_pontos << endl;
    cout << varios_pontos.length() << endl;

    string nome5 = "Armando";
    string nome6(nome5, 1, 3);
    cout << nome6 << endl;

    cout << "---------------------------------" << endl;
    cout << "DIMENSÃO E ACESSO" << endl;
    cout << "---------------------------------" << endl;

    cout << "Dimensão da string: " << nome.length() << endl;
    cout << "Dimensão da string: " << nome.size() << endl;
    cout << "Dimensão da string: " << "Hermenegilda"s.size() << endl;

    cout << "Primeiro caractere da string          : " << nome[0] << endl;
    cout << "Primeiro caractere da string (com at) : " << nome.at(0) << endl;
    cout << "Segundo caractere da string           : " << nome[1] << endl;
    cout << "Segundo caractere da string (com at)  : " << nome.at(1) << endl;

    // cout << "Caractere inexistente (70) da string          : " << nome[70] << endl;
    // cout << "Caractere inexistente (70) da string (com at) : " << nome.at(70) << endl;

    cout << "Último caractere da string            : " << nome[nome.length() - 1] << endl;
    auto pos_ultimo = nome.length() - 1;
    cout << "Último caractere da string (c/var)    : " << nome[pos_ultimo] << endl;
    cout << "Último caractere da string (c/back)   : " << nome.back() << endl;

    cout << "---------------------------------" << endl;
    cout << "OPERADORES (==, >, >=, etc.)" << endl;
    cout << "---------------------------------" << endl;

    string nome4 = "Armando";
    cout << "Os nomes são iguais? ";

    if (nome == nome4) {
        cout << " iguais" << endl;
    }
    else {
        cout << " diferentes" << endl;
    }

    cout << "O maior nome é: ";
    if (nome >= nome4) {     // "Alberto" >= "Albertina" ? true
        cout << nome;
    }
    else {
        cout << nome4;
    }
    cout << endl;

    cout << "---------------------------------" << endl;
    cout << "OPERADORES (+, +=)" << endl;
    cout << "---------------------------------" << endl;

    string apelido = "ANTUNES";
    string nome_completo = nome + " " + nome2 + " " + apelido;
    cout << "Nome completo: " << nome_completo << endl;

    string apelido2 = "ALMEIDA";
    nome_completo += " ";
    nome_completo += apelido2;  // parecido mas mais eficiente do que
                                // nome_completo = nome_completo + apelido2
    cout << "Nome mesmo completo: " << nome_completo << endl;

    cout << "---------------------------------" << endl;
    cout << "CONVERTER int,double,etc p/ std::string e vice-versa" << endl;
    cout << "---------------------------------" << endl;

    stringstream mensagem; 
    int quantidade = 30;
    mensagem << "Quantidade de livros: " << quantidade;
    cout << mensagem.str() << endl;

    stringstream produtos("Leite 20");
    string nome_prod;
    produtos >> nome_prod >> quantidade;
    cout << "Nome do produto       : " << nome_prod << endl;
    cout << "Quantidade do produto : " << quantidade << endl;

    cout << "---------------------------------" << endl;
    cout << "PESQUISAS E SUBSTRINGS" << endl;
    cout << "---------------------------------" << endl;
    string str5 = "ARMANDO";

    cout << "VAMOS PESQUISAR NA STRING " << str5 << endl;

    cout << "str5.find('A') => " << str5.find('A') << endl;
    cout << "str5.find('N') => " << str5.find('N') << endl;
    cout << "str5.find('Z') => " << str5.find('Z') << endl;

    int pos = str5.find('M');
    if (pos != string::npos) {   // npos -> No POSition
        cout << "Caractere 'M' encontrado na posição " << pos << endl;
    }
    else {
        cout << "Caractere não encontrado" << endl;
    }

    pos = str5.find("MA");
    if (pos != string::npos) {
        cout << "Encontrada 'MA' na posição " << pos << endl;
    }
    else {
        cout << "Não encontrada" << endl;
    }

    // localiza o 2o 'A'
    pos = str5.find('A', str5.find('A') + 1);
    if (pos != string::npos) {
        cout << "Segundo 'A' encontrado na posição " << pos << endl;
    }
    else {
        cout << "Não encontrado" << endl;
    }

    string str7 = "BOA TARDE";
    string str8 = str7.substr(4, 5);    // extrai 5 caracteres a partir da posição 4
    cout << "Original  : " << str7 << endl;
    cout << "Substring : " << str8 << endl;

    string str9 = str7.substr(4, str7.size());  // extrai 8 caracteres (dimensão de BOA TARDE) 
    cout << "Original  : " << str7 << endl;     // a partir da posição 4
    cout << "Substring : " << str9 << endl;

    cout << "---------------------------------" << endl;
    cout << "MODIFICAÇÃO" << endl;
    cout << "---------------------------------" << endl;

    str7.erase(4);
    cout << "Original  : " << str7 << endl;

    string str10 = "ABCDEFGHI";
    cout << "Antes     : " << str10 << endl;
    str10.erase(3, 3);
    cout << "Depois    : " << str10 << endl;

    // Também poderíamos fazer
    str10 = "ABCDEFGHI";
    cout << "Antes     : " << str10 << endl;    
    cout << "Depois    : " << str10.erase(3, 3) << endl;

    cout << R"(Vamos inserir "DEF" novamente)" << endl;
    str10.insert(3, "DEF");
    cout << "Agora     : " << str10 << endl;

    cout << R"(Vamos substituir "DEF" por "-456-")" << endl;
    str10.replace(3, "DEF"s.length(), "-456-");  // mesmo que str10.replace(3, 3, "-456-");
    cout << "Agora     : " << str10 << endl;

    str10.clear();    // ou str10.erase(0);

    cout << "---------------------------------" << endl;
    cout << "RAW STRINGS (ou strings literais)" << endl;
    cout << "---------------------------------" << endl;

    cout << "TEXTO 1" << endl;
    string texto1 = 
        "Utilizamos os tipos const char[] e std:string e para\n"
        "lidar com strings em C e C++.\n"
        "Introduzimos uma nova linha com \\n e um tab com \\t.\n"
        "Outra linha de texto possivelmente referido novamente\n"
        "os caracteres \\n e \\t, e, quem sabe, o \\r.";
    cout << texto1 << endl << endl;

    cout << "TEXTO 2" << endl;
    string texto2 = 
R"(Utilizamos os tipos const char[] e std:string e para
lidar com strings em C e C++.
Introduzimos uma nova linha com \n e um tab com \t.
Outra linha de texto possivelmente referido novamente
os caracteres \n e \t, e, quem sabe, o \r.)";
    cout << texto2 << endl << endl;

}


// char ch = 'A';  // certo: um e um só caractere
// char ch = '';   // errado: zero caracteres
// char ch = "A";  // errado: mais do que um caractere

// "a" < "b"      // true   ('a' -> 97 | 'b' -> 98)
// "a" < "A"      // false  ('a' -> 97 | 'A' -> 65)
// "ab" < "ac"    // true   ('c' -> 99)
// "abc" < "ac"   // true   ('c' -> 99)
// "acc" < "ac"   // false  (como "ac" é prefixo de "acc" , então o tamanho é que decide)
// "a " < "ab"    // true (' ' -> 32 | 'b'  -> 98)
// "a1" < "ab"    // true ('1' -> 49 | 'b'  -> 98)

