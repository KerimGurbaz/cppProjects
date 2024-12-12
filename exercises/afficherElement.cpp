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
#include <iostream>
using namespace std;

class Point {
private:
    double x;
    double y;
    const double xMax;
    const double yMax;

public:
    //Constructeur par defaut avec limites par defaut
    Point() : x(0.0), y(0.0), xMax(100.0), yMax(100.0){}

    //Constructeur avec coordonnées initiales et limites par defaut
    Point(double x_val, double y_val) : x(x_val), y(y_val), xMax(100.0), yMax(100.0) {
        // vérification initiale des coordonnées
        if(x< 0 || x > xMax || y < 0 || y>yMax) {
            cout<<"Coordonnées initiales hors des limites. Initialisation à (0.0)"<<endl;
            x = 0.0;
            y = 0.0;
        }
    }

    // Constructeur avec coordonnées initiales et limites spécifiques
    Point(double x_val, double y_val, double xMax_val, double yMax_val)
        :x(x_val), y(y_val), xMax(xMax_val), yMax(yMax_val) {
        // verification initiale des coordonnées
        if(x < 0 || x>xMax || y< 0 || y>yMax) {
            cout<<"Coordonnées initiales hors des limites. initialisation à 0"<<endl;
            x = 0.0;
            y = 0.0;
        }
    }

    //Méthodes setter avec vérification des limites

    void setX(double x_val) {
        if(x_val >=0 && x_val <=xMax) {
            x = x_val;
        }
        else {
            //Effet nul si la nouvelle valeur  dépasse les limites
            //optionnel : afficher un message d'erreur
            // cout<<"Nouvelle valeur x hors de limites. Modification annulée."<<endl;
        }
    }

    void setY(double y_val) {
        if(y_val >= 0 && y_val <=yMax) {
            y = y_val;
        }else {
            //Efffet nul si la nouvelle valeur dépasse les limites
            //Optionnel : afficher un message d'erreur
            cout<<"Nouvelle valeur y hors des limites. Modiication annulées";
        }

    }

    //Méthodes getter
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // Méthode pour afficher les coordonnées et les contreaintes
    void afficher()const {
        cout<<"("<<x<<", "<<y<<"), contraintes : [0, "<<xMax<<"]x[0," << yMax<<"]" << endl;
    }

    //Méthode pour déplacer le point avec vérification des limites
    void deplacer(double dx, double dy) {
        double nouvelleX = x + dx;
        double nouvelleY = y + dy;

        if(nouvelleX >=0 && nouvelleX <= xMax && nouvelleY >=0 && nouvelleY <= yMax) {
            x = nouvelleX;
            y = nouvelleY;
        }else {
            // Effet nul si le déplacement dépasse les limites
            // optionnel : afficher un message d'errur
            cout<<"Déplacement hors des limites. Action annulée."<<endl;
        }

    }


};

int main() {
    //Creation de p1 avec coordoonées
    Point p1(1.2, 2.4);
    cout<<"p1" ; p1.afficher();

    // Déplacement de p1 de (1.0, 3.0) ->(2.2, 5,4)
    p1.deplacer(1.0, 3.0);
    cout<<"p1";p1.afficher();

    //Modification de x à 4.0 ->
    p1.setX(4.0);

    cout<<"p1";p1.afficher();




    return 0;
}
*/
