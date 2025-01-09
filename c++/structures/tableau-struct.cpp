#include<iostream>
using namespace std;
 //definition de la structure
struct Point {
    char nom;
    float x;
    float y;
};

int main(){
    int N ;
    cout << "entrer le nombre de structs" << endl;
    cin >> N;

    Point * T = new Point[N];
    for(int i = 0; i < N ; i++){
        cout << "entret le nom, x et y de votre point" << endl;
        cin >> (T+i) -> nom >> (T+i) -> x >>  (T+i) -> y; 
    }

    for(int i = 0; i < N ; i++){
        cout <<(T+i) -> nom << "("<< (T+i) -> x<< "," << (T+i) -> y << ")" << endl;
    }



    return 0;
}
