#include<iostream>
using namespace std;

int main(){
    int N = 0 , M = 0;
    int  *A = NULL, *B = NULL, * PA = A, *PB = B;

    // lire la taille du tableau A.
    do
    {
        cout << "saisir la taille du premier " << endl;
        cin >> N;
    } while (N <= 0);

    //lire la taille du tableau B
    do
    {
        cout << "saisir la taille du deusiemme tableau " << endl;
        cin >> M;
    } while (M < 0);

    A = new int [N + M];
    B = new int [M];

    //remplir le tableau A
    for ( PA = A; PA < A + N; PA++)
    {
        cout << "saisir la valeure : " << (PA - A) + 1 << " du premier tableau" << endl ;
        cin >> *(PA);
    }

    //remplir le tableau B
    for ( PB = B; PB < B + M; PB++)
    {
        cout << "saisir la valeure : " << (PB - B) + 1 << " du deusiemme tableau" << endl ;
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

    delete []A;
    delete []B;
    
    return 0;

    
}