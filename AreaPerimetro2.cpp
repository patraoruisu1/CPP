#include <iostream>
#define _USE_MATH_DEFINES   // necessário em alguns compiladores para termos o M_PI
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    // const double PI = 3.141592653589793;
    cout << "Indique o raio da circunferência: ";
    double raio;
    cin >> raio;

    cout.precision(2);
    cout.setf(ios_base::fixed);
    cout << "Área      : " << M_PI * pow(raio, 2) << endl;
    cout << "Perimetro : " << 2 * M_PI * raio << endl;

    printf("Área      : %.2f\n", M_PI * pow(raio, 2));
    printf("Perimetro : %.2f\n", 2 * M_PI * raio);
}
