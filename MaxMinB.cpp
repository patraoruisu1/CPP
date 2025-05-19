#include <iostream>

using namespace std;


int main() {
    cout << "Introduza três números: ";
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int max;
    string qual_max;
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
        qual_max = "num1";
    }
    else if (num2 >= num3) {
        max = num2;
        qual_max = "num2";
    }
    else {
        max = num3;
        qual_max = "num3";
    }

    int min;
    string qual_min;
    if (num1 <= num2 && num1 <= num3) {
        min = num1;
        qual_min = "num1";
    }
    else if (num2 <= num3) {
        min = num2;
        qual_min = "num2";
    }
    else {
        min = num3;
        qual_min = "num3";
    }

    cout << "Máximo é " << max << " (" << qual_max << ")" << endl;
    cout << "Mínimo é " << min << " (" << qual_min << ")" << endl;
}