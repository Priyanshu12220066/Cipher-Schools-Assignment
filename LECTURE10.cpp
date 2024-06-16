PRE-INCREMENT(++i):VALUE IS CHANGED BEFORE COUT STATEMENT.
POST-INCREMENT(i++): VALUE IS CHANGED AFTER COUT STATEMENT.

CONDITION: IT DETERMINES THAT UPTO WHEN LOOP SHOULD RUN OR WE CAN SAY LOOP SHOULD RUN OR STOP.

SAMPLE CODE:
#include<iostream>
using namespace std;
int main(){
  int arr[5];
  for(int i=0;i<5;i++){
      cin>>arr[i];
  }
  for(int i=0;i<5;i++){
      cout<<arr[i];
  }
  return 0;
}
  
