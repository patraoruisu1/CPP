#include <iostream>

using namespace std;

int main() {
    int x = ??;
    printf("ANTES\n");
    if (x > 0) {
        printf("X positivo\n");
    }
    printf("DEPOIS\n");
    /*
    x = 10
        ANTES
        x positivo
        DEPOIS
    -------------
    x = -10
        ANTES
        DEPOIS
    */

    ////////////////////////////////////////////////////////////////////////////

    int x = ??;
    printf("ANTES\n");
    if (x > 0) {
        printf("X positivo\n");
    }
    else {
        printf("X negativo ou zero\n");
    }
    printf("DEPOIS\n");

    /*
    x = 10
        ANTES
        X positivo
        DEPOIS
    x = -10
        ANTES
        X negativo ou zero
        DEPOIS
    */

    ////////////////////////////////////////////////////////////////////////////

    int x = ??;
    printf("ANTES\n");
    if (x > 5) {
        printf("X maior que 5\n");
    }
    else if (x >= -5) {
        printf("X entre -5 e 5\n");
    }
    else {
        printf("X menor que -5\n");
    }
    printf("DEPOIS\n");

    /*
    x = 10
        ANTES
        X maior que 5
        DEPOIS
    x = 0
        ANTES
        X entre -5 e 5
        DEPOIS
    x = -10
        ANTES
        X menor que -5
        DEPOIS
    */
}