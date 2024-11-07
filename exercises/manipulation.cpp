#include <iostream>

#include <iomanip>
using namespace std;

int main(){
    int num = -15;

cout << setfill(':') <<setw(5) << left << num << "*\n";
cout << setfill(':') << setw(5) << right << num << "*\n";
std::cout << std::setfill(':') << std::setw(5) << std::internal << num << "*\n";
std::cout << std::setfill(':') << std::setw(5) << std::boolalpha << std::left << (num < 0) << "*\n";
std::cout << std::setfill(':') << std::setw(5) << std::boolalpha << std::left << (num > 0) << "*\n";
std::cout << std::setfill(':') << std::setw(5) << std::noboolalpha << std::left << (num < 0) << "*\n";
std::cout << std::setfill(':') << std::setw(5) << std::noboolalpha << std::left << (num > 0) << "*\n";

double pi = 3.1415926535;
std::cout << std::setprecision(3) << pi << "\n";   // 3.14
std::cout << std::fixed << std::setprecision(5) << pi <<std::flush;  // 3.14159

std::cout << std::showpos << num << "\n";  // +15





    return 0;
}