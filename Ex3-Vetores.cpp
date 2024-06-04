#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n_quant;
    float n_valores_V, n_valores_W;
    vector<float> V;
    vector<float> W;

    do
    {
        cout << "Informe quantos valores deseja informar para os dois vetores (ate 15): ";
        cin >> n_quant;
    } while (n_quant <= 0 || n_quant > 15);

    cout << "Informe os valores do 1º vetor:\n";
    for (int i = 0; i < n_quant; i++)
    {
        cin >> n_valores_V;
        V.push_back(n_valores_V);
    }

    cout << "Informe os valores do 2º vetor:\n";
    for (int i = 0; i < n_quant; i++)
    {
        cin >> n_valores_W;
        W.push_back(n_valores_W);
    }

    cout << "Os valores informados foram:\n";
    for (int i = 0; i < n_quant; i++)
    {
        cout << "V[" << i << "] = " << V[i] << " / W[" << i << "] = " << W[i] << "\n";
    }

    vector<float> soma_vector;
    float soma = 0;
    cout << "\nSoma:\n";
    for (int i = 0; i < n_quant; i++)
    {
        soma = V[i] + W[i];
        soma_vector.push_back(soma);
        cout << V[i] << " + " << W[i] << " = " << soma_vector[i] << "\n";
    }

    vector<float> subtracao_vector;
    float subtracao = 0;
    cout << "\nSubtracao:\n";
    for (int i = 0; i < n_quant; i++)
    {
        subtracao = V[i] - W[i];
        subtracao_vector.push_back(subtracao);
        cout << V[i] << " - " << W[i] << " = " << subtracao_vector[i] << "\n";
    }

    vector<float> multiplicacao_vector;
    float multiplicacao = 0;
    cout << "\nMultiplicacao:\n";
    for (int i = 0; i < n_quant; i++)
    {
        multiplicacao = V[i] * W[i];
        multiplicacao_vector.push_back(multiplicacao);
        cout << V[i] << " x " << W[i] << " = " << multiplicacao_vector[i] << "\n";
    }

    vector<float> divisao_vector;
    float divisao = 0;
    cout << "\nDivisao:\n";
    for (int i = 0; i < n_quant; i++)
    {
        if (W[i] == 0)
        {
            cout << "Nao e possivel divisao por zero para W[" << i << "]\n";
        }
        else
        {
            divisao = V[i] / W[i];
            divisao_vector.push_back(divisao);
            cout << V[i] << " / " << W[i] << " = " << divisao_vector[i] << "\n";
        }
    }

    return 0;
}