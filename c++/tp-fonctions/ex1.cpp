#include<iostream>

using namespace std;

void LIRE_TAB (int *& ,const int & );
void ECRIRE_TAB (int *& ,const int & );
int SOMME_TAB (int *& ,const int & );
int MINIMUM (int *& ,const int &);
int * MAXIMUM (int *&,const int &);

int main(){
    int *T, N;
    cout << "Entrez la taille du tableau" << endl;
    cin >> N;
    T = new int[N];
    LIRE_TAB(T,N);
    ECRIRE_TAB(T,N);
    int somme = SOMME_TAB(T,N);
    int min = MINIMUM(T,N);
    int *ptrmax = MAXIMUM(T,N);

    cout << "la somme est : " << somme << endl;
    cout << "le min est : " << min << endl;
    cout << "le max est : " << *ptrmax << endl;
    return 0 ;
}

void LIRE_TAB (int *&T ,const int & N){
    for (int i = 0; i < N; i++ ){
        cout << "saisir la valeur "<< i+1 << " du tableau" << endl;
        cin >> T[i];
    }
}

void ECRIRE_TAB (int *&T ,const int &N){
    for (int i = 0; i < N; i++ ){
        cout << T[i] << "\t";
        
    }
    cout << endl;
}

int SOMME_TAB (int *&T,const int &N ){
    int somme = 0;
    for(int i = 0; i < N; i++){
        somme += T[i];
    }
    return somme;
}

int MINIMUM (int *&T,const int &N){
    int min = T[0];
    for (int i = 1; i < N; i++)
    {
        if (min > T[i])
        {
            min = T[i];
        }
        
    }
    return min;
}

int * MAXIMUM (int *&T,const int &N){
    
    int *pmax = T;
    for (int i = 1; i < N; i++)
    {
        if (*pmax < *(T+i))
        {
            pmax = (T+i);
        }
        
    }
    return pmax;
}