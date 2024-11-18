#include<iostream>
using namespace std;

int main()
{
    int T[50],N, tmp, TPOS[50], TNEG[50], indexpos = 0, indexneg = 0;
    do {
        cout << "saisir la taille maximale du tableau max 50"<< endl;
        cin >> N;
    }while (N >= 50);

    for (int i = 0; i < N; i++){
        cout<< "saisir la valeure "<< i+1 << endl;
        cin >> T[i];
    }

    for (int i = 0; i < N; i++){
        cout<< "valeur "<< i+1 << " est " << T[i] << endl;       
    }

    //inverser le tableau
    for (int i = 0; i < (N /2); i++) // for(int i = 0, j = N-1; i < j ; i++, j--)
    {
        tmp = T[i]; 
        T[i]=T[N-1-i]; // T[i] = T[j]
        T[N-1-i] = tmp; // T[j] = tmp
    }

    // afficher le tableau inversee
    cout << "\nTableau inverse:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout<< "valeur "<< i+1 << " est " << T[i] << endl;
    }

    //copier les valeurs positives et negatives
    for (int i = 0; i < N; i++)
    {
        if (T[i] >= 0)
        {
            TPOS[indexpos] = T[i];
            indexpos ++;
        }
        else 
        {
            TNEG[indexneg] = T[i];
            indexneg++;
        }
               
    }

    // Afficher les valeurs positives
    cout << "\nValeurs positives:" << endl;
    for (int i = 0; i < indexpos; i++) {
        cout << TPOS[i] << " ";
    }

    // Afficher les valeurs négatives
    cout << "\nValeurs negatives:" << endl;
    for (int i = 0; i < indexneg; i++) {
        cout << TNEG[i] << " ";
    }
    
    
    return 0;
    
}