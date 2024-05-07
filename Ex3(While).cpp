#include <iostream>
#include <string>

using namespace std;

char opcao;
int num, num2, quant_div;
string divisores = "";

int main()
{
    do
    {
        cout << "Insira um numero: ";
        cin >> num;

        quant_div = 0;
        num2 = 1;
        divisores = "";

        while (num2 <= num)
        {

            if (num % num2 == 0)
            {
                if (divisores == "") {
                    divisores += to_string(num2);
                }
                else{
                    divisores += ", " + to_string(num2);
                }

                quant_div = quant_div + 1;
            };
            num2 = num2 + 1;
        };

        cout << "Numero lido: " << num << "\n";
        cout << "Divisores: " << divisores << "\n";
        cout << "Quantidade de divisores: " << quant_div << "\n";

        cout << "Deseja inserir mais um numero?(S/N): ";
        cin >> opcao;
    } while (opcao == 'S' || opcao == 's');

    return 0;
}