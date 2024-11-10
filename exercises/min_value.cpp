#include <iostream>
using namespace std;

// Déclaration d'une varable statique par defaut ppour gérer le cas d'un tableu vide

static int default_min =0;

// fonction min qui retourne une référence a la valeur minimale du tableau

int& min_valeur(int tab[], int size){
    if(size == 0){
        return default_min;
    }

    // initialiser le pointeur vers le premier élément comme étant le minimum
    int* min_ptr = &tab[0];

    //Parcourir le tableau pour trouver le minimum
    for(int i = 1; i<size ; ++i){
        if(tab[i] < *min_ptr){
             min_ptr = &tab[i]; 
        }
    }

    return *min_ptr;
}

// Fonction afficher qui affiche les éléments du tableau et la valeur minimale

void afficher(int tab[], int size){
    cout<<"{";
    for(int i = 0; i < size; ++i ){
        cout<<tab[i];
        if(i < size){
            cout<<", ";
        }
    }

    cout<<"}\tvaleur min : " << min_valeur(tab, size)<< endl;

}

int main(){
    // Premier tableu
    int tab1[] = {6,3,8,6,9,2,5};
    int size1 = sizeof(tab1) / sizeof(tab1[0]);


    // Afficher le tableau et sa valeur minimale

    afficher(tab1, size1);
    cout<<"valeur min : "<< min_valeur(tab1, size1) << endl;

    //modifier la valeur minimale
    min_valeur(tab1, size1) = 7;

    //Afficher à nouveau le tableau et sa nouvelle valeur minimale
    afficher(tab1, size1);
    cout<<"valeur min : " << min_valeur(tab1, size1)<< endl;

    // Deuxième tableau vide
    int tab2[] = {};

    int size2 = sizeof(tab2) / sizeof(tab2[0]);

    afficher(tab2, size2);
    cout<<"valeur min : "<< min_valeur(tab2, size2)<<endl;

    return 0;
}