#include <iostream>
using namespace std;

void afficher(int t[],  unsigned taille) {
    cout<<"[";
    for(unsigned i = 0; i<taille ; i++) {
        cout<<t[i];
        if(i<taille -1) {
            cout<<", ";
        }
    }
    cout<<" ]"<<endl;
}

void supprimer_valeur(int t1[], int &s1, const int t2[], unsigned s2) {
    unsigned k = 0; // k suivra la nouvelle taille du tableau
    for(unsigned i =0; i< s1; i++) {
        bool found = false;
        for(unsigned j = 0; j<s2; j++) {
            if(t1[i] == t2[j]) {
                found =true;
                break;
            }
        }
        if(!found) {// si faound reste faux , le bloc if est entré
            t1[k++] = t1[i]; // l'élément t1[i] est stocké dans le nouveau tableau
        }
    }
}


int main() {



    return 0 ;
}