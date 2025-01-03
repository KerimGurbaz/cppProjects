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
/*
#include <iostream>
using namespace std;

//Définition de la classe Point
class Point {
private:
    double x;
    double y;

public:
    // Constructeur par défaut
    Point() : x(0.0), y(0.0){}

    //constructeur avec paramètres pour initialiser x et y
    Point (double x_val, double y_val) : x(x_val), y(y_val){}

    //Méthodes setter
    void setX(double x_val) {
        x = x_val;
    }

    void setY(double y_val) {
        y = y_val;
    }

    // Méthodes getter
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // Mèthode pour afficher les coordonnnées du point
    void afficher() const {
        cout << "(" << x << ", "<< y << ")"<< endl;
    }

    // Méthode pour déplacer le point
    void deplacer (double dx, double dy) {
        x += dx;
        y += dy;
    }
};

int main() {
    // Création d'un point nommé 'centre' avec le constructeur par défaut
    Point centre;
    centre.afficher(); // Affiche (0, 0)

    // Création d'un point 'p' avec des coordonnées initiales via le constructeur paramétré
    Point p(1.2, 2.4);
    p.afficher(); // Affiche (1.2, 2.4)

    // Déplacement du point 'p'
    p.deplacer(0.8, 0.6);
    p.afficher(); // Affiche (2, 3)

    // Modification des coordonnées de 'p' via les setters
    p.setX(5.5);
    p.setY(10.3);
    cout << p.getX() << " -- " << p.getY() << endl; // Affiche 5.5 -- 10.3

    return 0;
}

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
    const int xMax;
    const int yMax;

public:
    // constructeur avec paramètres par défaut
    Point(int xInit = 0, int yInit = 0, int xLim = 100, int yLim =100) :
    x(xInit), y(yInit), xMax(xLim), yMax(yLim) {
        // verification initiale pour respecter les limites
        if(x < 0) x =0;
        if(x>xMax) x = xMax;
        if(y< 0) y = 0;
        if(y>yMax)y = yMax;
    }


    //Méthode pour déplacer le point

    void deplace(int dx, int dy) {
        int nouveauX = x + dx;
        int nouveauY = y + dy;

        //Verifier les limites
        if(nouveauX >= 0 && nouveauX <=xMax) {
            x = nouveauX;
        }

        if(nouveauY >= 0 && nouveauY<=yMax) {
            y = nouveauY;
        }
    }

    // Méthode pour afficher les coordonnées du point
    void affiche() const {
        cout<<"("<<x<<", "<<y<<")"<< endl;
    }



};



int main() {
    Point p1(50, 50);
    Point p2(100, 0, 200, 200);

    p1.deplace(30, 20);
    p1.affiche();

    p1.deplace(-100, -100);
    p1.affiche();

    p2.deplace(0, 250);
    p2.affiche();
    
    return 0;
}


*/
