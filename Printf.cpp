#include <string>
#include <cstdio>

using namespace std;

int main() {
    // PRINTF através de exemplos:
    //
    // printf(STRING_de_FORMATAÇÃO, EXPR1, EXPR2, ...)
    //
    // STRING_de_FORMATAÇÃO: Texto com marcadores/directivas que serão
    // substituídos pelos resultados de EXPR1, EXPR2, ...
    // Deve existir um marcador por expressão (e vice-versa).

    // 1.
    printf("Alberto");
    printf("Armando\n");

    // 2.
    printf("Alberto\n");
    printf("Armando\n");

    // 3.
    printf("Vamos mostrar barra N no ecrã: \\n.\nOutra linha\n");

    printf("\n");

    // 4.
    // Valor1 -> 595 (17 * 35)  Valor2 -> 225 (15 * 15)
    printf("Valor1 -> %d Valor2 -> %d\n", 17 * 35, 15 * 15);
    printf("Valor1 -> %i Valor2 -> %i\n", 17 * 35, 15 * 15);

    printf("\n");

    // 5.
    int x = 17 * 35, y = 15 * 15;
    printf("Valor1 -> |%8d| Valor2 -> |%8d|\n", x, y);

    x *= 10;
    y *= 10;
    printf("Valor1 -> |%8d| Valor2 -> |%8d|\n", x, y);

    x *= 10;
    y *= 10;
    printf("Valor1 -> |%8d| Valor2 -> |%8d|\n", x, y);
    printf("Valor1 -> |%08d| Valor2 -> |%08d|\n", x, y);
    printf("Valor1 -> |%-8d| Valor2 -> |%-8d|\n", x, y);

    printf("\n");

    // 6.
    double a = 7.23, b = 89.449;
    printf("Valor1: %f Valor2: %f\n", a, b);
    printf("Valor1: %.3f Valor2: %.3f\n", a, b);
    printf("Valor1: %.2f Valor2: %.2f\n", a, b);
    printf("Valor1: %7.2f Valor2: %7.2f\n", a, b);
    printf("Valor1: |%7.2f| Valor2: |%7.2f|\n", a, b);
    printf("Valor1: |%-7.2f| Valor2: |%-7.2f|\n", a, b);
    printf("Valor1: |%07.2f| Valor2: |%07.2f|\n", a, b);

    printf("\n");

    // 7.
    string txt = "ABCDEF";
    printf("Texto => |%s|\n", txt.c_str());
    printf("Texto => |%10s|\n", txt.c_str());
    printf("Texto => |%-10s|\n", txt.c_str());

    printf("\n");
}


/*
Python: mecanismos similar ao printf
    1. str.format
    2. f-strings 
    3. Operador % (não usar este...)
 */

/*


*/