#include <iostream>
#include <iomanip> // Para definir a precis�o das sa�das em reais
using namespace std;

int main() {
    int numeroDeProdutos = 5;
    int quantidadeProdutos[numeroDeProdutos];
    double valorUnitarioProdutos[numeroDeProdutos];

    cout << "Digite a quantidade e o valor unit�rio de cada produto:" << endl;
    for (int i = 0; i < numeroDeProdutos; ++i) {
        cout << "Produto " << (i + 1) << endl;
        cout << "Quantidade: ";
        cin >> quantidadeProdutos[i];
        cout << "Valor unit�rio: ";
        cin >> valorUnitarioProdutos[i];
    }

    double valorTotalCompra = 0.0;
    cout << fixed << setprecision(2);
    cout << endl << "Resumo da compra:" << endl;

    for (int i = 0; i < numeroDeProdutos; ++i) {
        double valorTotalProduto = quantidadeProdutos[i] * valorUnitarioProdutos[i];
        valorTotalCompra += valorTotalProduto;

        cout << "Produto " << (i + 1) << ": ";
        cout << "Quantidade = " << quantidadeProdutos[i] << ", ";
        cout << "Valor unit�rio = R$ " << valorUnitarioProdutos[i] << ", ";
        cout << "Valor total = R$ " << valorTotalProduto << endl;
    }

    cout << "Valor total da compra: R$ " << valorTotalCompra << endl;

    return 0;
}
