#include<iostream>
#include<math.h>
using namespace std;

int main (){
    float a = 0, b = 0, c = 0, x1, x2;
    float delta = 0;

    cout << "entrer a" << endl;
    cin >> a;
    cout << "entrer b" << endl;
    cin >> b;
    cout << "entrer c" << endl;
    cin >> c;

    if (a != 0)
    {
        delta = pow(b,2) - (4 * a *c);
        cout << "delta : "<< delta;
        if (delta > 0){
            x1 = (-b - sqrt(delta)/ 2*a);
            x2 = (-b + sqrt(delta)/ 2*a);

            cout << "x1 = "<< x1 << endl;
            cout << "x2 = "<< x2 << endl;
        }
        else if (delta == 0){
            
        }
    }
    
    
}

