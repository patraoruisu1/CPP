#include <iostream>

using namespace std;


int main() {
    cout << "Introduza três números: ";
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "Máximo é " << num1 << endl;
    }
    else if (num2 >= num3) {
        cout << "Máximo é " << num2 << endl;
    }
    else {
        cout << "Máximo é " << num3 << endl;
    }
}