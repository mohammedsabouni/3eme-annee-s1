#include<iostream>
using namespace std;
 //definition de la structure
struct Point {
    char nom;
    float x;
    float y;
};

int main(){
    Point A, *B;

    cout << "entret le nom, x et y de votre point" << endl;
    cin >> A.nom >> A.x >> A.y;
    cout << A.nom << "("<< A.x<< "," << A.y << ")" << endl;

    B = new Point;

    cout << "entret le nom, x et y de votre point" << endl;
    cin >> B -> nom >> B -> x >>  B -> y;
    cout <<B -> nom << "("<< B -> x<< "," << B -> y << ")" << endl;


    return 0;
}
