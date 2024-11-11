#include <iostream>
#include <string>
using namespace std;

int main(){
    string nom;
    int age;
    double noteMath, notePRG1;


    //Obtenir le nom de l'étudiant
    cout<<"Entrez le nom de l'étudiant : ";
    getline(cin, nom);


    //Obtenir l'age de l'étudiant avec validation
    while(true){
        cout<<"Entrez l'age de l'étudiant : ";
        cin >>age;

        if(cin.fail() || age <1 || age > 100){
            cout<<"Saisie invalide. Veuillez entrer un entier entre 1 et 100\n";
            cin.clear(); // Effacer le drapeau d'erreur
            cin.ignore(1000, '\n'); //ignore l'entrée invalide
        }else{
            break; // age valide saisi
        }
    }

    // Obtenir la note avec validation
    while(true){
        cout<<"Entrez la note en mathématiques (max. 6) : " ;
        cin >> noteMath;

        if(cin.fail() || noteMath < 1.0 || noteMath >6.0){
            cout<<"Saisie invalide. Veuillez entrer une valeur entre 1 et 6\n ";
            cin.clear();
            cin.ignore(1000, '\n');
        }else{
            break; //Note valide saisie
        }
    }

    //Get prg1 grade with validation
        while(true){
        cout<<"Entrez la note en mathématiques (max. 6) : " ;
        cin >> notePRG1;

        if(cin.fail() || notePRG1 < 1.0 || notePRG1 >6.0){
            cout<<"Saisie invalide. Veuillez entrer une valeur entre 1 et 6\n ";
            cin.clear();
            cin.ignore(1000, '\n');
        }else{
            break; //note valide saisie
        }
    }

    double moyenne = (noteMath + notePRG1) / 2;

    // Déterminer le résultat
    string resultat = (moyenne >= 4.0) ? "Admis" : "Non admis";

    //Afficher le resultat

    cout << "\nNom\tAge\tNote Math\tNote PRG1\tAdmis\n";
    cout << "---------------------------------------------\n";
    cout << nom << "\t" << age << "\t" << noteMath << "\t\t" << notePRG1 << "\t\t" << resultat << "\n";
    cout << "---------------------------------------------\n";
    cout << "Moyenne : " << moyenne << "\n";
    cout << "Résultat : " << resultat << endl;





}