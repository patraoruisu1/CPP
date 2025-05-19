/*
Introduza três números : 15 7 4
Máximo é 15

Introduza três números : 45 77 2
Máximo é 77

Introduza três números : 45 77 101
Máximo é 101
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Introduza três números: ";
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "Máximo é " << num1 << endl;
    }
    else {
        if (num2 >= num3) {
            cout << "Máximo é " << num2 << endl;
        }
        else {
            cout << "Máximo é " << num3 << endl;
        }
    }
}

// x = 10
// if (x > 0 && x != 10) {
//     ...
// }