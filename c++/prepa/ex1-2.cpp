#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char text[100];
    char *p = text;
    cout << "saisir : "<< endl;
    cin.getline(text,100);

    p= strchr(p,'o');
    while (p != NULL)
    {
        strcpy(p,p+1);
        while(*p == 'o'){
            strcpy(p,p+1);
        }
        
        p=strchr(p+1,'o');
    }

    cout << text;
    
}