#include <iostream>
#include <cstring>
using namespace std ;

int main(){
    char text[100];
    int cmptr = 0;
    char *p = text;
    
    cout << "saisir une chaine de carac "<< endl;
    cin.getline(text,100);
    
    p = strchr(p,'o');
    while(p != NULL){
        strcpy(p,p+1);
        p = strchr(p,'o');
    }
    cout <<text<< endl;
    
    return 0;
}
