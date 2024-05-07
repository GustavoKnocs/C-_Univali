#include <iostream>

using namespace std;

int soma, i; 

int main()
{
    for (i=1; i<=100; i++){
    soma = soma + i;
    }
    
    cout << "A soma dos termos de 1 a 100 eh: "<<soma<<"";

        
    return 0;
}

