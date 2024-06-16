IN THIS LECTURE I HAVE LEARNT ABOUT ACCESSING ELEMENTS IN AN ARRAY.
SO TO ACCESS ELEMENTS IN AN ARRAY WE NEED INDEX.
INDEXING STARTS FROM 0;
FOR EXAMPLE:- int Arr[10]; //array of type int and array name is- Arr.
WE CAN ALSO WRITE LIKE THIS:
int x=1;
Arr[x+2]; //ultimately it will access the 4th element of an array.

Q) TAKE AN ARRAY OF SIZE 5 INPUT FROM USER AND PRINT ITS ELEMENTS.

#include<iostream>
using namespace std;
int main(){
  int a[5];
  //Taking elements input in array
  for(int i=0;i<5;i++){
      cin>>a[i];
  }
  //printing elements of array
  for(int i=0;i<5;i++){
      cout<<a[i]<<" ";
  }
  return 0;
}
