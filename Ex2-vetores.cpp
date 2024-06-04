#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<float> V;

    do
    {
        cout << "Informe a quantidade de valores (ate 10): ";
        cin >> n;
    } while (n <= 0 or n > 10);

    cout << "Informe os valores:\n";
    for (int i = 0; i < n; i++)
    {
        float valor;
        cin >> valor;
        V.push_back(valor);
    }

    cout << "Valores observados (medidas iniciais):\n";

    for (int i = 0; i < n; i++)
    {
        cout <<"["<< V[i] << "] ";
    }
    cout << endl;

    vector<float> suavizados = V;

    for (int i = 1; i < n - 1; i++)
    {
        suavizados[i] = (V[i - 1] + V[i] + V[i + 1]) / 3.0;
    }

    cout << "Valores suavizados:\n";
    for (int i = 0; i < n; i++)
    {
        cout <<"["<<suavizados[i] << "] ";
    }
    cout << endl;

    return 0;
}