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

    cout << "Máximo é " << max << endl;
    cout << "Mínimo é " << min << endl;
}