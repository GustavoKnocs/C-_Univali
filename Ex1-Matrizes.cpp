#include <iostream>

using namespace std;

int main()
{
    int n, p, q, soma_coluna = 0, soma_total = 0, soma_diagonal = 0;
    
    do{
        cout << "Informe a ordem da matriz quadrada(de 1 ate 10): ";
        cin >> n;
    } while(n <= 0 or n > 10);
    
    int matriz[n][n], produto[n];

    cout << "Informe os elementos da matriz:\n";

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "elemento [" << i+1 << "x" << j+1 <<"]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
     }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(j == 1){
                soma_coluna += matriz[i][j];
            }
        }
    }
    cout << "A soma da coluna 2: "<< soma_coluna;

    for (int i = 0; i < n; i++){
        produto[i] = 1;
        for (int j = 0; j < n; j++){
            produto[i] *= matriz[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << "O produto da linha "<< i + 1 << ": "<< produto[i] << "\n";
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
          soma_total += matriz[i][j] ; 
        }
    }
    cout << "A soma de todos elementos: "<< soma_total;
    cout << endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j){
                soma_diagonal += matriz[i][j];
            }
        }
    }
    cout << "A soma da diagonal principal: "<< soma_diagonal;
    cout << endl;
    
    do{
        cout << "Informe quais linhas(p e q) deseja permutar:(de 1 ate "<< n << ") ";
        cin >> p >> q;
    } while(p <= 0 or p > n or q <= 0 or q > n);

    int aux[10];
    for(int j = 0; j < n; j++){
        aux[j] = matriz[p-1][j];
        matriz[p-1][j] = matriz[q-1][j];
        matriz[q-1][j] = aux[j];
    }

    cout << "\nMatriz apos permutacao das linhas " << p  << " e " << q  << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout <<"["<< matriz[i][j] << "]";
        }
        cout << endl;
    }
    

    return 0;
}