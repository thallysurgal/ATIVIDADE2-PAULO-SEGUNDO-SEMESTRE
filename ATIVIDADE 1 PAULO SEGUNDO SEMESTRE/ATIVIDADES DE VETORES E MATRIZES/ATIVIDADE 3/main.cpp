#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int numeroDeAlunos = 5;
    double notas[numeroDeAlunos];
    double desvios[numeroDeAlunos];
    double desviosQuadrado[numeroDeAlunos];

    cout << "Digite as notas dos " << numeroDeAlunos << " alunos:" << endl;
    double somaNotas = 0.0;
    for (int i = 0; i < numeroDeAlunos; ++i) {
        cout << "Nota do aluno " << (i + 1) << ": ";
        cin >> notas[i];
        somaNotas += notas[i];
    }

    double mediaNotas = somaNotas / numeroDeAlunos;

    double somaDesviosQuadrado = 0.0;
    for (int i = 0; i < numeroDeAlunos; ++i) {
        desvios[i] = notas[i] - mediaNotas;
        desviosQuadrado[i] = desvios[i] * desvios[i];
        somaDesviosQuadrado += desviosQuadrado[i];
    }

    double variancia = somaDesviosQuadrado / numeroDeAlunos;
    double desvioPadrao = sqrt(variancia);

    cout << fixed << setprecision(2);
    cout << endl << "Resultados:" << endl;

    for (int i = 0; i < numeroDeAlunos; ++i) {
        cout << "Aluno " << (i + 1) << ": Nota = " << notas[i]
             << ", Desvio = " << desvios[i]
             << ", Desvio ao quadrado = " << desviosQuadrado[i] << endl;
    }

    cout << "Vari�ncia: " << variancia << endl;
    cout << "Desvio padr�o: " << desvioPadrao << endl;

    return 0;
}
