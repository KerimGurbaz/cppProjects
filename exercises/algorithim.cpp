#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//Calculer le nombre de lettre;

int count_lettres(const string& text){
    return count_if(text.begin(), text.end(), ::isalpha);
}

// Convertit le texte en minuscule
string to_lowercase(const string& text){
    string result = text;
    transform(result.begin() , result.end(), result.begin(), ::tolower);
    return result;
}

string remove_spaces(const string& text){
    string result = text;
    result.erase(remove(result.begin(), result.end(), ' '), result.end());
    return result;
}

// Fonction principale de la solution
void analyser(const string& text){

    int letter_count = count_lettres(text);

    string lowercase_text = to_lowercase(text);

    string no_space_text = remove_spaces(text);

    // imprimer les résultats à l'écran

    cout << "La chaine \"" << text << "\" contient " << letter_count << " lettres\n";
    cout << "En minuscule : \"" << lowercase_text << "\"\n";
    cout << "Sans blancs : \"" << no_space_text << "\"\n";


}


int main() {
    const string ENTREE = "Once Upon a Time in the West";
    analyser(ENTREE);
    return 0;
}
