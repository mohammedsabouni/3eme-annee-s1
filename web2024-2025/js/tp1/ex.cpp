#include<iostream>
using namespace std;

int main(){
    int T[3][3]= {{1,94,43},{17,9,40},{836,26,3423}};
    int * p= T[0];
    int s=0;
    int i=0;
    do
    {
        s=s+*(p+i);
        i=i+4;
    } while (i<9);
    cout<< s;
}