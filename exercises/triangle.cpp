#include <iostream>
#include <string>
#include <cmath>
using namespace std;
    
void afficher_en_triangle( string texte){
    int taille = texte.size();

    for(int i = taille; i > 0 ; i--){
        string result;
        for(int k = 0; k<i; k++){
            result += texte[k];
        }
        int espace = taille - i;


         cout<<string(espace, ' ') << result<<endl;
    }
}

int main(){
    afficher_en_triangle("hello");
    return 0;
}