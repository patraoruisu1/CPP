/*
A revista MyHouse especializada na venda de artigos para casa, indica 
as medidas em polegadas. O senhor Y, antes de fazer a sua encomenda 
pretende saber as correspondentes medidas em milímetros. Crie um 
algoritmo para o efeito e teste-o sabendo que 12.3 polegadas 
correspondem a 312.42 mm (1in = 25.4mm).
 */

#include <iostream>

using namespace std;

int main() {
    const double POL_EM_MM = 25.4;
    cout << "Indique as medidas em polegadas (in): ";
    double pol;
    cin >> pol;
    cout << "Em milimetros => " << pol * POL_EM_MM << endl;
}