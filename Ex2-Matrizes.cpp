#include <iostream>

using namespace std;

int main()
{
    int n, m;
    
    cout << "Informe a dimensão da matriz A(n x m):\n";
    do{
        cout << "n(1 ate 15): ";
        cin >> n;
    } while(n <= 0 or n > 15); 
    do{
        cout << "m(1 ate 25): ";
        cin >> m;
    } while(m <= 0 or m > 25); 
    
    int matriz[n][m], soma_linha[n], soma_linha_aux[n];

    cout << "Informe os elementos da matriz:\n";
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < m; j++){
            cout << "elemento [" << i+1 << "x" << j+1 <<"]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < m; j++){
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }


    for (int i = 0; i < n; i++ ){
        soma_linha_aux[i] = 0;
        for (int j = 0; j < m; j++){
           soma_linha_aux[i] += matriz[i][j];
           soma_linha[i] = soma_linha_aux[i];
        }
    }

    for (int i = 0; i < n; i++ ){
        cout << "soma da linha " << i+1 << "= " << soma_linha[i] <<"\n";
    }

    return 0;
}