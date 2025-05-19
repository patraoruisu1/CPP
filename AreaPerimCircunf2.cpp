#include <iostream>

#define _USE_MATH_DEFINES       // poderá ser necessário em alguns compiladores 
                                // para termos o M_PI
#include <cmath>                // pow, M_PI

using namespace std;

int main() {
    cout << "Indique o raio da circunferência: ";
    double raio;
    cin >> raio;

    cout.precision(2);
    cout.setf(ios_base::fixed);

    cout << "Área      : " << M_PI * pow(raio, 2) << endl;
    cout << "Perimetro : " << 2 * M_PI * raio << endl;
}