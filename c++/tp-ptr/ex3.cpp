#include<iostream>
using namespace std;

int main(){
    int N = 0, M = 0, T[50][50];

    //pointeur vers un tableau de tableaux d'entiers
    int (*p)[50] = T, *q;

    do
    {
        cout << "saisir le nombre de lignes max 50 :" << endl;
        cin >> N;
    } while ((N < 0) || (N > 50));
    
    do
    {
        cout << "saisir le nombre de colomnes max 50 :" << endl;
        cin >> M;
    } while ((M < 0) || (M > 50));
    
    

    //lire le tableau 2D
    for (p = T; p < T+N; p++)
    {
        for (q = *p; q < *p + M; q++)
        {
            cout << "entrer T[" << p-T << "][" << q-*p << "]" << endl;
            cin >> *q;
        }
        
    }
    
    //afficher la matrice
    cout << "MATRICE :"<< endl;
    for (p = T; p < T+N; p++)
    {
        for (q = *p; q < *p + M; q++)
        {
            cout << *(q) << "\t";
        }
              
        cout << endl;
    }
    
    
    return 0;
}


/*
The expression *(*(ptr + i) + j) works like this:

ptr + i points to row i
*(ptr + i) gets the address of the first element in row i
*(ptr + i) + j points to element j in row i
*(*(ptr + i) + j) gets the value at that location
*/