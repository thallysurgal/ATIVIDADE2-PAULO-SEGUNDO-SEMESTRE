#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int tamanhoCargo = 50;

    double salarioAtual, salarioReajustado;
    char nomeCargo[tamanhoCargo];

    double percentualGerente = 10.0;
    double percentualEngenheiro = 20.0;
    double percentualTecnico = 30.0;
    double percentualPadrao = 5.0;

    cout << "Digite o salario do funcionario: ";
    cin >> salarioAtual;
    cin.ignore();
    cout << "Digite o cargo do funcion�rio (Gerente, Engenheiro, Tecnico): ";
    cin.getline(nomeCargo, tamanhoCargo);

    if (strcmp(nomeCargo, "Gerente") == 0) {
        salarioReajustado = salarioAtual * (1 + percentualGerente / 100);
    } else if (strcmp(nomeCargo, "Engenheiro") == 0) {
        salarioReajustado = salarioAtual * (1 + percentualEngenheiro / 100);
    } else if (strcmp(nomeCargo, "Tecnico") == 0) {
        salarioReajustado = salarioAtual * (1 + percentualTecnico / 100);
    } else {
        salarioReajustado = salarioAtual * (1 + percentualPadrao / 100);
    }

    double diferencaSalario = salarioReajustado - salarioAtual;

    cout << "Salario antigo: R$ " << salarioAtual << endl;
    cout << "Novo salario: R$ " << salarioReajustado << endl;
    cout << "Diferenca: R$ " << diferencaSalario << endl;

    return 0;
}
