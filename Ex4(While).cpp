#include <iostream>

using namespace std;

float massa, massa_inicial;
int tempo;

int main()
{
    cout << "Escreva a massa em kg do material radioativo: ";
    cin >> massa;

    massa_inicial = massa;
    
    while (massa >= 0.0005){
        massa = massa/2;
        tempo = tempo + 50;
    }

    massa = massa * 1000;
    
    cout << "Massa inicial: "<<massa_inicial<<"kg\n";
    cout << "Massa final: "<<massa<<"g\n";
    cout << "Tempo: "<<tempo<<"s\n";


    return 0;
}
