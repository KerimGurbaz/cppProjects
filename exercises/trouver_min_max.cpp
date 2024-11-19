#include <iostream>
#include <climits> // Pour int_max, int_min
using namespace std;

void trouverMinMax(int tableau[], int taille, int & max, int &min){
    if(taille <=0){
        cout<<"Tableau vide ou taille invalide";
        return;
    }

    max = tableau[0];
    min = tableau[0];

    for(int i =1; i<taille; ++i){
        if(tableau[i] < min){
            min = tableau[i];
        }
        if(tableau[i] > max){
            max = tableau[i];
        }
    }
}

void trouverMinMaxAvecPointeurs (int tableau[], int taille, int *max, int * min){
    if(taille <= 0){
        cout<<"Tableau vide ou taille invalide";
        return;
    }

    *min = tableau[0];
    *max = tableau[0];

    for(int i = 0; i<taille; ++i){
        if(tableau[i] > *max){
            *max = tableau[i];
        }
        if(tableau[i] < *min){
            *min = tableau[i];
        }
    }
}


int main(){

    int tableau[] = {5,3 ,99 ,1, 7 ,4, 0};
    int taille = sizeof(tableau)/ sizeof(tableau[0]);
    int min,max;

   // trouverMinMax (tableau , taille, max, min);
    trouverMinMaxAvecPointeurs (tableau , taille, &max,&min);

    cout<<"min = "<<min<<endl; 

    cout<<"max = "<<max<<endl; 



    return 0;
}
