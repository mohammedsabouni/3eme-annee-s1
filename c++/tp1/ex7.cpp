#include<iostream>
using namespace std;
int main()
{
    char operation;
    int x, y;
    cout << "Enter an operation (+, -, *, /) : ";
    cin >> operation;
    cout << "Entrer le premier nombre : ";
    cin >> x;
    cout << "Entrer le deuxieme nombre : ";
    cin >> y;
    switch (operation)
    {
    case '+':
        cout << x << " + " << y << " = " << x + y << endl;
        break;
    
    case '-':
        cout << x << " - " << y << " = " << x - y << endl;
        break;
    
    case '*':
        cout << x << " * " << y << " = " << x * y << endl;
        break;
    
    case '/':
        cout << x << " / " << y << " = " << x / y << endl;  
        break;
    
    default:
        cout << "Operation invalide !" << endl;
    }

    return 0;
}