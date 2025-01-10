#include<iostream>
using namespace std;

struct Point {
    char nom;
    float y;
    float x;
};

void Saisie(Point &);
void Affiche(const Point &);
void Liretable(Point * &, const int &  );
void Ecriretable(Point * &, const int &);


int main (){

}

void Saisie(Point & A){
    cout << "entret le nom, x et y de votre point" << endl;
    cin >> A.nom >> A.x >> A.y;
    
}

void Affiche(const Point A){
    cout << A.nom << "("<< A.x<< "," << A.y << ")" << endl;
}

void Liretable(Point * &, const int )