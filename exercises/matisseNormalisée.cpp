#include <iostream>
using namespace std;


/*void calculerRepresentation(double r, double base, double & mantisse, int & exposant){
        mantisse = r;
        exposant = 0;

        while(mantisse < 0){
            mantisse *= base;
           --exposant;
        }

        while(mantisse >= base){
            mantisse /= base;
            ++exposant;
        }
    }

    


int main(){

    cout<<"Entre un nombre réel : ";
    double r;
    //cin>>r;

    double mantisse;
    int exposant;

    calculerRepresentation(r, 10. , mantisse, exposant);
    cout<<r << "= mantisse" <<"*10^"<< exposant<<endl;

    calculerRepresentation(r, 2. , mantisse, exposant);
    cout<<r << "= mantisse" <<"*2^"<< exposant<<endl;
    return 0;
}
*/

// Déclaration dela fonction somme_tablaeu

/*
float somme_tableau(float tableau[], int taille){
    float somme = 0;

    for(int i = 0; i<taille; i++){
        somme += tableau[i];

    }
    return somme;

}

int main(){
    float tableau[] = {1.5, 2.5, 3.0, 4.0, 5.0};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    float resultat = somme_tableau(tableau, taille);

    cout<<resultat;

    return 0;
} */

 float somme_tableau(float t[], int taille){
    float somme = 0;

    for(int i =0; i<taille; i++){
        somme +=t[i];
    }
    return somme;
}

int main(){

    float t[] ={1.2, 3.4, 5,.4,9.21};

    int taille  = sizeof(t) / sizeof(t[0]);

    float result = somme_tableau(t, taille);
    cout<<result;
    return 0;
}



