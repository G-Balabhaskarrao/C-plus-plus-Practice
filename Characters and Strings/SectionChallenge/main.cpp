#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key     {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string message ;
    string Emessage ;
    string Dmessage;
    
    
    cout << "Enter your secret message :";
    getline(cin,message);
    
    cout << "Encrypting message ...."<<endl;
    
    for (char c : message){
        size_t position = alphabet.find(c);
        
        if(position != string::npos){
            char new_char {key.at(position)};
            Emessage += new_char; 
        }
        else{
            Emessage += c;
        }
    }
    cout << "Encrypted message : "<< Emessage << endl;
    
 /*   for (char c : message){
        if ( c == ' '){
        cout << " ";
        }
        else{
        int p = alphabet.find(c);
        Emessage[c] = key[p];
        Dmessage[c] = Emessage[c];
        cout << Emessage[c];
        
        
        }  */  
    
       
        cout << "Decrypting message ...."<<endl;
        for (char i : Emessage){
        size_t pos = key.find(i);
        if (pos != string::npos){
            char new_ch {alphabet.at(pos)};
            Dmessage += new_ch;
        }
        else{
            Dmessage += i; 
        }
        }
        cout << "Decrypted message : "<<Dmessage <<endl;
        cout <<endl;
    
        
    
    cout << endl;
    return 0;
}
