#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cout << "Enter no.of eleme : ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the ele : ";
    for(int i{0}; i<n-1 ;i++)
        cin >> arr[i] ;    
    
    
    for(int j{n-1}; j>=0 ;--j)
        cout << arr[j] << " " ;
    
    return 0;
}
