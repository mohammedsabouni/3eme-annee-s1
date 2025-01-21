#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char text1[100], text2[100], text3[101];
    char *p1 = text1, *p2 = text2, *p3 = text3;
    cout << "text 1 :"<< endl;
    cin.getline(text1,100);
    cout << "text 2" << endl;
    cin.getline(text2,100);

    int taille1 = strlen(p1)/2;
    int taille2 = strlen(p2)/2; 


    strncpy(p3,p1,taille1);
    strncpy(p3+taille1,p2,taille2);

    *(p3+taille1+taille2) = '\0';

    cout << text3 << endl;
}