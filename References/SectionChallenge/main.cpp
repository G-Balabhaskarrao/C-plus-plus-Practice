#include <iostream>

using namespace std;

void print(int *a,int n){
    for(int i=0;i<n;i++)
        cout <<  a[i] << " ";
    }

int* apply_all(int *a1,int n1,int *a2,int n2){
    int *res{};
    res = new int[n1*n2];
    int k=0;
    for(int i=0;i<n2;i++){
        for(int j=0;j<n1;j++){
            
            res[k] = a2[i]*a1[j];
            k++;
            }
        }
        return res;
    }

int main(){
    
    const size_t array1_size{5};
    const size_t array2_size{3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array1: ";
    print(array1,array1_size);
    
    cout << "\nArray2: ";
    print(array2,array2_size);
    
    int *results = apply_all(array1,array1_size,array2,array2_size);
    constexpr size_t results_size {array1_size*array2_size};
    
    cout << "\nResult: ";
    print(results,results_size);
    
    cout <<endl; 
    return 0;
}
