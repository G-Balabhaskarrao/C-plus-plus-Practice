#include <iostream>

#include <climits> //make sure u include climits for integer types
                    //similar info. floating point numbers is contained in <cfloat>
                    
using namespace std;

int main(){
    
    cout << "Size of information\n";
    cout << "=====================\n";
    
    cout <<"char : " << sizeof(char) <<" bytes\n";
    cout <<"int : " << sizeof(int) <<" bytes\n";
    cout <<"Unsigned int : " << sizeof(unsigned int) <<" bytes\n";
    cout <<"short : " << sizeof(short) <<" bytes\n";
    cout <<"long : " << sizeof(long) <<" bytes\n";
    cout <<"long long : " << sizeof(long long) <<" bytes\n";
    
    cout<<"=========================="<<"\n";
    
    cout <<"float: "<< sizeof(float) <<" bytes\n";
    cout <<"double: "<< sizeof(double) <<" bytes\n";
    cout <<"long double: "<< sizeof(long double) <<" bytes\n";
    
    //use values defined in <climits>
    cout << "=====================\n";
    
    cout << "Minimum values:" <<endl;
    cout << "char:" << CHAR_MIN <<endl;
    cout << "short:" << SHRT_MIN <<endl;
    cout << "int:" << INT_MIN <<endl;
    cout << "long:" << LONG_MIN <<endl;
    cout << "long long:" << LLONG_MIN <<endl;
    
    cout << "=====================\n";
    
    cout << "Maximum values:" <<endl;
    cout << "char:" << CHAR_MAX <<endl;
    cout << "short:" << SHRT_MAX <<endl;
    cout << "int:" << INT_MAX <<endl;
    cout << "long:" << LONG_MAX <<endl;
    cout << "long long:" << LLONG_MAX <<endl;
    
    
    //size of can also be used with variable names
     cout << "=====================\n";
     
     cout << "sizeof using variable names"<<endl;
     
     int age {21};
     cout << "age is "<< sizeof(age)<<" bytes.\n";
     cout << "age is "<< sizeof age<<" bytes.\n";

     double wage {22.24};
     cout << "wage is "<< sizeof(wage)<<" bytes.\n";
     cout << "wage is "<< sizeof wage<<" bytes.\n";
    
    
    
    
    return 0;
}                    
