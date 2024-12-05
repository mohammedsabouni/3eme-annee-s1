#include<iostream>
using namespace std;

int Somme(int, int);
void AfficherSomme(int);

int main(){
    int x, y, s;
    cout << "saisir 2 entiers a sommer :" << endl;
    cin >> x >> y;
    s = Somme(x, y);
    AfficherSomme(s);
    return 0;
}

int Somme(int a, int b){
    int s = a + b;
    return s;
}

void AfficherSomme(int s){
    cout << "la somme est : " << s << endl;
}