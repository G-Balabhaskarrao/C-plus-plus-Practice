#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int i,j,k,space;
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int n = str.length();
    cout << " ";
    for( i=1; i<=n; i++){        
        for( j=1; j<=n-i;++j){
        cout << " ";
        }
        for(j=1,k=2*i-1 ; j<=2*i-1 ; j++,k--){
        if(j <= k)
            cout << str[j-1];
        else
            cout << str[k-1];
        }
        cout << endl;
        cout << " ";
    }
    
        
    return 0;
}
