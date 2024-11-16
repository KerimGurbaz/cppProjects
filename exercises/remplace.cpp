/*#include <iostream> 
#include <string>
using namespace std;

string remplacer(const string& texte, const string& s_rechercher, const string& s_remplacer){
    // Créer une copie de la chaine d'entrée pour travailler dessus
    string resultat = texte;

    // initialiser la position de recherce à 0;
    size_t pos = 0;

    // Boucle tant que s_recherce est trouvé dans resultat
    while((pos = resultat.find(s_rechercher, pos)) != string::npos){
        // remplacer  s_rechercher par s_replacer à la position trouvée
        resultat.replace(pos, s_rechercher.length(), s_remplacer);

        // Avancer la position pour continuer la recherche après la chaine remplacée
        pos += s_remplacer.length();
    }

    return resultat;
}


int main(){

    const string ENTREE = "Gaston   l'telefon qui son \n"
                          "Et y a jamais persin qui y repond \n";

    string sortie = remplacer(ENTREE, "on", "_on_");

    cout<<sortie;
    return 0;
    
    }
*/#include <iostream>
#include <string>
using namespace std;

string remplacer (const string& texte, const string& s_rechercher, const string& s_remplacer){
    // 1. Créer une copie de la chaine

    string resultat = texte;

    //2. Initialiser la position de recherche à 0
    size_t pos = 0;

    // 3.Boucle tant que s_rechercher est trouvé dans resultat
    while((pos = resultat.find(s_rechercher, pos)) != string::npos){
        // Remplacer s_rechercher par s_remplacer à la position trouve
        resultat.replace(pos, s_rechercher.length(), s_remplacer);

        pos += s_remplacer.length();
    }

    return resultat;

}

int main()
{
    const string ENTREE = "Gaston y a l'telefon qui son \n"
                          "Et y a jamais person qui y repond \n";

    // Appeler la fonction 'remplacer' pour remplacer "on" par "_on_"
    string sortie = remplacer(ENTREE, "on", "_on_");
    
    // Afficher le résultat
    cout << sortie;

    return 0;
}
