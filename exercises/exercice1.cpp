
#include <iostream>
#include <string>
using namespace std;






string to_string_custom(int nbre, int base =10){
    // La base doit être comprise entre 2 et 16
    if(base < 2 || base >16){
        return ""; // Retourne une chaine vide si la base est invalde
    }

    // Gestion des nombres négatifs
    bool negatif = false; // Flag pout indiquer si le nombre est négatif
    if(nbre < 0){
        negatif = true; //ndique que le nombre est négatif
        nbre = -nbre; // convertit le nombre en positif pour la conversion 
    }

    const char* chiffres ="0123456789ABCDEF";
    string resultat ="";

    do{
        int reste = nbre % base; // obtient le reste de la division par la base

        resultat  = chiffres[reste] +resultat; //Ajoute le caractère correspondant au résultat
        nbre /=base; // Divise le nombre par la base pour continuer la conversion

    }while(nbre > 0);

    if(negatif){
        resultat = "-" + resultat;
    }



    return resultat; //retourne la chaine resultante
}

int main(){
    cout<<to_string_custom(299,10)<<endl;
    cout<<to_string_custom(-299,16)<<endl;
    cout<<to_string_custom(255,2)<<endl;
    cout<<to_string_custom(100,10)<<endl;
    cout<<to_string_custom(50,20)<<endl;


    return 0;
}