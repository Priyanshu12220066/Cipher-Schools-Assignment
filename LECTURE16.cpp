THIS LECTURE IS ALSO ABOUT FUNCTIONS AND WE HAVE LEARNT  SOME RULES LIKE:-

 SAME NUMBER OF PARAMETERS MUST BE PASSED.
 THE SAME POSITION OF PARAMETER MUST BE USED.
 EG: float sample(float a, float b,float c)  // there is a function named sample
    sample(x,y,z);  //same number of parameters must be passed and same position must be used.

ACTUAL PARAMETER:- ALSO KNOWN AS ARGUMENTS. THEY ARE REAL VALUES OR VARIABLES THAT ARE PASSED TO A FUNCTION WHEN IT IS CALLED.
FORMAL PARAMETER:-THEY ARE VARIABLES DEFINED IN FUNCTION DECLARATION OR DEFINATION THAT RECEIVE THE VALUES(ACTUAL PARAMETER) WHEN FUNCTION IS CALLED.

 #include<iostream>
 using namespace std;

int sum(int a,int b){
  int c;
  int a=10;
  int b = 5;
  c = a+b;
  return c;
}

int main(){
  int a,b;
  a=3;
  b=7;
  int c;
  c = sum(a,b);
  cout<<c;
  return 0;
}                        //sum will be 10


          
