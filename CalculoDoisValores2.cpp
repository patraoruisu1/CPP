/*
- Exercício 1: programa (CalculosDoisValores1.cpp) que pede dois números ao 
  utilizador (double) ao utilizador e que exibe:
    . dobro da soma dos dois numeros
    . triplo da soma do quadrado de cada um deles
    . soma dos cubos do resultado de 2.5 x A, onde A é cada um dos números
      pedidos ao utilizador

     NOTA1: Utilizar cout e << 
     NOTA2: Todos os resultados devem ser exibidos com 3 casas decimais

EXEMPLO:
    Introduza numero 1: 3 
    Introduza numero 2: 4

    Dobro da soma                            : 14.000            // 2*(3 + 4)
    Triplo da soma dos quadrados             : 75.000            // 3*(3^2 + 4^2)
    Soma dos cubos com multiplicação por 2.5 : 1421.875          //  (2.5*3)^3 + (2.5*4)^3
*/

#include <iostream>

using namespace std;

#include <boost/multiprecision/cpp_dec_float.hpp>

using decimal = boost::multiprecision::cpp_dec_float_50;

int main() {
    cout << "Introduza número 1: ";
    decimal num1;
    cin >> num1;

    cout << "Introduza número 2: ";
    decimal num2;
    cin >> num2;

    cout.precision(3);
    cout.setf(ios_base::fixed);

    cout << "Dobro da soma                            : "
         << (2 * (num1 + num2)) << endl;
    cout << "Triplo da soma dos quadrados             : "
         << 3 * (pow(num1, 2) + pow(num2, 2)) << endl;
    cout << "Soma dos cubos com multiplicação por 2.5 : "
         << pow(2.5 * num1, 3) + pow(2.5 * num2, 3) << endl;
}
