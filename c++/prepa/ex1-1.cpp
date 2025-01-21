#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char text[100];
    char *p = text;
    int cmptr = 0;
    cout << "saisir une chaine de caracteres" << endl;
    cin.getline(text,100);
    p = strchr(p, 'e');
    while (p != NULL)
    {
        p = strchr(p+1, 'e');
        cmptr ++ ;
    }
    
    cout << "le nmbre est : "<< cmptr;
    return 0;

}