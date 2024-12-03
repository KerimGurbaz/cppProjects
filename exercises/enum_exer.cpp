// #include <iostream>
// using namespace std;
// #include <string>

// // struct Date {
// //     int jour;
// //     int mois;
// //     int annee;
// // };

// // struct Struct{
// //     int valeur;
// //     int *ptr = nullptr;
// // };


// // struct Struct2{
// //     string text;
// // };

// struct Details{
// int valeur;
// };

// struct Struct{
//     char car;
//     Details details;
// };



// int main() {
//     // Struct s1; // creation d'un objet sans initislisation explicite
//     // s1.valeur = 10;

//     // cout<<"Valeur: "<< s1.valeur<<endl;
//     // cout<<"Pointeur : "<< (s1.ptr == nullptr ? "nullptr " : "non-null")<<endl;

//     // Struct s2{20, new int(42)}; // initialisation explicite

//     // cout<<"Valeur : "<< s2.valeur<<endl;
//     // cout<<"Pointeur: "<< *s2.ptr<<endl;

//     // delete s2.ptr;

//     // Date aujourd;

//     // // Assigner des valeurs aux membres
//     // aujourd.mois = 12;
//     // aujourd.jour = 2;
//     // aujourd.annee = 2024;

//     // // Afficher la date
//     // cout << "Date : " << aujourd.jour << "/" 
//     //      << aujourd.mois << "/" 
//     //      << aujourd.annee << endl;


//     //      Struct2 s2; // Creation d'un objet de type Struct
//     //      s2.text = "Bonjour , Monde ! "; // Affectation d'une chaine de caracteres

//     Struct s; // creation d'un objet de type Struct

//     //Initialisation des membres

//     s.car = 'A';
//     s.details.valeur = 42;

//     // affichage des valeurs 
//     cout<< s.car<<endl;

//     cout<<"Détail(valeur) :: "<< s.details.valeur<<endl;





//     return 0;
// }


// #include <iostream>
// using namespace std;
// #include <string>

// struct Coord{
//     int x,y,z;

// };

// struct Cercle{
//     int rayon;
//     Coord centre;
// };

// int main(){
//        auto v = 10'0'000'000'00;
//         cout << v << endl;

// }
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
	string s1 = "abcd";
    string s2 = "ef";
    string result1 = s1 + s2;
    int len_s1, len_s2;
    len_s1 = size(s1);
    len_s2 = size(s2);
    cout<<len_s1<<" "<<len_s2<<endl;
    cout<<result1<<endl;
     string res1="";
     string res2="";
     res1.push_back(s2[0]);
    for(int i =1; i<len_s1 -1 ; i++){
       res1.push_back(s1[i]);
    }
           res1.push_back(s1[0]);
  
     
     res2.push_back(s1[0 ]);
    for(int i =1; i<len_s2; i++){
       res1.push_back(s2[i]);
    }
           res1.push_back(s2[0]);
    cout<<res1<< " "<<res2;
    return 0;
}

