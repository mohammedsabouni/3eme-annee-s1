#include<iostream>
using namespace std;
int main()
{
    int I, Q, V;
    float P, M;
    cout << "Entrez le nombre d'inscrits : ";
    cin >> I;
    cout << "Entrez le nombre de votants : ";
    cin >> V;
    cout << "Entrez lenombre minimum de votants : ";
    cin >> Q;

    if (V < Q)
    {
        cout << "Le nombre de votants est insuffisant pour pouvoir voter." << endl;
    }
    else
    {
        P = (float)(V * 100) / I;
        M =  (float)V/2 + 1;
        cout << "Le pourcentage de votants est de : " << P << "%" << endl;
        cout << "Le nombre de votes requis est de : " << M << endl;
        
    }

    return 0;
}