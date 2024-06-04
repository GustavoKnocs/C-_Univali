#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;
    int valor,n;
    
    do{
        cout<<"Quantos valores inteiros de seja informar?(até 15 no maximo) ";
        cin>> n;
    } while(n <= 0 or n > 15 );
    
    cout<<"Informe os valores:\n";
    for(int i = 0; i < n; i++){
        cin>>valor;
        num.push_back(valor);
    }
    
    cout<<"Os valores informados foram:\n";
    for(int i = 0; i < n; i++){
        cout<<"["<<num[i]<<"] ";
    }
    cout<<endl;
   
    int maior = num[0];
    int menor = num[0];
   
    for(int i = 0; i < n; i++){
        if (num[i] > maior){
            maior = num[i];
        }
        if (num[i] < menor){
            menor = num[i];
        }
    }
    cout<<"O menor valor informado foi: "<<menor<<"\n";
    cout<<"O maior valor informado foi: "<<maior<<"\n";
    
    return 0;
}
