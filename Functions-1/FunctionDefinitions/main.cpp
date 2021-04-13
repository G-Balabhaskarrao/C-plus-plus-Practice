#include <iostream>

using namespace std;

const double pi {3.14159};
double cal_area_circle(double radius){
    return pi*radius*radius;
}
void area_circle(){
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    
    cout << "The area of the circle with the radius "<<radius<< " is "<< cal_area_circle(radius) <<endl;
}

double cal_vol_cyli(double radius,double height){
    return pi*radius*radius*height;
}

void volume_cylinder(){
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of the cylinder with the radius "<< radius << " and height "<< height <<" is " <<cal_vol_cyli(radius,height) <<endl;
}


int main(){
    
    area_circle();
    volume_cylinder();
    
    
    cout << endl; 
    return 0;
}
