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

    int max;
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    }
    else if (num2 >= num3) {
        max = num2;
    }
    else {
        max = num3;
    }

    int min;
    if (num1 <= num2 && num1 <= num3) {
        min = num1;
    }
    else if (num2 <= num3) {
        min = num2;
    }
    else {
        min = num3;
    }

    cout << "Mínimo é " << min << endl;
    cout << "Máximo é " << max << endl;
}

