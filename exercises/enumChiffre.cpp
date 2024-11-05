#include <iostream>
using namespace std;

enum class Chiffre{ZERO, UN, DUEX, TRIOS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF};


int main(){
    // Boucle pour parcourir les valeurs de l'énumération
    for(Chiffre i = Chiffre::ZERO ; i<=Chiffre::NEUF; i= static_cast<Chiffre>(static_cast<int>(i) + 1) ){
      
        if(i== Chiffre::ZERO){
            cout<<"ZERO";
        }else if(i== Chiffre::UN){
            cout<<"UN";
        }else if(i == Chiffre::DUEX){
            cout<<"DEUX";
        }else if(i == Chiffre::TRIOS){
            cout<<"TROIS";
        }
        else if(i == Chiffre::QUATRE){
            cout<<"QUATRE";
        }
        else if(i == Chiffre::CINQ){
            cout<<"CINQ";
        }
        else if(i == Chiffre::SIX){
            cout<<"SIX";
        }
        else if(i == Chiffre::SEPT){
            cout<<"SEPT";
        }
        else if(i == Chiffre::HUIT){
            cout<<"HUIT";
        }else(cout<<"NEUF");

        // VIRGUL VE BOSLUK EKLE
        if(i != Chiffre::NEUF){
            cout<<", ";
        }
       
    }

    return EXIT_SUCCESS;
}