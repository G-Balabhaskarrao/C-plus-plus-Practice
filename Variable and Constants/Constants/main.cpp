#include <iostream>
using namespace std;

int main(){
    
    cout << "Hello, welcome to frank's carpet cleaning service\n"<<endl;
    
    cout << "How many rooms would you like cleaned? ";
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room {32.5};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "\nEstimate for the carpet cleaning service\n\n";
    cout << "number of rooms: " << number_of_rooms <<"\n";
    cout << "price per room: $"<< price_per_room <<"\n";
    cout << "cost: $" << price_per_room*number_of_rooms <<endl;
    cout << "Tax: $" << price_per_room*number_of_rooms*sales_tax<<endl; // 6% tax rate given
    cout << "==============================\n";
    cout << "Total Estimate: $" << (price_per_room*number_of_rooms)+(price_per_room*number_of_rooms*sales_tax) << endl;
    cout << "This estimate is valid for "<< estimate_expiry << " days.\n";
    
    
    
}
