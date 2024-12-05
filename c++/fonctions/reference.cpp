#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int & ref = a;

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;
    cout << "l adress de a =" << &a << endl;
    cout << "l adress de ref " << &ref << endl;\

    ref ++ ;
    
    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;
    cout << "l adress de a =" << &a << endl;
    cout << "l adress de ref " << &ref << endl;\

    return 0;
}