#include <iostream>
#include <string>

using namespace std;

#include <boost/multiprecision/cpp_dec_float.hpp>

using money = boost::multiprecision::cpp_dec_float_50;

int main() {
    cout.precision(2);
    cout.setf(ios_base::fixed);

    money eur_usd("1.13");

    bool mais_conversoes = true;
    while (mais_conversoes) {
        // 1. Exibir opções do menu
        cout << "Escolha o sentido da conversão\n";
        cout << "1. Euros -> Dólares\n";
        cout << "2. Dólares -> Euros\n";
        
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
        else {
            cout << "ATENÇÃO: Opção <" << opcao << "> inválida!\n";
        }
   
        // 4. Continuar ou terminar?
        while (true) {
            cout << "Deseja efectuar mais conversões (S/N)? ";
            string opcao_repetir;
            cin >> opcao_repetir;
            if (opcao_repetir == "S") {
                break ;
            }
            else if (opcao_repetir == "N") {
                cout << "O programa vai terminar...\n";
                mais_conversoes = false;
                break;
            }
            else {
                cout << "ATENÇÃO: Responda apenas (S)im ou (N)ão\n";
            }
        }
    }
}
