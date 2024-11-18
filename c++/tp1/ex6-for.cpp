#include<iostream>
using namespace std;

int main ()
{
    int N;
    int N2;
    int i=0;
    int somme=0;
    int produit=1;
    float moyenne;

    cout << "Combien de nombres : ";
    cin >> N;
    for (i=0;i<N;i++)
    {
        cout << "Entrez un nombre : ";
        cin >> N2;
        somme = somme + N2;
        produit = produit * N2;
    }

    moyenne = (float)somme / N;
    cout << "La somme est : " << somme << endl;
    cout << "Le produit est : " << produit << endl; 
    cout << "La moyenne est : " << moyenne << endl;

    return 0;
}