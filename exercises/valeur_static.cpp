#include  <iostream>
using namespace std;

int &f(){
    static int valeur;
    valeur++;
    return valeur;
}

int main(){
    for(int i =0 ; i < 5; i++){
        cout<<f()<<" ";
    }

    f()=-3;
    for(int i = 0; i<5 ; i++){
        cout<<f()<<" ";
    }

    return 0;
}