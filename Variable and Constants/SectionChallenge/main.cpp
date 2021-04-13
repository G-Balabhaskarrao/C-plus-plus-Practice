#include <iostream>
using namespace std;

int main(){
    
    cout << "Hello, welcome to frank's carpet cleaning service\n"<<endl;
    
    cout << "How many small rooms would you like cleaned? ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "How many large rooms would you like cleaned? ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;    
    
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "\nEstimate for the carpet cleaning service\n\n";
    cout << "number of small rooms: " << number_of_small_rooms <<"\n";
    cout << "number of large rooms: " << number_of_large_rooms <<"\n";
    
    cout << "price per small room: $"<< price_per_small_room <<"\n";
    cout << "price per large room: $"<< price_per_large_room <<"\n";
    
    cout << "cost: $" 
         << (price_per_small_room*number_of_small_rooms) +
            (price_per_large_room*number_of_large_rooms) 
         <<endl;
    cout << "Tax: $" 
         << ((price_per_small_room*number_of_small_rooms) + 
            (price_per_large_room*number_of_large_rooms))*sales_tax
         <<endl; // 6% tax rate given
    cout << "==============================\n";
    cout << "Total Estimate: $" 
         << ((price_per_small_room*number_of_small_rooms) + (price_per_large_room*number_of_large_rooms))+
            (((price_per_small_room*number_of_small_rooms) + (price_per_large_room*number_of_large_rooms))*sales_tax)
            << endl;
    cout << "This estimate is valid for "<< estimate_expiry << " days.\n";
    
    return 0;
    
}
