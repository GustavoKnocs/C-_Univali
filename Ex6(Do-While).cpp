#include <iostream>
#include <string>

using  namespace std;

int canal, quant4, quant5, quant9, quant12, quantTotal;
float percent4, percent5, percent9, percent12;
string opcao;
char N, n;

int main()
{
    do{
        cout<<"Qual o canal desta casa? ";
        cin>> canal; 
        switch(canal){
            case 4 : quant4 = quant4 + 1;
            break;
            case 5 : quant5 = quant5 + 1;
            break;
            case 9 : quant9 = quant9 + 1;
            break;
            case 12 : quant12 = quant12 + 1;
            break;  
            case 0 : cout<<"A TV estava desligada!\n";
        break;
        }
        
         if (canal == 4 || canal == 5 || canal == 9 || canal == 12) {
            quantTotal = quantTotal + 1;
        }

        cout<<"Mais uma casa?(S/N) ";
        cin >> opcao;
    
    } while(opcao != "N" && opcao != "n");

    percent4 = (static_cast<float>(quant4) / quantTotal) * 100;
    percent5 = (static_cast<float>(quant5) / quantTotal) * 100;
    percent9 = (static_cast<float>(quant9) / quantTotal) * 100;
    percent12 = (static_cast<float>(quant12) / quantTotal) * 100;

    cout<<"A porcentagem de audiencia do canal 4 foi de: "<< percent4 << "%\n";
    cout<<"A porcentagem de audiencia do canal 5 foi de: "<< percent5 << "%\n"; 
    cout<<"A porcentagem de audiencia do canal 9 foi de: "<< percent9 << "%\n"; 
    cout<<"A porcentagem de audiencia do canal 12 foi de: "<< percent12 << "%\n";
     
    return 0;
}

