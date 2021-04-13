#include <iostream>

using namespace std;

int main(){
    
    char vowels[5] {'a','e','i','o','u'};
    cout <<"The first vowel is: "<< vowels[0] <<"\n";
    cout <<"The last vowel is: "<< vowels[4] <<"\n";
    
//    cin >> vowels[5]; //out of bounds - don't do this!!
    
    double hi_temps[] {90.1,89.5,87.5,74.6};
    cout << "The first high temperature is: "<<hi_temps[0]<<"\n";
    hi_temps[0]=100.5;
    cout << "The first high temperature is now: "<<hi_temps[0]<<"\n";
    
    
    int test_score[]{100,90,80,70,60} ;
    
    cout << "\nFirst score at index 0: "<<test_score[0]<<endl;
    cout << "seconde score at index 1: "<<test_score[1]<<endl;
    cout << "third score at index 2: "<<test_score[2]<<endl;
    cout << "fourth score at index 3: "<<test_score[3]<<endl;
    cout << "fifth score at index 4: "<<test_score[4]<<endl<<endl;
    
    cout <<"Enter 5 test scores: ";
    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];
    
    cout <<"\nupdated test scores: "<<"\n";
    cout << "\nFirst score at index 0: "<<test_score[0]<<endl;
    cout << "seconde score at index 1: "<<test_score[1]<<endl;
    cout << "third score at index 2: "<<test_score[2]<<endl;
    cout << "fourth score at index 3: "<<test_score[3]<<endl;
    cout << "fifth score at index 4: "<<test_score[4]<<endl<<endl;
    
    cout << "Notice What value the array name is: "<< test_score<<"\n" ; 
    
    return 0;
    
}
