#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <int> vector1 ;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << vector1.at(0) << "\n";
    cout << vector1.at(1) << "\n";
    cout << "The size of vector is : " << vector1.size() <<" \n";
    
    vector <int> vector2 ;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << vector2.at(0) << " " << vector2.at(1) << "\n";
    cout << "The size of vector is : " << vector2.size() <<" \n";
    
    
    vector<vector<int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\nEle. of 2D Vector\n";
    cout << vector_2d.at(0).at(0) << "\n";
    cout << vector_2d.at(0).at(1) << "\n";
    cout << vector_2d.at(1).at(0) << "\n";
    cout << vector_2d.at(1).at(1) << "\n";
    
    vector1.at(0)=1000;
    
     cout << "\nUpdated 2D Vector\n";
     
    cout << vector_2d.at(0).at(0) << "\n";
    cout << vector_2d.at(0).at(1) << "\n";
    cout << vector_2d.at(1).at(0) << "\n";
    cout << vector_2d.at(1).at(1) << "\n";
    
    
    cout << "The ele of vector1\n";
    cout << vector1.at(0) <<"\n";
    cout << vector1.at(1) <<"\n";
    
    
    return 0;
}