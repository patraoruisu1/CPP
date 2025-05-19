/*
Utilizador introduz texto. Programa exibe texto com as seguintes
transformações:
    a -> e
    e -> i
    i -> o
    o -> u
    u -> a
    A -> E
    etc.
    espaço -> #
    # -> espaço

Exemplo:
    Introduza texto:
    bom dia
    bum#doe
    ADEUS
    EDIAS
    CTRL+D/CTRL+Z+ENTER

Exercícios:
1. Agora o utilizador vai introduzindo múltiplas linhas de texto
   e essas linhas de texto vão sendo encriptadas e exbibidas.
   O programa termina quando o utilizador introduzir CTRL+D/CTR+Z ENTER
   (ie, quando fechar a entrada padrão).
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Introduza texto:\n";

    string linha;
    while (getline(cin, linha)) {
        for (int i = 0; i < linha.length(); i += 1) {
            char ch = linha[i];

            if (ch == 'a') {
                cout << 'e';
            }
            else if (ch == 'A') {
                cout << 'E';
            }
            else if (ch == 'e') {
                cout << 'i';
            }
            else if (ch == 'E') {
                cout << 'I';
            }
            else if (ch == 'i') {
                cout << 'o';
            }
            else if (ch == 'I') {
                cout << 'O';
            }
            else if (ch == 'o') {
                cout << 'u';
            }
            else if (ch == 'O') {
                cout << 'U';
            }
            else if (ch == 'u') {
                cout << 'a';
            }
            else if (ch == 'U') {
                cout << 'A';
            }
            else if (ch == ' ') {
                cout << '#';
            }
            else if (ch == '#') {
                cout << ' ';
            }
            else {
                cout << ch;
            }
        }
        cout << endl;
    }
}

/*
    int i = 0;
    while (i < linha.length()) {
        // FAZ QQ COISA COM linha E i
        i += 1;
    }

    for (int i = 0; i < linha.length(); i += 1) {
        // FAZ QQ COISA COM linha E i
    }

    //////////

    int i = 1;
    while (i <= 1000) {
        cout << i << endl;
        i += 1;
    }

    for (int i = 1; i <= 1000; i += 2) {
        cout << i << endl;
    }


*/

