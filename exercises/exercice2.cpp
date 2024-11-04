#include <iostream>
#include <vector>
using namespace std;

// Fonction pour calculer la moyenne d'une ligne
double calculeMoyenne(const vector<double>& ligne){
    // si la ligne est vide, on retourne une valeur très élevée(par exemple, 1e9)
    // ce qui permet de mettre cete ligne en dernier lors du tri
    if(ligne.empty()){

        return 1e9;
    }

    // calculer la somme des éléments de la ligne
    double somme = 0;
    for(int i = 0; i< ligne.size(); i++){
        somme += ligne[i];
    }

    return somme / ligne.size(); // moyenne = somme/ nombre d'éléments
}



int main(){
    // matrice des notes initiale

    vector<vector<double>> matriceNotes={
        {4.5, 5.1, 4.8},
        {3.9, 3.8, 4.1},
        {},
        {5.1, 4.8, 5.2}
    };

    // vecteur pour stocker la moyenne de chaque ligne
    vector<double> moyennes;
    for(int i = 0; i < matriceNotes.size() ; i++){
        double moyenne = calculeMoyenne(matriceNotes[i]); // calcul de la moyenne de la ligne
        moyennes.push_back(moyenne); // Ajoute la moyenne dans le vecteur "moyennes"
    }

    // Tri par sélection(selection sort) pour trier les lignes par ordre croissant de moyennes
    // Cette boucle trouve la plus petite moyenne à chaque étape et la place dans lla partie triée
    for(int i = 0; i< matriceNotes.size() - 1 ; i++){
        int indexMin =i; // indexMin garde l'index de la plus petite moyenne trouvée
        
        for(int j = i+1; j<matriceNotes.size() ; j++){
             if(moyennes[j] < moyennes[indexMin]){
            indexMin = j; // met à jour indexMin si une moyenne plus petitr est trouvée
        }
        }
        // Après avoir trouvé la plus petite moyenne, on échange les lignes et les moyennes
        swap(moyennes[i], moyennes[indexMin]);
        swap(matriceNotes[i], matriceNotes[indexMin]);
    }




    //Afficher la matrice triée
    cout<<"Matrice des notes après le tri"<< endl;

    for(const auto& ligne : matriceNotes){
        cout<<"[ ";
        for(double note : ligne){
            cout<<note << " ";
        }
        cout<<" ]"<< endl;
    }


    return 0;
}