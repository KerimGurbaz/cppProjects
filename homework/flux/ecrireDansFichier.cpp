#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string nom_fichier;

    cout<<"Entrez le nom du fichier ou enregistrer le texte";
    getline(cin, nom_fichier);

    ofstream fichier_sortie(nom_fichier, ios::app);


    // vérifier si l'ouverture du fichier a réussi
    // si le fichier ne peut pas etre ouvert , afficher un message d'erreur et arrêter le programme
    if(!fichier_sortie){
        cerr<<"Erreur : impossible d'ouvrir le fichier. \n";
        return EXIT_FAILURE;
    }

    string texte;
    const string terminer  = "#exit#";

    cout<< "Entrez le texte à enregistrer dans le fichier";

    while(getline(cin, texte)){
        if(texte == terminer) break;
        fichier_sortie<<texte<<endl;
    }

    //fermer le fichier
    fichier_sortie.close();

    cout<<"Le texte a été enregistré avec succès"<<endl;


}

