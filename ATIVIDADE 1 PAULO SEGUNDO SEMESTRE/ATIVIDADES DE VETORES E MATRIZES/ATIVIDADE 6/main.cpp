#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int maxLinhas = 20;
    int maxColunas = 25;
    int M, N;
    cout << "Informe o número de linhas (M) (máximo " << maxLinhas << "): ";
    cin >> M;
    cout << "Informe o número de colunas (N) (máximo " << maxColunas << "): ";
    cin >> N;

    if (M <= 0 || M > maxLinhas || N <= 0 || N > maxColunas) {
        cout << "Dimensões da matriz inválidas." << endl;
        return 1;
    }

    int matriz[M][N];
    int matrizTransposta[N][M];
    int matrizAdicao[M][N];
    int fatorK;

    cout << "Digite os elementos da matriz " << M << "x" << N << ":" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    cout << endl << "Matriz Transposta:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << setw(4) << matrizTransposta[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Informe o fator K para multiplicação: ";
    cin >> fatorK;
    cout << endl << "Matriz após multiplicação por " << fatorK << ":" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            matriz[i][j] *= fatorK;
            cout << setw(4) << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Digite os elementos da segunda matriz " << M << "x" << N << ":" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrizAdicao[i][j];
        }
    }

    cout << endl << "Matriz após adição da segunda matriz:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            matriz[i][j] += matrizAdicao[i][j];
            cout << setw(4) << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
