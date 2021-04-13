#include <iostream>

using namespace std;

int main(){
    \
    int total{};
    int num1{},num2{},num3{};
    static int count{3};
    
    cout << "Enter 3 integers separated by space: ";
    cin >> num1 >> num2 >> num3 ;
    
    total = num1+num2+num3;
    
    double average {};
    
    average = static_cast<double>(total)/count;
    
    cout << "\nThe 3 numbers were " << num1 << "," << num2 << "," <<num3<<endl;
    cout << "The sum of the numbers is "<< total << endl;
    cout << "The average of the 3 numbers is "<< average <<endl;
    
    return 0;
    
}
