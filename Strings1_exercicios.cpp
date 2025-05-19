#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1) Indique duas formas de construir/declarar/definir uma string?
    //     R: string str1 = "ABC";
    //     string str2("ABC");
    //     string str3(str2);

    // 2) Indique como definir uma string com dez símbolos '#'
    //     R: string str(10, '#')

    string xpto("ABC ABCDEF");
    cout << "___ XPTO => \"" << xpto << "\" ____" << endl;

    // 3.1) Obter o primeiro caractere
    // R: xpto[0]
    cout << "3.1) " << xpto[0] << endl;

    // 3.2) Obter o último caractere
    // R: xpto[xpto.length() - 1] OU xpto.back()
    cout << "3.2) " << xpto[xpto.length() - 1] << endl;

    // 3.3) Obter o penúltimo caractere
    // R: xpto[xpto.length() - 2]
    cout << "3.3) " << xpto[xpto.length() - 2] << endl;

    // 3.4) Obter a posição do espaço 
    // R: xpto.find(' ')
    cout << "3.4) " << xpto.find(' ') << endl;

    // 3.5) Obter a substring à direita do espaço
    // R: xpto.substr(xpto.find(' ') + 1);
    cout << "3.5) " << xpto.substr(xpto.find(' ') + 1) << endl;

    // 3.6) Obter uma substring com os caracteres compreendidos entre
    //     as posições 2 e 5.
    // R: xpto.substr(2, 4)
    cout << "3.6) " << xpto.substr(2, 4) << endl;

    // 3.7) Obter a posição do segundo 'A'
    // R: xpto.find('A', xpto.find('A') + 1)
    cout << "3.7) " << xpto.find('A', xpto.find('A') + 1) << endl;

    // 3.8) Confirmar que a substring "AXY" não existe na string XPTO
    //     R: xpto.find("AXY") == string::npos
    cout << "3.8) " << (xpto.find("AXY") == string::npos) << endl;

    // 3.9) Apagar a segunda ocorrência de "ABC"
    //     R:
    //     auto pos_abc = xpto.find("ABC", xpto.find("ABC") + 1);
    //     xpto.erase(pos_abc, 3);
    auto pos_abc = xpto.find("ABC", xpto.find("ABC") + 1);
    cout << "3.9) " << xpto.erase(pos_abc, 3) << endl;

    // 3.10) Substituir a substring "DEF" por "XYZ"
    //     R: xpto.replace(xpto.find("DEF"), 3, "XYZ");
    cout << "3.10) " << xpto.replace(xpto.find("DEF"), 3, "XYZ") << endl;
}