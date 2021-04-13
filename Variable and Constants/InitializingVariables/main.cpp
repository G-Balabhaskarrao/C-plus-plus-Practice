#include <iostream>

using namespace std;

// This program calculate area of the room in square feet
int main(){
    
    int room_width {0};
    cout << "Enter room width :";
    cin >> room_width;
    
    int room_length {0};
    cout << "Enter room Length :";
    cin >> room_length;
    
    cout << "The area of the room is " << room_width*room_length << " Square feet" << endl;
    
    return 0;
} 