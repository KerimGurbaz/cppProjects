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

// #include <iostream>
// #include <string>
// using namespace std;

// void afficher(string texte)
// {
//     int taille = texte.size();

//     for (int i = taille; i > 0; --i)
//     {
//         cout << string(taille - i, ' ')
//              << texte.substr(0, i)
//              << endl;
//     }
// }

// int main()
// {

//     afficher("Bonjour");
//     return 0;
// }

// int &f(){
//     static int value;
//     value ++;
//     return value;
// }

// int & f(){
//     static int valeur =0;
//     valeur++;
//     return valeur;
// }

// int main(){

//     for(int i = 0; i < 5; ++i)
//         cout<<f()<<' ';

//         cout<<endl;

//         f() = -3;

//         for(int i = 0; i < 5; ++i){
//             cout<<f()<<' ';
//         }

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     string nom_fichier;
//     cout << "Entrez le nom du fichier : ";
//     getline(cin, nom_fichier);

//     // Vérification si le nom du fichier est vide
//     if (nom_fichier.empty()) {
//         cerr << "Erreur : le nom du fichier ne peut pas être vide." << endl;
//         return EXIT_FAILURE;
//     }

//     ofstream fichier_sortie(nom_fichier, ios::app);
//     if (!fichier_sortie) {
//         cerr << "Erreur : impossible d'ouvrir le fichier." << endl;
//         return EXIT_FAILURE;
//     }

//     cout << "Le fichier '" << nom_fichier << "' a été ouvert avec succès." << endl;
//     cout << "Entrez le texte à enregistrer dans le fichier (tapez #exit# pour quitter) : " << endl;

//     string texte;
//     const string terminer = "#exit#";

//     // Lecture des lignes à enregistrer
//     while (getline(cin, texte)) {
//         if (texte == terminer) break;
//         fichier_sortie << texte << endl;
//     }

//     fichier_sortie.close();
//     cout << "Le texte a été enregistré avec succès dans le fichier '" << nom_fichier << "'." << endl;

//     return EXIT_SUCCESS;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// string to_string_custom (int nmbre, int base =10){
//     if(base < 2 || base>16 ) return "";

//     bool negative = false;
//     if(nmbre < 0){
//         negative = true;
//         nmbre = - nmbre;
//     }

//     string result = "";
//     const char * Chiffre = "0123456789ABCDEF";

//     do{
//         int reste = nmbre % base;
//             result = string(1, Chiffre[reste]) + result;
//             nmbre /= base;
//     }while(nmbre > 0);

//     if(negative){
//         result = "-" + result;
//     }

//     return result;
// }

// int main(){

//     cout<<to_string_custom(299,10)<<endl;
//     cout<<to_string_custom(-299,16)<<endl;
//     cout<<to_string_custom(255, 2)<<endl;
//     cout<<to_string_custom(100,10)<<endl;
//     cout<<to_string_custom(50,20)<<endl;

//     return 0;
// }

//  #include <iostream>
//  #include <string>
//  using namespace std;

//  enum class Chiffre{ZERO, UN , DEUX, TROIS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF};

//  const string CHIFFRE[] = {"ZERO", "UN" , "DEUX", "TROIS", "QUATRE", "CINQ", "SIX", "SEPT", "HUIT", "NEUF"};

// int main(){
// for(Chiffre i = Chiffre::ZERO; i <= Chiffre::NEUF ;  i =Chiffre(int(i)+1)){
//     cout<<CHIFFRE[int(i)];

//     if(i!=Chiffre::NEUF){
//     cout<<", ";
// }
// }

//     return EXIT_SUCCESS;
//  }

#include <iostream>

// #include <vector>
// using namespace std;

// // vector<vector<char>> generer(const vector<size_t> &tailles, const vector<char> &contenus)
// // {

// //     vector<vector<char>> v;

// //     if (tailles.size() != contenus.size())
// //     {

// //         cout << "Erreur: les vecteur 'tailles' n'est pas égaux tailles de contenus";
// //         return v;
// //     }

// //     for (size_t i = 0; i < tailles.size(); i++)
// //     {
// //         vector<char> ligne; // creer une nouvelle ligne

// //         // Ajouter le caractere 'contenus' autant de fois que tailles i

// //         for (size_t j = 0; j < tailles[i]; j++)
// //         {
// //             ligne.push_back(contenus[i]);
// //         }
// //         v.push_back(ligne);
// //     }

// //     return v;
// // }

// // void afficher(const vector<vector<char>> & v){
// //     for(size_t i = 0; i < v.size(); i++){
// //         for(size_t j= 0; j< v[i].size();j++ ){

// //             cout<<v[i][j]<< " ";
// //         }
// //         cout<<endl;
// //     }
// // }

// vector<vector<char>> generer(const vector<size_t>& tailles, const vector<char> & contenus){
//     vector<vector<char>> v; //vecteur 2D pour stocker les lignes

//     if(tailles.size() != contenus.size()){
//         cout<<"Erreur les size n'est pas egaux";
//         return v;
//     }

//     for(size_t i = 0; i < tailles.size(); i++){
//         vector<char>lignes;
//         for(size_t j =0; j<tailles[i] ; j++){
//             lignes.push_back(contenus[i]);
//         }
//        v.push_back(lignes);
//     }

//     return v;
// }

// void afficher(const vector<vector<char>>& v){
//     for(const auto &ligne:v){
//         for(char c : ligne ){
//             cout<<c<<" ";
//         }
//          cout<<endl;

//     }
// }

// int main()
// {
//     vector<size_t> tailles{1, 2, 3, 4};
//     vector<char> contenus{'H', 'E', 'I', 'G'};

//     vector<vector<char>> v = generer(tailles, contenus);

//     afficher(v);

//     return 0;
// }


// #include <iostream>
// using namespace std;
// #include <vector>

// //declaration de la fonction
// float sommeTableau ( float** tableau, int rows, int cols);

// int main(){

//     int rows = 3; // nobre de lignes
//     int cols = 4; // nombre de colonnes

//     //Allouer la mémoire pour les lignes
//     float ** tableau = new float* [rows];

//     //Allouer la mémoire pour chaque colonne dans chaque ligne
//     for(int  i = 0;  i<rows; ++i){
//         tableau[i] = new float[cols];
//     }

//     // Remplir le tableau avec des valeurs

//     float valeur = 1.0f;
//     for(int i =0 ; i<rows; ++i){
//         for(int j = 0 ; j< cols; ++j ){
//             tableau[i][j] = valeur++;
//         }
//     }

//     //3. Appeler la fonction pour calculer la somme
//     float total = sommeTableau(tableau, rows, cols);

//     // Afficher le résultat
//     cout<<"La somme des éléments du tableau est : "<<total<<endl;
    
//     //Liberer la mémoire allouée
//     for(int i = 0; i <rows; i++){
//         delete[] tableau[i];
//     }

//     delete[] tableau;
   
//     return 0;
// }


 

//  float sommeTableau(float** tableau, int rows, int cols){
//     float somme = 0.0f;
//     for(int i = 0; i < rows; ++i){
//         for(int j = 0; j < cols; ++j){
//             somme += tableau[i][j];
//         }
//     }
//     return somme;
//  }



// string remplacer(const string & texte,const string & s_rechercer,const string & s_remplacer ){
//     string resultat = texte;

//     size_t pos =0;

    // while((pos = resultat.find(s_rechercer, pos)) != string ::npos){
    //     resultat.replace(pos, s_rechercer.length(), s_remplacer);
    //     pos += s_remplacer.length();
    // }

//     while((pos = texte.find(s_rechercer, pos)) != string::npos){
//         resultat.replace(pos, s_rechercer.length(), s_remplacer);
//     }
//    return resultat;

// }

// int main(){
//     const string ENTREE = "Gaston y a l'telefon qui son \n "
//                           "Et y a jamais person qui repond \n"  ;
//     string s1 , s2;                      


//     string sortie =  remplacer(ENTREE,"on", "_on_");

//     cout<< sortie<<endl;



//     return EXIT_SUCCESS;
// }

// #include <iostream>
// #include <string>
// #include <cmath>
// #include <algorithm>
// using namespace std;

// int count_letters (const string & text){
//     return count_if(text.begin(), text.end(), ::isalpha);
// }

// string to_lowercase(const string& text){
//     string result = text;
//     // transform(result.begin(), result.end(), result.begin(), ::tolower);
//     transform(result.begin(), result.end(), result.begin(), ::tolower);
//     return result;
// }

// string remove_espace( const string& text){
//     string result = text;
//     result.erase(remove(result.begin(), result.end(), ' '), result.end());
//     return result;
// }

// int main(){

//     string text = " Gaston y a l'telefon qui son Et y a jamais person qui repond";


//     cout<<remove_espace(text)<<endl;
//     cout<<to_lowercase(text)<<endl;
//     cout<<count_letters(text)<<endl;

//     return EXIT_SUCCESS;
// }


// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int count_letters( const string & text){
//     return(count_if(text.begin(), text.end(), ::isalpha ));
// }


// string to_lowercase(const string &text){
//     string result = text;
//     transform(result.begin(), result.end(),result.begin(), ::tolower);
//     return result;
// }

// string remove_space (const string & text){
//     string result = text;
//     result.erase(remove(result.end(), result.end(), ' '), result.end());
//     return result;
// }

// int main(){
//     string text = "Gaston y a l'telefon qui son Et y a jamais person qui repond";
    
//     cout << "Metin boşluksuz: " << remove_space(text) << endl;
//     cout << "Metin küçük harf: " << to_lowercase(text) << endl;
//     cout << "Toplam harf sayısı: " << count_letters(text) << endl;

//     return 0;
    
//     }



#include <iostream>
using namespace std;

int main(){
    int taille;

    //Demander la taille du tableau
    cout<<"Entrez la taille du tableau: ";
    cin>> taille;


    //Allouer dynamiquement un tableau d'entiers
    int* tableau = new int[taille];

    // Lire les valeurs pour remplir le tableau
    cout<<"Entrez" << taille << "entier: " <<endl;
    for(int i = 0; i< taille; ++i){
        cin>> tableau[i];
    }

    // Allouer dynamiquement un second tableau pour les carrés
    int * carres = new int [taille];

    // Calculer les carres et les stocker dans le second tableau
    for(int i = 0; i <taille; ++i){
        carres[i] = tableau[i] * tableau[i];
    }

    //Suprimer le premier tableau
    delete[] tableau;

    // Afficher les valeurs du tableau des carrés
    for(int i = 0; i < taille; ++i){
        cout<<carres[i]<< " ";
    }

    cout<<endl;

    //Supprimer le tableau des carrés

    delete[] carres;
    carres = nullptr; // Bonne pratique pour éviter les pointeurs pendants






    return 0;
}