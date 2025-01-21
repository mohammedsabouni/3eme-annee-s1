#include <iostream>
#include <cstring>
using namespace std;

char * reduce (char *);

int main(){
    char text[100];
    cout << "saisir une chaine " << endl;
    cin.getline(text,100);
    char *reduced = reduce(text);
    cout << reduced << endl ;


}

char * reduce(char *s){
    char* p;
    for(p = s; p < s+strlen(s)-2; p++){
        while (*p == *(p+1))
        {
            strcpy(p,p+2);
            p--;
        }
        
    }
    return s;
}