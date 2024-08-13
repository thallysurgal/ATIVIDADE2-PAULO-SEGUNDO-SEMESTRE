#include <iostream>
#include <limits>
using namespace std;

int main() {
    int tamanhoMaximo = 10;
    int valores[tamanhoMaximo];
    int numeroDeElementos;
    cout << "Informe o numero de elementos (ate " << tamanhoMaximo << "): ";
    cin >> numeroDeElementos;

    if (numeroDeElementos <= 0 || numeroDeElementos > tamanhoMaximo) {
        cout << "Numero de elementos invalido." << endl;
        return 1;
    }

    cout << "Digite " << numeroDeElementos << " valores inteiros positivos:" << endl;
    for (int i = 0; i < numeroDeElementos; ++i) {
        do {
            cout << "Valor " << (i + 1) << ": ";
            cin >> valores[i];
            if (valores[i] <= 0) {
                cout << "O valor deve ser um inteiro positivo. Tente novamente." << endl;
            }
        } while (valores[i] <= 0);
    }

    int maior1 = numeric_limits<int>::min();
    int maior2 = numeric_limits<int>::min();
    for (int i = 0; i < numeroDeElementos; ++i) {
        if (valores[i] > maior1) {
            maior2 = maior1;
            maior1 = valores[i];
        } else if (valores[i] > maior2 && valores[i] < maior1) {
            maior2 = valores[i];
        }
    }

    int somaParesPosicoesImpares = 0;
    for (int i = 1; i < numeroDeElementos; i += 2) {
        if (valores[i] % 2 == 0) {
            somaParesPosicoesImpares += valores[i];
        }
    }

    cout << "Os 2 maiores elementos sao: " << maior1;
    if (maior2 > numeric_limits<int>::min()) {
        cout << " e " << maior2 << endl;
    } else {
        cout << " (nao ha dois elementos distintos)" << endl;
    }

    cout << "A soma dos elementos pares em posicoes impares e: " << somaParesPosicoesImpares << endl;

    return 0;
}
