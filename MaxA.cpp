/*
Introduza número 1: 15
Introduza número 2: 7
Máximo é 15

Introduza número 1: 45
Introduza número 2: 77
Máximo é 77
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Introduza número 1: ";
    int num1;
    cin >> num1;

    cout << "Introduza número 2: ";
    int num2;
    cin >> num2;

    if (num1 >= num2) {
        cout << "Máximo é " << num1 << endl;
    }
    else {
        cout << "Máximo é " << num2 << endl;
    }
}