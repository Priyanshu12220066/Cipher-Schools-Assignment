STL(STANDARD TEMPLATE LIBRARY):- powerful library in c++ that provides reusable data structures and algorithms.
VECTOR:- DYNAMIC ARRAY WHOSE SIZE IS NOT FIXED AND ALLOCATE MEMORY EVERYTIME YOU ADD A NEW ELEMENT.

 #include<iostream>
 using namespaces std;
 int main(){
    int *arr;
    arr = new int[5];
    delete arr;
    vector <int> a;
    cout<<"Size of the vectoe is: "<<a.size();
    for(int i=0;i<5;i++){
        a.push_back(i+1);
    }
    cout<<"SIZE OF THE VECTOR IS: "<<a.size();
