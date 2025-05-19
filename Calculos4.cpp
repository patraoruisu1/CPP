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

v1 : versão inicial com cout e double e .setf/ios_base::fixed
v2 : printf, pow
v3 : testar c/ 10.3 + 20 casas decimais e incorporar boost::decimal

*/


#include <iostream>
#include <locale>

#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace std;
using decimal = boost::multiprecision::cpp_dec_float_50;

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "pt_PT.UTF-8");
    decimal num(argv[1]);

    cout.precision(20);              // dois algarismos
    cout.setf(ios_base::fixed);     // à direita da vírgula

    cout << "Dobro        : " << 2 * num << endl;
    cout << "Triplo       : " << 3 * num << endl;
    cout << "Quadrado     : " << num * num << endl;
    cout << "Cubo         : " << num * num * num << endl;
    cout << "2.5 * x + 10 : " << 2.5 * num + 10 << endl;
}

/*
    cout << (20 == 20) << endl;
    cout << (20 == 21) << endl;

    cout << 1.1 + 2.2 << endl;
    cout << (1.1 + 2.2 == 3.3) << endl;
*/