#include <iostream>
#include <cmath>
#include <random>

using namespace std;

int next_int(int a, int b) {
    std::mt19937 randGen(std::random_device{}());
    std::uniform_int_distribution<> dis(a, b);
    return dis(randGen);
}


int main() {
    auto num_magico = next_int(1, 20);
    
    while (true) {
        cout << "Adivinhe o número mágico: ";
        
        int palpite;
        cin >> palpite;
        
        auto distancia = abs(num_magico - palpite);
        if (distancia == 0) {
            cout << "Parabéns, adivinhou!" << endl;
            break;
        }
        else if (distancia <= 1) {
            cout << "Muito Próximo!" << endl;
        }
        else if (distancia <= 2) {
            cout << "Próximo!" << endl;
        }
        else {
            cout << "Falhou!" << endl;
        }
    }
}

/*
int main2() {
    auto num_magico = 19;
    auto palpite = 0;
    while (palpite != num_magico) {
        cout << "Adivinhe o número mágico: ";
        int palpite;
        cin >> palpite;
        if (palpite == num_magico) {
            cout << "Parabéns, adivinhou!" << endl;
        }
        else {
            cout << "Falhou!" << endl;
        }
    }
}
*/

/*
palpite € [num_magico - 2, num_magico + 2]
palpite >= num_magico - 2 && palpite <= num_magico + 2

distancia = num_magico - palpite

num_magico = 19
palpite = 17
distancia = abs(19 - 17) = 2

num_magico = 19
palpite = 21
distancia = abs(19 - 21) = 2
*/