#include <iostream>
using namespace std;


/**void afficher(const int t[], unsigned s){

    cout<<"[";
    for(unsigned i = 0; i<s ; i++){
        cout<<t[i];
        if(i< s-1){
            cout<<", ";
        }
    }
    cout<<"]";
}

void supprimer_valeurs(int t1[], unsigned &s1, const int t2[], unsigned s2){
    unsigned nouvelle_taille = 0; // Yeni dizinin uzunlugu


    
    for(unsigned i = 0; i < s1; i++){
        bool est_present =false;

//t1[i] elemaninin t2 dizisinde olup olmadigini kontrol et]
       for(unsigned j = 0; j<s2; j++){
        if(t1[i] == t2[j]){
            est_present = true;
            break;
        }
       }

       if(!est_present){
        t1[nouvelle_taille] = t1[i];
        nouvelle_taille++;
       }
    }
    s1 = nouvelle_taille;
}

int main(){
    int t1[] = {1,3,2,3,5,4,6,2,0,6};
    unsigned s1 = sizeof(t1) / sizeof(int);
    afficher(t1, s1);

    const int t2[] = {3, 6};
    const unsigned s2 = sizeof(t2) / sizeof(int);
    afficher(t2, s2);

    supprimer_valeurs(t1, s1, t2, s2);
    afficher(t1, s1);
}
 * 
 */


//
// Created by Krm on 15/11/2024.
//
#include <iostream>
using namespace std;

/*
int main() {

    int tab[10];



    cout <<"Entrez des 10 nombres entiers";
    for(int i =0; i<10 ; i++) {
        cout<<"Nombre "<< (i+1)<<": ";
        cin>>tab[i];

    }
    int min =tab[0];
    int max = tab[0];

    for(int i =0; i<10; i++) {
          if(tab[i] <min) {
        min = tab[i];
    }
    if(tab[i] > max) {
        max = tab[i];
    }
    }

    cout<<"min = "<<min<<endl;
    cout<<"max = "<<max<<endl;

    return 0;

}


*/
// practice make perfect
/**
 * int main(){

    const int taille = 10;
    int tab[taille];
    int min, max;
    int *ptr = tab;

    for(int i = 0 ; i<taille ; i++){
        cout<<"Nombre : "<<(i+1)<<": ";
        cin>>tab[i];
    }

   min =*ptr;
   max = *ptr;

   for(ptr = tab + 1; ptr<tab +taille; ptr++){
    if(*ptr > max){
        max = *ptr;
    }
    if(*ptr < min){
        min = *ptr;
    }
   }

   cout<<"\nLe plus grand nombre est : "<<max<< endl;
   cout<<"Le plus petit nombre est : "<<min<<endl;
}
 */
int main() {
    const int taille = 10;
    int tab[taille];

    for(int i = 0; i<taille; i++) {
        cout<<"Nombre : "<< (i+1)<<": ";
        cin>>tab[i];
    }

    int min = tab[0];
    int max = tab[0];

    for(int i = 1 ; i<taille ; i++) {
        if(tab[i]< min) {
            min=tab[i];
        }
        if(tab[i]>max) {
            max = tab[i];
        }
    }

    cout<<"\nLe plus grand nombre est : "<<max<<endl;
    cout<<"Le plus petit nombre est : "<< min<<endl;
}

