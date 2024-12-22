#include<iostream>
using namespace std;

int puissance(int , int );

int main(){
    int a, b;
    cout << "saisir a et b" << endl;
    cin >> a >> b;
    int resultat = puissance(a, b);
    cout << "le resultat de "<< a <<" puissance " << b <<  " est " << resultat << endl;
}

int puissance(int a, int b){
    int resultat = 1;
    if (b == 0)
    {
        return 1;
    }
    
    for (int i = 1; i <= b; i++){
        resultat = resultat * a;
    }
    return resultat;
}