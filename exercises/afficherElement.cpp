#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; //


/*
// fonction d'aide qui imprime les éléments 
void afficherElement(int i){
    cout<<i <<'_';
}


// fonction qui imprime le vecteur entier

void afficher(vector<int>& v){
    if(!v.empty()){// si le vector n'est pas vide
        for_each(v.begin(), v.end() - 1 , afficherElement );// Procesus jusqu'a l'avant-dernière
    cout<<v.back();// Imprimer le dernier élément
    }
}

int main(){
    vector<int> v ={1,2,3};
    afficher(v);


    return 0;
}
 */


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void afficherElement(int i){
    cout<<i<< "_";
}

void afficher(vector<int>&v){
    if(!v.empty()){
        for_each(v.begin(), v.end() -1, afficherElement);
        cout<<v.back();
    }
}

int main(){
    vector<int> v = {1,2,3};
    afficher(v);

    /*string str1("12345", 3);
    string str2(str1, 1);
    cout <<"\n"<< str1 <<"\n"<< str2;
    */

    
string str1 = "XYZ";
str1.insert(1, "YYY", 2);
str1.resize(3);
cout <<"\n" <<str1;


/*float t1[10], t2[10]; //  déclaration des tableaux
int index = 0; // index pour le tableau t1

// Parcourir de t2 pour recopier les élements positifs dans t1
for(int i = 0 ; i < 10; i++ ){
    if(t2[i] > 0){
        t1[index] = t2[i]; 
        index++;
    }
}

// Completer t1 avec des zéros si neccessaire

for(int i = index; index<10; i++){
    t1[i] = 0; // ajoute des zéros dans les emplacement
}
*/

float t1[10], t2[10];

int index = 0;

for(int i =0 ; i<10; i++){
    if(t2[i] > 0 ){
        t1[index] = t2[i];
        index++;

    }
}

for(int i =index ; i<10; i++){
    t1[i]=0;
}

}


/*
#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;

    //constructeur par defaut
    Point(): x(0.0), y(0.0){}

    // constructeur avec paramètres
    Point(double x_val, double y_val) : x(x_val), y(y_val){}

    void afficher() const {
        cout<<"(" << x <<", "<<y<<")"<<endl;
    }

    //Méthode pour déplacer le point
    void deplacer(double dx, double dy) {
        x += dx;
        y += dy;
    }
};



int main() {
    // Création d'un point par défaut
    Point centre{};
    centre.afficher();


    //création d'un point avec des cordonnées spécifiques
    Point p{1.2, 2.4};
    p.afficher();

    //Déplacement du point
    p.deplacer(0.8, 0.6);
    p.afficher();

    //Modification directe des coordonnées
    p.x = 5.5;
    p.y = 10.3;

    cout<<p.x << "---"<< p.y<<endl;
    return 0;
}

*/
