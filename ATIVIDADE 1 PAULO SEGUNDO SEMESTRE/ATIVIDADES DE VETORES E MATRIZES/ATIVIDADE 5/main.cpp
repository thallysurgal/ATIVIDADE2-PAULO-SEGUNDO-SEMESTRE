#include <iostream>
using namespace std;

int main() {
    int tamanhoVetor = 10;
    int V1[tamanhoVetor];
    int V2[tamanhoVetor];

    cout << "Digite " << tamanhoVetor << " elementos inteiros para o vetor V1:" << endl;
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> V1[i];
    }

    for (int i = 0; i < tamanhoVetor; ++i) {
        if (i % 2 == 0) {
            V2[i] = V1[i] * 5;
        } else {
            V2[i] = V1[i] + 5;
        }
    }

    cout << endl << "Conteúdo do vetor V1:" << endl;
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "V1[" << i << "] = " << V1[i] << endl;
    }

    cout << endl << "Conteúdo do vetor V2:" << endl;
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "V2[" << i << "] = " << V2[i] << endl;
    }

    return 0;
}
