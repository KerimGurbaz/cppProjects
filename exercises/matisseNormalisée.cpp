#include <iostream>
using namespace std;


void calculerRepresentation(double r, double base, double & mantisse, int & exposant){
        mantisse = r;
        exposant = 0;

        while(mantisse < 0){
            mantisse *= base;
           --exposant;
        }

        while(mantisse >= base){
            mantisse /= base;
            ++exposant;
        }
    }

    


int main(){

    cout<<"Entre un nombre réel : ";
    double r;
    //cin>>r;

    double mantisse;
    int exposant;

    calculerRepresentation(r, 10. , mantisse, exposant);
    cout<<r << "= mantisse" <<"*10^"<< exposant<<endl;

    calculerRepresentation(r, 2. , mantisse, exposant);
    cout<<r << "= mantisse" <<"*2^"<< exposant<<endl;





    



    return 0;
}