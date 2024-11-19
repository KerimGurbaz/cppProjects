#include <iostream>
using namespace std;

/*
float sommeEntreIndices(float tab[] ,int taille, int premier, int second){
    float som = 0;
    for(int i = premier; i<second; i++){
        som += tab[i];
    }
    return som;
} 

int main(){

    float tab[] ={ 1.0 ,4 , 3 , 5, 6, 67, 7, 12, 9,10};

    int taille = sizeof(tab)  / sizeof(tab[0]);

    int premier = 0;
    int second = 3;

    float result = sommeEntreIndices (tab, taille, premier, second );
    cout<< result;
    
    return 0;
}*/

// Déclaration de la fonction
float sommeEntreIndices(float tableau[], int taille, int indiceDebut, int indiceFin);

int main(){
    // Deéclaration et initialisation d'un tableau de flottants
    float t[] = {2.5, 3.0, 4.5, 1.2, 7.8, 3.3, 9.0, 4.4};
    int taille = sizeof(t) / sizeof(t[0]); // Calcul de la taille du tableau

    int debut , fin;
    float somme;

    cout<<"Entrez l'indice de début";
    //cin>>debut;
    
    cout<<"Entrez l'indice de fin";
   // cin>>fin;

    // Appel de la fonction pour calculer la somme;
    somme =  sommeEntreIndices(t, taille, debut, fin);


    // Affichage du résult
    cout << "La somme des éléments de l'indice " << debut << " à " << fin << " est : " << somme << endl;

    // Définition de la tableau fonction

}
    float sommeEntreIndices(float tableau[], int taille, int indiceDebut, int indiceFin){
        // Vérification de la validité des indices
        if(indiceDebut <0 || indiceFin> taille || indiceDebut >indiceFin){
            return 0.; // Retourne 0 en cas d'erreur

        }
        float somme = 0.0; // Varable pour stocker la somme


        // Boucle pour parcourir le tableau entre les indices spécifiés
        for(int i = indiceDebut; i <= indiceFin ; i++){
            somme += tableau[i];
        }

        return somme;
    }