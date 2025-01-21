#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char verb[20], * rad;
    string suj[] = {"je","tu","il","nous","vous","ils"};
    string ter[] = {"e","es","e","ons","ez","ent"};
    cout << "saisir le verbe" << endl;
    cin.getline(verb,20);
    if ((verb[strlen(verb)-1] != 'r') || (verb[strlen(verb)-2] != 'e'))
    {
        cout << "entrer un verb du premier group !!" << endl;
    }
    else{
        
        rad = new char[strlen(verb)-2];
        strncpy(rad, verb,strlen(verb)-2);
        rad[strlen(verb)-2]='\0';
        
    }

    for (int i = 0; i < 6; i++)
    {
        cout << suj[i] << " " << rad<<ter[i] << endl;
    }
    return 0;
    
}