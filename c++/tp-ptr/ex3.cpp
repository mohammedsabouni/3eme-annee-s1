#include<iostream>
using namespace std;

int main(){
    int N = 0, M = 0, T[50][50];

    //pointeur vers un tableau d'entiers
    int (*p)[50] = T;

    do
    {
        cout << "saisir le nombre de lignes max 50 :" << endl;
        cin >> N;
    } while ((N < 0) && (N > 50));
    
    do
    {
        cout << "saisir le nombre de colomnes max 50 :" << endl;
        cin >> M;
    } while ((M < 0) && (M > 50));
    
    

    //lire le tableau 2D
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "entrer T[" << i << "] [" << j <<"]" << endl;
            cin >> *(*(p + i) + j) ;
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << *(*(p + i)+ j) << " |\t";
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