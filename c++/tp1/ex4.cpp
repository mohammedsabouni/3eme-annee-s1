#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double U = 1;

    cout << "saisir n" << endl;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        U = (U + 2/U)/2;
        cout << "U"<<i<<" = "<< setprecision(30)<<U<<endl;
    }
        
    
    return 0;
}