#include<iostream>
using namespace std;

int main(){
    int N = 0, T[50]; 
    int *p;

    do {
        cout << "saisir la taille maximale du tableau max 50"<< endl;
        cin >> N;
    }while (N >= 50);

    // remplir le tableau
    for (p = T; p < T + N; p++)
    {
        cout << "entrez T[" << p - T << "]" << endl;
        cin >> *p ;
    }

    // affichage du tableau
    for (p = T; p < T + N; p++)
    {
        cout << *p << "\t" ;
    }
}