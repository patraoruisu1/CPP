#include <iostream>
#include <string>

using namespace std;

#include <boost/multiprecision/cpp_dec_float.hpp>

using money = boost::multiprecision::cpp_dec_float_50;

// PROGRAMA INTERACTIVO COM MENU DE OPÇÕES
//
// while (OPCAO != TERMINAR/FIM DO PROGRAMA) {
//      1. Exibir opções do menu
//      2. Ler opção introduzida pelo utilizador
//      3. (Analisar e) Executar a opção introduzida
// }

int main() {
    cout.precision(2);
    cout.setf(ios_base::fixed);

    money eur_usd("1.13");

    while (true) {
        // 1. Exibir opções do menu
        cout << "Escolha o sentido da conversão\n";
        cout << "1. Euros -> Dólares\n";
        cout << "2. Dólares -> Euros\n";
        cout << "T. Terminar\n";
        
        // 2. Ler opção introduzida pelo utilizador
        string opcao;
        cout << "> ";
        cin >> opcao;

        // 3. (Analisar e) Executar a opção introduzida
        if (opcao == "1") {
            cout << "Montante em euros: ";
            money euros;
            cin >> euros;
            cout << "Dólares -> " << euros * eur_usd << "\n";
        }
        else if (opcao == "2") {
            cout << "Montante em dólares: ";
            money dolares;
            cin >> dolares;
            cout << "Euros -> " << dolares / eur_usd << "\n";
        }
        else if (opcao == "T" || opcao == "t") {
            cout << "O programa vai terminar...\n";
            break;
        }
        else {
            cout << "ATENÇÃO: Opção <" << opcao << "> inválida!\n";
        }
    }
}
