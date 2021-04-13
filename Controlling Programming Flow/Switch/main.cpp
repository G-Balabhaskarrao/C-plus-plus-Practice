#include <iostream>

using namespace std;

int main(){
    
    char letter_grade{};
    
    cout << "Enter the letter grade you expect on the exam : ";
    cin >> letter_grade;
    
    switch(letter_grade){
    
    case 'a': 
    case 'A':
        cout << "you need 90 or above,study hard!"<<endl;
        break;
    case 'b': 
    case 'B':
        cout << "you need 80-89 for a B, go study!"<<endl;
        break;
    case 'c': 
    case 'C':
        cout << "you need 70-79 for a average grade "<<endl;
        break;
    case 'd':
    case 'D':
        cout << "you should strive foa a better grade.all you need is 60-69"<<endl;
        break;
    case 'f':
    case 'F':
        cout << "XXXX" <<endl;
        break;
    default :
        cout << "Sorry,not a valid grade" <<endl;
    
    }
    
    return 0;
}
