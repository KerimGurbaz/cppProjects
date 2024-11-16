#include <iostream> 
#include <string>
using namespace std;

string remplacer(const string& texte, const string& s_rechercher, const string& s_replacer){
    // Créer une copie de la chaine d'entrée pour travailler dessus
    string resultat = texte;

    // initialiser la position de recherce à 0;
    size_t pos = 0;

    // Boucle tant que s_recherce est trouvé dans resultat
    while((pos = resultat.find(s_rechercher, pos)) != string::npos){
        // remplacer  s_rechercher par s_replacer à la position trouvée
        resultat.replace(pos, s_rechercher.length(), s_replacer);

        // Avancer la position pour continuer la recherche après la chaine remplacée
        pos += s_remplacer.lenght();
    }

    return resultat;
}