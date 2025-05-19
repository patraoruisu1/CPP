#include <iostream>

using namespace std;

int main() {
    const double PI = 3.141592653589793;            // final double PI = 3.14...;
    cout << "Indique o raio da circunferência: ";
    double raio;
    cin >> raio;

    cout << "Área      : " << PI * raio * raio << endl;
    cout << "Perimetro : " << 2 * PI * raio << endl;
}