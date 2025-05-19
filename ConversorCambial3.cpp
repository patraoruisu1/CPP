#include <iostream>
#include <string>

using namespace std;

#include <boost/multiprecision/cpp_dec_float.hpp>

using money = boost::multiprecision::cpp_dec_float_50;

/*
TIPO_DADOS NOME_DA_FUNCAO(TIPO_DADOS PARAM1, TIPO_DADOS_PARAM2, ...) {
    INST1;
    INST2;
    ...
}

int soma(int a, int b) {
    int c = a + b;
    return c;
}

int x = soma(2, 3);

int p = 10, r = 20;
int z = soma(p, r);


void funcao_xpto() {
    if (condicao qualquer) {
        return;
    }
    ...
}
*/

bool confirma(string pergunta) {
    while (true) {
        cout << pergunta;
        string opcao_repetir;
        cin >> opcao_repetir;
        if (   opcao_repetir == "S"
            || opcao_repetir == "s"
            || opcao_repetir == "SIM"
            | opcao_repetir == "sim") 
        {
            return true;
        }
        else if (   opcao_repetir == "N" 
                 || opcao_repetir == "n"
                 || opcao_repetir == "NÃO"
                 || opcao_repetir == "NAO"
                 || opcao_repetir == "não"
                 || opcao_repetir == "nao"
        ) {
            return false;
        }
        else {
            cout << "ATENÇÃO: Responda apenas (S)im ou (N)ão\n";
        }
    }
}

int main() {
    cout.precision(2);
    cout.setf(ios_base::fixed);

    money eur_usd("1.13");

    while (true) {
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
        if (!confirma("Deseja efectuar mais conversões (S/N) ? ")) {
            cout << "O programa vai terminar...\n";
            break;
        }
    }
}
