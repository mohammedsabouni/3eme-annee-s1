#include<iostream>
using namespace std;

int main(){
    int T[50], N, X, index = 0;
    do{
        cout << "saisir la taille du tableau max 50"<< endl;
        cin >> N;
    } while (N > 50);
    
    for (int i = 0; i < N; i++){
        cout<< "saisir la valeure "<< i+1 << endl;
        cin >> T[i];
    }
    
    for (int i = 0; i < N; i++){
        cout<< "valeur "<< i+1 << " est " << T[i] << endl;       
    }

    cout << "ecrire la valeur a suprimer" << endl;
    cin >> X;

    for (int i = 0; i < N; i++)
    {
        if (T[i] != X)
        {
            T[index] = T[i];
            index++;
        }
        
    }

    N = index;
    
    for (int i = 0; i < N; i++){
        cout<< "valeur "<< i+1 << " est " << T[i] << endl;       
    }

    return 0;
}