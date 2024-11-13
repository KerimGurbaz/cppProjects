#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

double apply_op( double x, double y, char op){
    switch(op){
        case '+' : return x + y;
        case '-' : return x - y;
        case '*' : return x * y;
        case '/' : 
            if(y != 0) return x/y;
            else return nan("");
        default : return nan("");
    }
}


int main(){

    cout<<apply_op(2., 3., '*') << endl;
    cout<<apply_op(4., 5., '+') << endl;
    cout<<apply_op(3., 3., '/') << endl;
    cout<<apply_op(2., 3., '&') << endl;


string s("012345");
string t(s.size(), 'x');
copy(s.begin() + 1, s.begin() + 4, t.begin() + 2);
cout << t;



    return 0;



}
