#include<iostream>
using namespace std;

void Echanger(int &, int &);
int main(){
    int x, y;  
    cout << "saisir les 2 valeurs a echanger :" << endl;
    cin >> x >> y;

    Echanger(x, y);
    cout << "x = " <<  x << " et y = " << y << endl ;

    return 0;  
}

void Echanger(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c; 
}