#include <iostream>
#include <ctime>  
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));

    int numeroSecreto = rand() % 100 + 1;

    int palpite;
    int tentativas = 0;
    bool acertou = false;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;
    cout << "Tente adivinhar o numero entre 1 e 100." << endl;

    while (!acertou) {
        cout << "Digite seu palpite: ";
        cin >> palpite;

        tentativas++;

        if (palpite == numeroSecreto) {
            cout << "Parabens, você acertou em " << tentativas << " tentativas!" << endl;
            acertou = true;
        } else if (palpite < numeroSecreto) {
            cout << "Tente um numero maior." << endl;
        } else {
            cout << "Tente um numero menor." << endl;
        }
    }

    return 0;
}

