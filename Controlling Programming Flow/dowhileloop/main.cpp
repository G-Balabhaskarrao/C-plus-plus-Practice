#include <iostream>

using namespace std;

int main(){
    
    char selection{};
    
    do{
    
        cout << "\n-----------------------"<<endl;
        cout << "1.Do this" <<endl;
        cout << "2.Do that" <<endl;
        cout << "3.Do something else" <<endl;
        cout << "Q.Quit " <<endl;
        
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        if(selection =='1')
            cout<<"You choose 1 -Doing this"<<endl;
        else if (selection == '2')
            cout<<"You choose 2 -Doing that"<<endl;
        else if (selection == '3')
            cout<<"You choose 3 -Doing something else"<<endl;
        else if (selection == 'Q' || selection == 'q')
            cout<<" Good Bye..."<<endl;
        else
            cout <<"Unknown option --try again..."<<endl;
            
    }while(selection != 'q'&& selection != 'Q');
     
     return 0;
    
}
