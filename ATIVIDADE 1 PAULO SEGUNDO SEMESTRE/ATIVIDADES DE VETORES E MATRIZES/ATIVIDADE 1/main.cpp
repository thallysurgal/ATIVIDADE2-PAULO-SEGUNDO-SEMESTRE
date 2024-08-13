#include <iostream>
using namespace std;

int main() {
    int tamanhoVetor = 5;
    int vetor[tamanhoVetor];

    cout << "Digite " << tamanhoVetor << " elementos inteiros:" << endl;
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> vetor[i];
    }
    int somaImpares = 0;
    for (int i = 0; i < tamanhoVetor; ++i) {
        if (vetor[i] % 2 != 0) {
            somaImpares += vetor[i];
        }
    }
    cout << "A soma de todos os elementos ímpares é: " << somaImpares << endl;

    return 0;
}
