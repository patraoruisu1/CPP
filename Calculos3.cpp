/*
Exercício:
    Pedir um número (double) ao utilizador e exibir 
    1. Dobro
    2. Triplo
    3. Quadrado
    4. Cubo
    5. Resultado da expressão "2.5 * X + 10" onde X é o número introduzido.

    $ prog
    Introduza um número: 3
    Dobro        : 6
    Triplo       : 9
    Quadrado     : 9
    Cubo         : 27
    2.5 * x + 10 : 17.5

v3 : testar c/ 10.3 + 20 casas decimais e incorporar boost::decimal
*/

#include <iostream>
#include <cmath>

using namespace std;

#include <boost/multiprecision/cpp_dec_float.hpp>

using decimal = boost::multiprecision::cpp_dec_float_50;

int main() {
    cout << "Introduza um número: ";
    decimal num;
    cin >> num;

    cout.precision(2);            // precisão de dois algarismos
    cout.setf(ios_base::fixed);   // à direita da vírgula

    cout << "Dobro        : " << 2 * num << endl;
    cout << "Triplo       : " << 3 * num << endl;
    cout << "Quadrado     : " << pow(num, 2) << endl;
    cout << "Cubo         : " << pow(num, 3) << endl;
    cout << "2.5 * x + 10 : " << 2.5 * num  + 10 << endl;
}
