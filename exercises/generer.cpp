#include <iostream>
#include <vector>
using namespace std;

// Fonction "generer" : Crée un vecteur 2D en répétant le caractère 'contenus' pour chaque élément 'taille'

vector<vector<char>> generer(const vector<size_t>& tailles, const vector<char>& contenus){
    vector<vector<char>> v; // 2D vector

    // Vérifiez len longeur de deux vecteurs
    if(tailles.size() != contenus.size()){
        cout<<"Erreur: Les vecteurs 'tailles' et 'contenues' doivent avoir des longueurs égales."<<endl;
        return v; // vecteur vide
    }

    // Effectuer l'opération pour chaque élément
    for(size_t i = 0; i < tailles.size() ; i++){
        vector<char> ligne; // un nouvelle ligne

        //Ajoutez le caractère contenus[i] autant de fois que tailles[i]

        for(size_t j = 0; j< tailles[i] ; j++){
            ligne.push_back(contenus[i]);
        }

        // Ajutez la ligne au vecteur 2D
        v.push_back(ligne);

    }
    return v;

}

    //Fonction afficher : affiche le vecteur 2D à l'écran.
    void afficher(const vector<vector<char>> &v){
        for(size_t i = 0; i< v.size() ;i++ ){
            for(size_t j = 0; j < v[i].size(); j++){
                cout<<v[i][j]<<" " ;
            }
            cout<<endl;// passer à nouvelle ligne en fin de ligne
        }
    }

 int main(){
        vector<size_t> tailles{1,5,6,3}; // Longeur de ligne
        vector<char>contenus{'H', 'E', 'I', 'G'}; // Caractères à répéter dans les lignes

        // Créer un vecteur 2D à l'aide de la faonction 'générateur'

        vector<vector<char>> v = generer(tailles, contenus);

        // imprimer le vecteur 2D sur l'écran à l'aide de la fonction 'afficehr

        afficher(v);
        
        return 0;

    }
