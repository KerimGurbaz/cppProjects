#include <iostream>
#include <string>
using namespace std;

enum class Chiffre{ZERO, UN, DUEX, TRIOS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF};

const string CHIFFRE[]={"ZERO", "UN", "DUEX", "TRIOS", "QUATRE", "CINQ", "SIX", "SEPT", "HUIT", "NEUF"};



int main(){

    for(Chiffre i =Chiffre::ZERO; i<=Chiffre::NEUF; i=Chiffre(int(i) + 1) ){

        if(i!=Chiffre::ZERO){
            cout<<", ";
        }

        cout<<CHIFFRE[int(i)];
    }




    return 0 ;
}