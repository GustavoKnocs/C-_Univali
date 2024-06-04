#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
    int n_alunos;
    vector<string> nomes;
    vector<float> notas;

    do{
        cout<<"Informe a quantidade de alunos:(até 20 alunos) ";
        cin>>n_alunos; 
    } while(n_alunos <= 0 or n_alunos > 20);

    for (int i = 0; i < n_alunos; i++){
        
        string nome;
        float nota;   
        
        cout<<"Informe o nome do aluno "<< i + 1 <<": ";
        cin>> nome;
        do{
            cout<<"A nota do aluno "<< i + 1 <<": ";
            cin>> nota;
        } while(nota < 0 or nota > 10);
        nomes.push_back(nome);
        notas.push_back(nota);
    }

    float soma = 0;
    for (int i = 0; i < n_alunos; i++){
        soma += notas[i];
    }

    float media = soma / n_alunos;
    
    cout<<"A média da turma é: "<<media<<"\n";
    
    for (int i = 0; i < n_alunos; i++){
        if (notas[i] >= media)
            cout<<"O aluno "<<nomes[i]<<" ficou acima da média, com nota: "<<notas[i]<<"\n";
        else 
            cout<<"O aluno "<<nomes[i]<<" ficou abaixo da média, com nota: "<<notas[i]<<"\n";
    }
   
    return 0;
}