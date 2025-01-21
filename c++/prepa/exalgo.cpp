#include<iostream>

using namespace std;

int main(){
    int N, pos, tmp;
    cin >> N;
    int *T = new int [N];
    for(int *p=T; p < T+ N; p++){
        cin >> *p;
    }

    pos = N-1;
    for(int i = 0; i < pos - 1; i++ ){
        while(T[i] >= 0){
            tmp = T[pos];
            T[pos] = T[i];
            T[i] = tmp;
            pos--;
        }
    }

    for(int *p=T; p < T+ N; p++){
        cout << *p << "\t";
    }

    return 0;
}