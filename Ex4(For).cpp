#include <iostream>

using namespace std;

int main()
{
    int num = 3, den = 2; 
    float soma = 0.0;

    cout << "Termos da Sequência: ";
    for (int i = 0; i < 20; i++) {
        cout << num << "/" << den;
        if (i < 19) {
            cout << " + ";
        }
        soma += static_cast<float>(num) / den; 
        num += 2;
        den += (num - 1); 
    }

    cout << endl << "Soma da Sequência: " << soma << endl; 

    return 0;
}
