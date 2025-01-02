#include <iostream>
#include <cstring>
using namespace std ;

int main(){
    char text[100];
    char *p = NULL;
    char *p2 = NULL;
    
    cout << "saisir une chaine de carac "<< endl;
    cin.getline(text,100);
    
    for (p = text, p2 = text + strlen(text) -1; p < p2 ; p++, p2-- )
    {
        char c= *p;
        *p = *p2;
        *p2 = c;

    }
    
   
    cout <<text<< endl;
    
    return 0;
}
