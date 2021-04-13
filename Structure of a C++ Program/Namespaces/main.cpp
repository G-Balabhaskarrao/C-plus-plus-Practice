#include <iostream>

 // using namespace std; //use the entire std namespace 
 
 using std::cout;   // use only what you need
 using std::cin;
 using std::endl;

int main(){
    
    int favorite_number;
    cout << "Enter your favorite number between 1 and 100 :";
    cin >>  favorite_number;
    cout << "Amazing!! That's my favorite number too!" << std::endl;
    cout << "No Really!!," << favorite_number <<" is my favorite number!" << std::endl;
    return 0;
}
