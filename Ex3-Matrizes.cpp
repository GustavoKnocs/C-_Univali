#include <iostream>

using namespace std;

int main ()
{
    int n;

    do{
        cout << "Informe a ordem da matriz quadrada(de 1 ate 10): ";
        cin >> n;
    } while(n <= 0 or n > 10);

    int matriz[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j) matriz[i][j] = 1;
            if(i == 0 and j == 0) matriz[i][j] = 10;
            if(i == n - 1 and j == n - 1) matriz[i][j] = 20;
            if(i > j) matriz[i][j] = 0;
            if(i < j) matriz[i][j] = 2;
            cout << "["<< matriz[i][j] <<"]";
        }
        cout << endl;
    }

    return 0;
}