#include<iostream>
using namespace std;

int main (){
    int a = 5, b = 2;
    int *p = &a ;

    cout << "la valeur de a est :" << a << endl;
    cout << "l adress de a est : "<< &a << endl;
    cout << "la valeur de a est : "<< *p << endl ;
    cout << "l adress de a est : "<< p << endl;

    (*p)++;

    cout << "la valeur de a est :" << a << endl;
    cout << "l adress de a est : "<< &a << endl;
    cout << "la valeur de a est : "<< *p << endl ;
    cout << "l adress de a est : "<< p << endl;

    p = &b;

    cout << "la valeur de b est :" << b << endl;
    cout << "l adress de b est : "<< &b << endl;
    cout << "la valeur de b est : "<< *p << endl ;
    cout << "l adress de b est : "<< p << endl;

    (*p)-- ;

    cout << "la valeur de b est :" << b << endl;
    cout << "l adress de b est : "<< &b << endl;
    cout << "la valeur de b est : "<< *p << endl ;
    cout << "l adress de b est : "<< p << endl;
    
    return 0;

}

