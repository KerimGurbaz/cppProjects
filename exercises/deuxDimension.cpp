#include <iostream>
using namespace std;
#include  <vector>

float sommeTableau(float t[][4], int lignes, int colonnes)
{
    float somme = 0.;

    // Parcours du tableau à deux dimentions
    // for (int i = 0; i < lignes; i++)
    // {
    //     for (int j = 0; j < colonnes; ++j)
    //     {
    //         somme += t[i][j]; // Ajout de chaque élément  à la somme
    //     }
    // }
    float * ptr = &t[0][0];

    for(int i = 0;  i<colonnes*lignes; i++){
        somme += *( ptr + i);
    }

    return somme;
};

// int main()
// {

//     float t[3][4] = {
//         {1.0, 2.0, 3.0, 4.0},
//         {5.0, 6.0, 7.0, 8.0},
//         {9.0, 10.0, 11.0, 12.0}};

//         int lignes = 3; // nombre de ligne

//         int colonnes = 4; // Nombre de colonnes

//         // Appel de la fonction pour calculer la somme
//         float result = sommeTableau(t, lignes, colonnes);

//         // Affichage du résultat
//         cout<< "La somme des éléments du tableau est : "<< result<<endl;


//     return 0;
// }


float sommeTableau ( const vector<vector<float>> & tableau){
    float somme  = 0.;


    for(const auto &ligne : tableau){
        for(const auto &element : ligne){
            somme += element;
        }
    }

    return somme;
}

int main(){
    vector<vector<float>> t = {
        {1.0, 2.0, 3.0, 4.0}, 
        {5.0, 6.0, 7.0, 8.0}, 
        {9.0, 10.0, 11.0, 12.0}
    };

    // Appel de la fonction pour calculer la somme
    float resultat = sommeTableau(t);

    // Affichage du résultat
    cout<<"La somme des éléments du tableau est : "<< resultat<<endl;

    return 0; 


}