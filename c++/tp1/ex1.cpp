#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Entrez une lettre majuscule : \n";
    cin >> c;
    if ((c >= 'A')&&(c <= 'Z'))
    {
        cout << char(c + 32);
    }
    else
    {
        cout << "La lettre doit etre majuscule" << endl;
    }
    return 0;
}