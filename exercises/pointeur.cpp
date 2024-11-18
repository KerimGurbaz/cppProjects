#include <iostream>
using namespace std;

int main (){
    int t[4] = {10, 20, 30, 40};
    int *ad[4];

    for(int i = 0; i<4 ; i++){
        ad[i]=t+i;
    }

       for(int i=0; i<4 ; i++){
            cout<<*ad[i]<< " ";
        }
        cout<<"\n";

    cout<<*(ad[1]+1)<< " "<< *ad[1] + 1<< "\n";

    return 0;

}