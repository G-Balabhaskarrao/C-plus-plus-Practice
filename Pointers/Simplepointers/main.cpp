#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    
   /* int p{10};
    cout << "Value of p is: " << p << endl;
    cout << "size of p is: " << sizeof p << "\n";
    cout << "address of p is: " << &p << endl;*/
    
    int *p;
    cout << "Value of p is: " << p << endl;
    cout << "size of p is: " << sizeof p << "\n";
    cout << "address of p is: " << &p << endl;
    
    p = nullptr;
    cout << "Value of p is: " << p << endl;
    
    cout << endl; 
    return 0;
}
