#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    unsigned long long resultat = 1;
    
    do
    {
        cout << "saisir un nombre positif" << endl ;
        cin >> a ;
    } while (a < 0);
    
    
    for (int i = 1; i <= a ; i++)
    {
        resultat = resultat * i;
    }
    cout << a << "! = " << resultat << endl;

    
    return 0;

    
}