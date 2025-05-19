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

v2 : printf, pow
*/

#include <iostream>
#include <cstdio>           // Em C: #include <stdio.h>
#include <cmath>            // Em C: #include <math.h>

using namespace std;

int main() {
    cout << "Introduza um número: ";
    double num;
    cin >> num;

    // printf(STRING_DE_FORMATAÇÃO, ARG1, ARG2, ...)
    //
    // printf("Um valor %d Outro valor %d\nFIM", 23 + 1, 10 * 2);
    //      => Um valor 24 Outro valor 20
    //         FIM
    //
    // printf("Um valor %f Outro valor %f\nFIM", 3, 7.525);
    //      => Um valor 3.000000 Outro valor 7.525000
    //         FIM
    //
    // printf("Um valor %.2f Outro valor %.2f\nFIM", 3, 7.525);
    //      => Um valor 3.00 Outro valor 7.53
    //         FIM

    printf("Dobro        : %.2f\n", 2 * num);
    printf("Triplo       : %.2f\n", 3 * num);
    printf("Quadrado     : %.2f\n", pow(num, 2));
    printf("Cubo         : %.2f\n", pow(num, 3));
    printf("2.5 * x + 10 : %.2f\n", 2.5 * num  + 10);
}
