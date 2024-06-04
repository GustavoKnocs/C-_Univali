#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n_atletas, n_inscricao;
    vector<float> altura;
    vector<int> inscricao;
    float n_altura, media;
   
    do
    {
        cout << "O grupo possui quantos atletas:(maximo 100) ";
        cin >> n_atletas;
    } while (n_atletas <= 0 or n_atletas > 100);


    for(int i = 0; i < n_atletas; i++){
        cout<<"Informe o numero de inscricao: ";
        cin>>n_inscricao;
        cout<<"Informe a altura em metros: ";
        cin>>n_altura;
        
        inscricao.push_back(n_inscricao);
        altura.push_back(n_altura);
    }

    float menor = altura[0];
    float maior = altura[0];
    int menor_inscricao = inscricao[0];
    int maior_inscricao = inscricao[0];
    float soma = 0;
    
    for(int i = 0; i < n_atletas; i++){
        if(altura[i] > maior){
            maior = altura[i];
            maior_inscricao = inscricao[i];
        }
        if(altura[i] < menor){
            menor = altura[i];
            menor_inscricao = inscricao[i];
        }
        soma += altura[i];
    }
    
    media = soma / n_atletas;
    
    cout<<"A media de altura do grupo e: "<<media<<"m\n";
    cout<<"O atleta mais baixo e: "<< menor_inscricao << " / Altura: "<< menor <<"m\n";
    cout<<"O atleta mais alto e: "<< maior_inscricao  << " / Altura: "<< maior <<"m\n";
        
        return 0;
}
