#include<iostream>
using namespace std;

int main(){
    int N = 0 , M = 0;
    int A[100] , B[50];
    int * PA = A, *PB = B;

    // lire la taille du tableau A
    do
    {
        cout << "saisir la taille du premier tableau max 50" << endl;
        cin >> N;
    } while (N > 50);

    //lire la taille du tableau B
    do
    {
        cout << "saisir la taille du deusiemme tableau max 50" << endl;
        cin >> M;
    } while (M > 50);

    //remplir le tableau A
    for ( PA = A; PA < A + N; PA++)
    {
        cout << "saisir la valeure : " << (PA - A) + 1 << endl ;
        cin >> *(PA);
    }

    //remplir le tableau B
    for ( PB = B; PB < B + M; PB++)
    {
        cout << "saisir la valeure : " << (PB - B) + 1 << endl ;
        cin >> *(PB);
    }
    
    //afficher A
     /*
    for ( PA = A; PA < A + N; PA++)
    {
        cout << *(PA) << "\t";
    }
    */

    //ajouter les elements de B a la fin de A
    for (PA = A + N, PB = B ; PB < B + M; PB++, PA++)
    {
        *(PA) = *(PB);
    }

    // modifier la taille de A 
    N = N + M;
 
    //afficher le A modifie
    for ( PA = A; PA < A + N; PA++)
    {
        cout << *(PA) << " | \t";
    }
    
    return 0;

    
}