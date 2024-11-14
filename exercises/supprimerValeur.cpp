#include <iostream>
using namespace std;

void afficher(int t[], unsigned s){

    cout<<"[";
    for(unsigned i = 0; i<s ; i++){
        cout<<t[i];
        if(i< s-1){
            cout<<", ";
        }
    }
    cout<<"]";
}