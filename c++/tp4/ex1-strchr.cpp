#include <iostream>
#include <cstring>
using namespace std ;

int main(){
    char text[100];
    int cmptr = 0;
    char *p = text;
    
    cout << "saisir une chaine de carac "<< endl;
    cin.getline(text,100);
    
    p = strchr(p,'e');
    while(p != NULL){
        cmptr++;
        p = strchr(p+1,'e');
    }
    cout <<" le nombre de e est : "<< cmptr << endl;
    
    return 0;
}
