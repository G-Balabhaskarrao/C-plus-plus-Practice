#include <iostream>

using namespace std;
int main(){
    
    int num1{},num2{};
    const int lower {10};
    const int upper {20};
    
    cout << boolalpha;
  /*  cout <<"Enter a integer - the bounds are "<< lower << " and " << upper << " : ";
    cin  >> num1;
    
    cout << num1 << " is between " << lower << " and " << upper << " : "<< (num1>lower && num1<upper)<<endl;
    */
    
    cout <<"Enter a integer - the bounds are "<< lower << " and " << upper << " : ";
    cin  >> num1;
    
    bool outside_bounds {false};
     
    outside_bounds = (num1<lower || num1>upper);
    cout << num1 << " is outside " << lower << " and " << upper << " : "<< outside_bounds  <<endl;
    
    return 0;
}
