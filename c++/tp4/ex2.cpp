#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char T[6][6] = {"je", "tu", "il", "nous", "vous" , "ils"};
    char verb[10], *radical;
    char term[6][5] = {"e", "es", "e", "ons", "ez", "ent"};

    do
    {
        cout << "saisir un verbe du premier grp" << endl;
        cin >> verb;
    } while (verb[strlen(verb)-1] != 'r' || verb[strlen(verb)-2] != 'e');

    strncpy(radical, verb, strlen(verb)-2);
    radical[strlen(verb)-2] = '\0';

    for (int  i = 0; i < 6; i++)
    {
        cout << T[i] << " "<< radical << term[i]<< endl ;

    }

    return 0;
    
     
}