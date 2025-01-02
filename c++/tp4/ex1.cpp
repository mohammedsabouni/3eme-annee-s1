#include <iostream>
#include <cstring>
using namespace std ;

int main(){
    char text[100];
    int cmptr = 0;
    char *p1 = NULL;
    char cpy[100];
    cout << "saisir une chaine de carac "<< endl;
    cin.getline(text,100);

    for(int i = 0; i < strlen(text); i++){
        if (text[i] == 'e' )
        {
            cmptr++;
        }
        
    } 
    cout <<" le nombre de e est : "<< cmptr << endl;
    
    return 0;
}
