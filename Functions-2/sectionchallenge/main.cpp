#include <iostream>
#include <vector>

using namespace std;



void print_num (vector <int> numbers);
void add_element(vector <int> numbers);
void mean(vector <int> numbers);
void small(vector <int> numbers);
void large(vector <int> numbers);
void unknown();


void print_num (vector <int> numbers){
    
    if( numbers.empty() )
            cout << " [] - the list is empty\n"<<endl;
        else {
             cout << "[";
            for (auto num : numbers){
            cout <<  num << " "; 
            }
            cout << "]";
            cout << endl;
        }
}

void add_element(vector <int> numbers){

    int num1{};
        cout << "Element to be added: ";
        cin >> num1;
        numbers.push_back(num1);
        cout << num1 << " added"<< endl;

}

void mean(vector <int> numbers){
    
    if( numbers.empty() )
            cout << " Unable to calculate mean\n"<<endl;
        else{
            int total {},mean{};
            for ( auto n : numbers){
                total += n;}
            mean = total/numbers.size();
            cout << "Mean of elements is "<< mean <<endl;
            cout << endl;
}
}

void small(vector <int> numbers){

    if( numbers.empty() )
                cout << " Unable to determine smallest number - list is empty \n"<<endl;
            else{
                
                int min {numbers.at(0)};
                
                for (int i {1};i<numbers.size();i++){
                    if (numbers.at(i) < min)
                        min = numbers.at(i);
                }
                cout << "Smallest elements is "<<min <<endl;
                cout << endl;
            }
}

void large(vector <int> numbers){
    
    if( numbers.empty() )
                cout << " Unable to determine large number - list is empty \n"<<endl;
            else{
                
                int max {numbers.at(0)};
                
                for (int i {1};i<numbers.size();i++){
                    if (numbers.at(i) > max)
                        max = numbers.at(i);
                }
                cout << "Largest elements is "<<max <<endl;
                cout << endl;
            }
}

void unknown(){
    cout << "Unkown selection,please try again\n"<< endl;
}


int main(){
    
    
    vector <int> numbers{};
    char choice{};
    
    do{
    
    cout << "P - Print numbers\n";
    cout << "A - Add a number\n";
    cout << "M - Display mean of the number\n";
    cout << "S - Display the smallest number\n";
    cout << "L - Display the largest number\n";
    cout << "Q - Quit\n";
    
    
    
    cout << "Enter your choice: " ;
    cin >> choice ;
    cout << endl;
    
    
    if (choice == 'p' || choice =='P'){
       
     print_num (numbers); 
    }       
    
    else if (choice == 'A' || choice == 'a'){
        
        add_element(numbers);
    }
    
    else if ( choice == 'M' || choice == 'm'){
        mean( numbers);
    }
    
    else if ( choice == 'S' || choice == 's'){
        small(numbers);
    }
    
    
    else if ( choice == 'L' || choice == 'l'){
          large(numbers); 
    }
    
    else { 
       unknown();
    }
    }while((choice != 'q' && choice != 'Q'));
    
    cout <<endl; 
    return 0;
}
