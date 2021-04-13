#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    
    int random_number {};
    size_t count{10};  //the no.of random no.'s to generate
    int min {1};
    int max {6};
    
    //seed the random no. generator 
    // if you don't seed the generator u will get same sequence random no. every run
    
    cout <<"RAND_MAX on my system is: " << RAND_MAX <<endl;
    //srand(time(nullptr));
    
    for (size_t i{1};i<=count;i++){
        random_number = rand() % max + min; //generating random no. [min,max]
        cout << random_number << endl;
    }
    
    
    
    cout << endl; 
    return 0;
}
