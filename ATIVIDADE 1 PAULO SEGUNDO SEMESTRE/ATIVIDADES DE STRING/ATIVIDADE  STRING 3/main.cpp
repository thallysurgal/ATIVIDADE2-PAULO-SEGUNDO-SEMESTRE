#include <iostream>
using namespace std;

int main() {
    int tamanhoMaximo = 100;

    char texto[tamanhoMaximo];

    cout << "Digite uma string: ";
    cin.getline(texto, tamanhoMaximo);

    int quantidadeAlteracoes = 0;
    for (int indice = 0; texto[indice] != '\0'; ++indice) {
        if (texto[indice] == 'a') {
            texto[indice] = 'b';
            ++quantidadeAlteracoes;
        }
    }

    cout << "Número de caracteres alterados: " << quantidadeAlteracoes << endl;

    cout << "Texto modificado: " << texto << endl;

    return 0;
}
