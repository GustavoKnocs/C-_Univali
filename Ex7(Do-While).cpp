#include <iostream>
#include <string>

using namespace std;

int quant_produto;
float preco, salario, lucro;
string nome;
char opcao, outro_funcionario;

int main()
{
    do
    {
        lucro = 0;
        
        cout << "Informe o nome do Funcionario: ";
        cin >> nome;

        do
        {
            cout << "Qual o preco do produto?: ";
            cin >> preco;
            cout << "Qual a quantidade vendida desse produto? :";
            cin >> quant_produto;

            lucro =  lucro + (preco * quant_produto);
            
            cout << "Este funcionario tem mais uma venda? (S/N) ";
            cin >> opcao;

        } while (opcao != 'N' && opcao != 'n');

        salario = lucro * 0.3;
        cout << "Nome: " << nome << "\n";
        cout << "Total de Vendas: " << lucro << "R$\n";
        cout << "Salario: " << salario << "R$\n";

        cout << "Deseja cadastrar os dados de mais um vendedor? (S/N) ";
        cin >> outro_funcionario;

    } while (outro_funcionario == 'S' || outro_funcionario == 's');

    return 0;
}
