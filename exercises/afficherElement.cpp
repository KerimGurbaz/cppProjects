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



}