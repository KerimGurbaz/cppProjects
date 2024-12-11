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


/*
#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    //Constructor to initialize the radius(default radius is 1.0)
    Circle(double r = 1.0) {
        if(r > 0) {
            radius =r;
        }else {
            cerr<<"invalide radius. Setting radius to 1.0 by default.\n";
            radius =1.0;
        }
    }

    // Member function to set the radius
    void setRadius(double r) {
        if(r > 0) {
            radius = r;
        }else {
            cerr<< "invalid radius. Radius remaing unchanged.\n";
        }
    }

    //Member function to get the radius
    double getRadius()const {
        return radius;
    }

    // Member function to calculate the area of circle
    double calculateArea() const {
        return M_PI * radius*radius;
    }

    // Member function to calculate the circumference of the circle
    double calculateCircumference() const {
        return 2 * M_PI * radius;
    }
};

int main() {
    //Create a circle object with default radius
    Circle circle1;

    //Create a Circle object with a specific radiius
    Circle circle2(5.0);

    // Display area and circumference for circle1
    cout<<"Circle 1 (default Radius): \n";
    cout<<"Radius : "<<circle1.getRadius()<<endl;
    cout<<"Area: "<<circle1.calculateArea()<<endl;
    cout<<"Circumference: "<<circle1.calculateArea()<<endl;

    // Display area and circumference for circle2
    std::cout << "Circle 2 (Radius = 5.0):\n";
    std::cout << "Radius: " << circle2.getRadius() << "\n";
    std::cout << "Area: " << circle2.calculateArea() << "\n";
    std::cout << "Circumference: " << circle2.calculateCircumference() << "\n\n";

    // Modify the radius of circle1 and display the updated values
    circle1.setRadius(3.0);
    std::cout << "Circle 1 (Updated Radius = 3.0):\n";
    std::cout << "Radius: " << circle1.getRadius() << "\n";
    std::cout << "Area: " << circle1.calculateArea() << "\n";
    std::cout << "Circumference: " << circle1.calculateCircumference() << "\n";









    return 0;
}
*/
