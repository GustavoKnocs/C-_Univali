#include <iostream>

using namespace std;

int i; 
float soma;

int main()
{
    for (i = 1; i <= 100; i++){
        soma = soma + (1.0 / i);
    }

    cout << "A soma dos termos de 1 a 1/100 eh aproximadamente: "<<soma<<"";

        return 0;
}
