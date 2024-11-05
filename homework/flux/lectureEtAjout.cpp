#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool lire_fichier(const string& nom_fichier){
    ifstream fichier_entree(nom_fichier);

    //Vérifie si l'ouverture du fichier a réussi
    if(!fichier_entree){
        return false;
    }

    while(fichier_entree){
        string strInput;
        getline(fichier_entree, strInput); // lire une ligne
        cout<< strInput<<"\n";

    }

    fichier_entree.close();

    return true;

}

bool ecrire_fichier(const string& nom_fichier){
    // Ouvrir le fichier en mode append
    ofstream fichier_sortie(nom_fichier, ios::app);

    // Vérifier si l'ouverture du fichier a réussi

    if(!fichier_sortie){
        cerr<<"Erreur : Impossible d'ouvrir le fichier. \n";

        return false;
    }


    string texte;
    const string terminer = "#exit#";

    // Demandez à l'utilisateur d saisir du texte
    cout<<"Entrez le texte à enregistrer dans le fichier \n";
    while(getline(cin, texte)){
        if(texte == terminer) break;
        // écrivez le texte dans le fichier
        fichier_sortie<< texte<< endl;
    }

    fichier_sortie.close();

    cout<<"Le texte a été enregistré avec succès dans le fichier." <<endl;
    return 0;
}

main(){

    string nom_fichier;
    // Demander à l'utilisateur le nom du fichier ou enregistrer le texte
    cout<< "Entrez le nom du fichier ou enregistrer le texte : ";
    getline(cin, nom_fichier);

    lire_fichier(nom_fichier);
    ecrire_fichier(nom_fichier);

    return EXIT_SUCCESS;
}



