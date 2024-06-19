Q) COMPARE TWO INTEGERS AND RETURN THE GREATEST USING FUNCTION.

#include<iostream>
using namespace std;

int compare(int a, int b){
  int c;
  if(a>b){
    c=a;
  }
  else{
    c=b;
  }
  return c;
}

int main(){
  int a = 5;
  int b = 6;
   
  cout<<"THE GREATEST NUMBER AMONG A AND B IS: ";
  compare(a,b);
  return 0;
}

NOW AS WE KNOW A FUNCTION CAN HAVE MULTIPLE RETURN STATEMENTS BUT A SINGLE RETURN VALUE:

#include<iostream>
using namespace std;

int compare(int a, int b){
  
  if(a>b){
    return a;
  }
  else{
    return b;
  }
  
}

int main(){
  int a = 5;
  int b = 6;
   
  cout<<"THE GREATEST NUMBER AMONG A AND B IS: ";
  compare(a,b);
  return 0;
}
      
