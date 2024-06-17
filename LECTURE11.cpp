IN THIS LECTURE I HAVE LEARNT ABOUT WHILE-LOOPS.
WE CAN USE WHILE LOOPS AND FOR LOOPS INTERCHANGEBLY.

SYNTAX OF WHILE LOOP:
while(condition){
    //code
}

EXAMPLE:
#include<iostream>
using namespace std;
int main(){
  int i=1;
  while(i<101){
      cout<<i<<endl;  //loop
      i++;      //update
  }
  return 0;
}


BREAK STATEMENT: IT IS USED TO STOP THE EXECUTION OF PROGRAM.
EXAMPLE: NUMBER GUESSING CODE, IF INPUT IS 65 BREAK IT, AND PRINT CONGRATS YOU HAVE GUESSED IT RIGHT.

#include <iostream>
using namespace std;

int main(){
        int a;
        for(int i=1;i<101;i++){
                cin>>a;
                if(a==65){
                        cout<<"congrats you guessed right!!!!";
                        break;
                }
        }
}


  


