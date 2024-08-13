#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX_NOME = 50;
    char nome[MAX_NOME];
    char menorNome[MAX_NOME];

    menorNome[0] = '\0';

    cout << "Digite os nomes (pressione Enter sem digitar nada para encerrar):" << endl;

    while (true) {
        cout << "Nome: ";
        cin.getline(nome, MAX_NOME);

        if (nome[0] == '\0') {
            break;
        }

        if (strlen(menorNome) == 0 || strcmp(nome, menorNome) < 0) {
            strcpy(menorNome, nome);
        }
    }

    if (strlen(menorNome) > 0) {
        cout << "O nome lexicograficamente menor e: " << menorNome << endl;
    } else {
        cout << "Nenhum nome foi digitado." << endl;
    }

    return 0;
}
