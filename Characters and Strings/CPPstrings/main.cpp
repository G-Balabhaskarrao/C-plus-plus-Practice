#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1,0,3}; // App
    string s7 (10,'X');
    
/*    cout << s0 <<endl;
    cout << s0.length() << endl;*/
 
//Intialization   
    /*cout << "\nIntilization" << "\n------------------\n";
    cout << "s1 is intialized to:"<< s1 <<endl;
    cout << "s2 is intialized to:"<< s2 <<endl;
    cout << "s3 is intialized to:"<< s3 <<endl;
    cout << "s4 is intialized to:"<< s4 <<endl;
    cout << "s5 is intialized to:"<< s5 <<endl;
    cout << "s6 is intialized to:"<< s6 <<endl;
    cout << "s7 is intialized to:"<< s7 <<endl;*/

//Intialization   
  /*  cout << "\nComparision" << "\n------------------\n";  
    cout <<boolalpha;
    cout << s1 << " == "<< s5 << " : " << (s1==s5) <<endl;
    cout << s1 << " == "<< s2 << " : " << (s1==s2) <<endl;
    cout << s1 << " != "<< s2 << " : " << (s1!=s2) <<endl;
    cout << s1 << " < "<< s2 << " : " << (s1 < s2) <<endl;
    cout << s2 << " > "<< s1 << " : " << (s2 > s1) <<endl;
    cout << s4 << " < "<< s5 << " : " << (s4 < s5) <<endl;*/
    
//  Assignment 
   /* cout << "\nAssignment" << "\n------------------\n";
    
    s1="Watermelon";
    cout <<"s1 now is "<< s1 <<endl;
    s2 = s1;
    cout <<"s2 now is "<< s2 <<endl;
    
    s3="Frank";
    cout <<"s3 now is "<< s3 <<endl;
    
    s3[0]='C';
    cout <<"s3 now is "<< s3 <<endl;
    
    s3.at(0)='P';
    cout <<"s3 now is "<< s3 <<endl;*/

//  Concatenation 
    /*cout << "\nConcatenation" << "\n------------------\n";  

    s3="Watermelon";
    
    s3 = s5+ " and " +s2+" juice ";
    cout <<"s3 now is "<< s3 <<endl;*/
   
//    s3 ="nice"+"cold"+s5+"juice"; //error

//  Looping
   /* cout << "\nLooping" << "\n------------------\n";      
    
    s1="Apple";
    for (size_t i {0};i<s1.length();++i)
        cout << s1.at(i);
    cout << endl;
    
// range based for loop

    for (char c : s1)
        cout << c;
    cout <<endl;*/
    
//  substring
    /*cout << "\nsubstring" << "\n------------------\n"; 
    s1 = "This is a test";
    
    cout << s1.substr(0,4) <<endl;
    cout << s1.substr(5,2) <<endl;
    cout << s1.substr(10,4) <<endl;*/
    
// Erase
 /*   cout << "\nErase" << "\n------------------\n";
    
    s1 = "This is a test";
    s1.erase(0,5);
    cout << "s1 is now: "<< s1 <<endl;*/
    
// getline
    
  /*  cout << "\n getline" << "\n------------------\n";   
    string full_name{};
    cout <<"Enter full name:";
    getline(cin,full_name);
    
    cout << "YOur full name is:"<< full_name <<endl;
    */
    
 // find
    cout << "\n find" << "\n------------------\n";
    
    s1="The secret word is Boo";
    string word{};
    
    cout<<"Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if(position != string::npos)
        cout << " Found " <<word <<" at position "<<position<<endl;
    else
        cout << "Sorry "<<word <<"not found "<<endl;
    
    
    cout << endl; 
    return 0;
}
