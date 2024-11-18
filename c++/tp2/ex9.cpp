#include<iostream>
using namespace std;

int main(){
    int T[50], N, X;
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

    int i = 0;
    while (i < N){
        if (T[i] == X)
        {
            for (int j = i; j < N-1; j++)
            {
                T[j] = T[j+1];
                
            }
            

            N--;
        }else i++;
        
    }

    for (int i = 0; i < N; i++){
        cout<< "valeur "<< i+1 << " est " << T[i] << endl;       
    }

    return 0;
}