#include<iostream>

using namespace std;

int main(){
    int N, tmp;
    int *A = NULL, *P1, *P2;

    do
    {
        cout << "saisir la taille du tableau ";
        cin >> N;
    } while (N < 0);

    A = new int [N];

    //lire le tableau
    for(P1 = A; P1 < A + N; P1++){
        cout << "T[" << (P1 - A) << "] = ";
        cin >> *(P1);
    }

    //inverser le tableau 
    for (P1 = A, P2 = (A + N - 1); P1 < A + N; P1++, P2--){
        tmp = *P1;
        *P1 = *P2;
        *P2 = tmp;
    }

    //afficher le tableau inverse
    for(P1 = A; P1 < A + N; P1++){
        cout << *(P1) << " | \t";
    }

    delete []A;

    return 0;
    
}