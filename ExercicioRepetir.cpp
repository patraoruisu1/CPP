#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Introduza texto: ";
    string texto;
    getline(cin, texto);  
    for (int i = 0; i < texto.length(); i++) {
        char ch = texto[i];
        
        if (ch == 'a') { cout << 'e'; }
        else if (ch == 'e') { cout << 'i'; }
        else if (ch == 'i') { cout << 'o'; }
        else if (ch == 'o') { cout << 'u'; }
        else if (ch == 'u') { cout << 'a'; }
        
        else if (ch == 'A') { cout << 'E'; }
        else if (ch == 'E') { cout << 'I'; }
        else if (ch == 'I') { cout << 'O'; }
        else if (ch == 'O') { cout << 'U'; }
        else if (ch == 'U') { cout << 'A'; }
        
        else if (ch == ' ') { cout << '#'; }
        else if (ch == '#') { cout << ' '; }
        
        else { cout << ch; }
    }
    
    cout << endl;
    return 0;
}