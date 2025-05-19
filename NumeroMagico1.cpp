#include <iostream>

using namespace std;

int main() {
    cout << "Adivinhe o número mágico: ";
    int palpite;
    cin >> palpite;
    if (palpite == 19) {
        cout << "Parabéns, adivinhou!" << endl;
    }
    else {
        cout << "Falhou!" << endl;
    }
}
