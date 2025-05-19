#include <iostream>

using namespace std;

int main() {
    cout << "Indique o valor de X: ";
    int x;
    cin >> x;    // 10

    cout << "Indique o valor de Y: ";
    int y;
    cin >> y;    // 20

    swap(x, y);

    cout << "Novo valor de X: " << x << endl;  // 20
    cout << "Novo valor de Y: " << y << endl;  // 10
}