// #include <iostream>
// using namespace std;

// int main(){

//     int taille;
//     //1-Lecture de la taille du tableau
//     cout<<"Entrez la taille du tableau d'entiers : ";
//     cin >> taille;

//     //Vérification que la taille positive
//     if(taille<=0){
//         cout<<"La taille doit être un entier positif. "<< endl;
//         return 1;// Terminer le program avec code d'erreur
//     }

//     //2. Allocation dynamique du premier tableau
//     int *tableau = new int [taille];

//     //3. Lecture des éléments du premier tableau
//     cout<<"Entrez" << taille << "nombres entier : "<<endl;

//     for(int i = 0; i < taille ; ++i){
//         cout<<"Element "<< i+1 << " : ";
//         cin>>tableau[i];
//     }

//     // Allocation dynamique du deuxième tableau pour les carrés
//     int * carreTableau = new int[taille];

//     // 5. Calcul des carrés et stokage dans le deuxième tableau
//     for(int i = 0; i < taille; ++i){
//         carreTableau[i] = tableau[i]* tableau[i];
//     }

//     //6. Libération de la mémoire du premier tableau
//     delete []tableau;
//     tableau = nullptr;

//     // 7. Affichage des éléments du deuxime tableau.
//     for(int i =0 ; i<taille ; i++){
//         cout << "Carré de l'élément " << i + 1 << " : " << carreTableau[i] << endl;
//     }

//     // 8. liberation de la memoire du deuxieme tableau
//     delete[] carreTableau;
//     carreTableau = nullptr;

//     return 0;
// }

// #include <iostream>
// #include <cmath> // pour utiliser la fonction nan()
// using namespace std;

// double apply_op(double a, double b, char op){
//     switch(op){
//         case '+' : return a+b;
//         case '-' : return a-b;
//         case '*' : return a*b;
//         case '/' :
//             if(b != 0) return a/b;
//             else return nan("");
//         default: return nan("");
//     }
// }

// int main(){

//     cout<<apply_op(2., 3., '*')<< endl;
//     cout<<apply_op(4., 5., '*')<< endl;
//     cout<<apply_op(3., 2., '*')<< endl;
//     cout<<apply_op(4., 2., '*')<< endl;
//     cout<<apply_op(apply_op(3., 2., '*'), 2., '+')<< endl;

// }

// #include <iostream>
// using namespace std;
// int n;

// int & plus_petit_modulo(int& a, int& b){
//     if(a % n <= b%n){
//         return a;
//     }else return b;
// }

// int main(){
//     int a =1234 , b = 5643;
//     cout<<a << " " << b << endl;

//     n = 100;
//     cout<<plus_petit_modulo(a,b)<<endl;

//     n = 10;
//     cout<<plus_petit_modulo(a,b)<<endl;

//     plus_petit_modulo(a,b) = 9999;
//     cout<<a << " " << b << endl;

//     return 0;
// }

// void afficher_en_triangle( string texte){
//     int taille = texte.size();
//     for(int i = taille; i > 0 ; --i){
//         string result;
//         for(int k = 0 ; k < i ; k++){
//             result += texte[k];
//         }

//         int espace = taille - i;

//         cout<< string(espace, ' ')<<result<<endl;
//     }

// }

// int main(){
//     afficher_en_triangle("Kerim");

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

void afficher(string texte)
{
    int taille = texte.size();

    for (int i = taille; i > 0; --i)
    {
        cout << string(taille - i, ' ')
             << texte.substr(0, i)
             << endl;
    }
}

int main()
{

    afficher("Bonjour");
    return 0;
}