#include<iostream>
using namespace std;

int sum(int a,int b){
  int c;
  int a = 5;
  int b = 9;
  c = a+b;
  return c;
}

void printHi(){
  cout<<"Hiiiiii"<<endl;
  return;
}

int main(){
  printHi();
  int a,b;
  a = 4;
  b = 5;
  d = sum(a,b);
  cout<<"Sum is equal to: "<<d;
  return 0;
}


HERE IN THE ABOVE CODE: sum(a,b) - WHILE CALLING THE FUNCTION PARAMETERS WHICH WE ARE USING IS CALLED ACTUAL PARAMETER.
                        sum(int a,int b) - PARAMETERS WHICH ARE PASSED WHILE INITILIZATION OF THE FUNCTION IS CALLED FORMAL PARAMETER.
                        ACTUAL PARAMETER IS COPIED TO FORMAL PARAMETER.


LOCAL VARIABLE: ALL THE VARIABLES DEFINED INSIDE THE FUNCTION IS CALLED LOCAL VARIABLE.
SCOPE OF VARIABLE: IS A POINT TILL WHICH VARIABLES IS DEFINED.INSIDE CURLY BRACKETS ONLY.
                                   
