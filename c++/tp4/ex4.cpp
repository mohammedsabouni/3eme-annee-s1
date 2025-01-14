#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char SUJ[100] = "bonjour";
    char CH1[50];
    char CH2[50];
    char *p1 = SUJ, *p2 = CH1, *p3 = CH2;

    cout<<"ch1 "<< endl;
    cin.getline(CH1,50);

    cout << "ch2 : "<< endl;
    cin.getline(CH2,50);

    p1 = strstr(SUJ,CH1);
    // strncpy(p1,CH2,strlen(CH2));
    strcpy(p1,CH2);
    p2 = p1 + strlen(CH2);

    strcpy(p2,p2+1);
    

    cout << SUJ ;

}