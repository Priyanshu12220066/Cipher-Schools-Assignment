CODE FOR SELECTION SORT.
#include<iostream>
using namespace std;

int main(){
    int a[10];
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
  
    // Selection sort algorithm
    for(int i=0; i<10; i++){
        int least_index = i;
        for(int j=i+1; j<10; j++){
            if(a[j] < a[least_index]){
                least_index = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = a[i];
        a[i] = a[least_index];
        a[least_index] = temp;
    }
  
    cout << "Elements after sorting: " << endl;
    for(int i=0; i<10; i++){
        cout << a[i] << endl;
    }
  
    return 0;
}
