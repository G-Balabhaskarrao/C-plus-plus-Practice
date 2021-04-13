#include <iostream>

using namespace std;

int main(){

 int cents{}, remainder{};
 
 int dollars{0},quarters{0},dimes{0},nickels{0},pennies{0};

 cout << "Enter an amount in cents: ";
 cin >> cents;
 cout << endl;
 
 dollars = cents/100 ; 
 remainder = cents%100;
 
 quarters = remainder/25;
 remainder = remainder%25;
 
 dimes = remainder/10;
 remainder = remainder%10;
 
 nickels = remainder/5;
 remainder = remainder%5;
 
 pennies = remainder;
 
 
cout << "You can provide this change as follows:\n";
cout << "dollars : " << dollars <<endl;
cout << "quarters : " << quarters <<endl;
cout << "dimes : " << dimes <<endl;
cout << "nickels : " << nickels <<endl;
cout << "pennies : " << pennies <<endl;     
    
}
