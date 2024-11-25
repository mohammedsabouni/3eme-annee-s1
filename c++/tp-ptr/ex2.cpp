#include<iostream>
using namespace std;

int main(){
    int X, N = 0, T[50];
    int *PA , *PB;

    //lire la taille du tableau
    do
    {
        cout << "saisir la taille du tableau max 50" << endl;
        cin >> N;
    } while (N > 50);
    
    //remplir le tableau
    for (PA = T; PA < T + N; PA++)
    {
        cout << "T["<< PA - T <<"] :" << endl;
        cin >> *(PA);
    }
    
    //choisir la valeur a eliminer : X
    cout << "saisir la valeur a eliminer"<< endl;
    cin >> X;

    
    //eliminer X et tasser le tableau
    PA = T;
    while (PA < T + N )
    {
        if (*(PA) == X)
        {
            for ( PB = PA; PB < (T + N) - 1; PB++)
            {
                *(PB) = *(PB + 1);
            }
             
            N--;
        }
        else
        {
            PA ++;
        }
               
    }
    
    //afficher le tableau sans X
    for (PA = T; PA < T + N; PA++)
    {
        cout << *(PA) << " | \t";
    }
    
    return 0;
}