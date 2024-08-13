#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int tamanhoMaximo = 100;
    char string1[tamanhoMaximo];
    char string2[tamanhoMaximo];

    cout << "Digite a primeira string: ";
    cin.getline(string1, tamanhoMaximo);

    cout << "Digite a segunda string: ";
    cin.getline(string2, tamanhoMaximo);

    cout << "Primeira string: " << string1 << endl;
    cout << "Segunda string: " << string2 << endl;

    int comprimentoString1 = strlen(string1);
    if (comprimentoString1 >= 2) {
        cout << "A segunda letra da primeira string é: " << string1[1] << endl;
    } else {
        cout << "A primeira string tem menos de duas letras." << endl;
    }

    int comprimentoString2 = strlen(string2);
    if (comprimentoString2 >= 2) {
        cout << "A penúltima letra da segunda string é: " << string2[comprimentoString2 - 2] << endl;
    } else {
        cout << "A segunda string tem menos de duas letras." << endl;
    }

    return 0;
}
