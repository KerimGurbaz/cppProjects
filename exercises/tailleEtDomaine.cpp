#include <iostream>
using namespace std;

/*int main(){

    float t[3][4];
    float som = 0;

    float *ptr = &t[0][0]; //pointeur pointant au premier élément
    for(int i = 0; i<3*4 ;i++){
        som += *(ptr + i);
    }


    return 0;
}
*/


/*float sommeTableau(const float tableau[], int taille){
    float somme = 0;
    for(int i = 0; i<taille; i++){
        somme +=tableau[i];
    }
    return somme;
}

int main(){

    float tableau[]= {1.5, 2.3, 3.7, 4.8};

    int taille = sizeof(tableau) / sizeof(tableau[0]);

    float resultat = sommeTableau(tableau, taille) ;

    cout<< resultat <<endl;

    return 0;
}
*/
// Fonction pour calculer la somme des éléments d'un tableau


#include <iostream>
using namespace std;

// Prototypes des fonctions
void calculerMinMax(const int t[], int n, int &min, int &max);
void calculerMinMax(const int t[], int n, int *min, int *max);

// Définition de la fonction avec références
void calculerMinMax(const int t[], int n, int &min, int &max) {
    if (n <= 0) {
        cout << "Erreur : taille du tableau invalide." << endl;
        return;
    }

    // Initialisation des valeurs min et max
    min = t[0];
    max = t[0];

    // Parcourir le tableau pour trouver le min et le max
    for (int i = 1; i < n; ++i) {
        if (t[i] < min) {
            min = t[i];
        }
        if (t[i] > max) {
            max = t[i];
        }
    }
}

// Définition de la fonction avec pointeurs
void calculerMinMax(const int t[], int n, int *min, int *max) {
    if (n <= 0) {
        cout << "Erreur : taille du tableau invalide." << endl;
        return;
    }

    // Initialisation des valeurs min et max
    *min = t[0];
    *max = t[0];

    // Parcourir le tableau pour trouver le min et le max
    for (int i = 1; i < n; ++i) {
        if (t[i] < *min) {
            *min = t[i];
        }
        if (t[i] > *max) {
            *max = t[i];
        }
    }
}

int main() {
    int tableau[] = {3, 7, -2, 10, 4}; // Exemple de tableau
    int taille = sizeof(tableau) / sizeof(tableau[0]); // Taille du tableau

    // Test de la version avec références
    int min1, max1;
    calculerMinMax(tableau, taille, min1, max1);
    cout << "Version avec références : min = " << min1 << ", max = " << max1 << endl;

    // Test de la version avec pointeurs
    int min2, max2;
    calculerMinMax(tableau, taille, &min2, &max2);
    cout << "Version avec pointeurs : min = " << min2 << ", max = " << max2 << endl;

    return 0;
}
