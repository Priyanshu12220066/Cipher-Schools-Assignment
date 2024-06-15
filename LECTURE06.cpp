IN THIS LECTURE I HAVE LEARNT ABOUT IF-ELSE CONDITIONAL STATEMENT AND ELSE-IF.

CODE 1;
#include<iostream>
using namespace std;
int main(){
  float a;
  cin>>a;
  if(a>0.01){
    cout<<"The condition in if statement is true";
  }else{
    cout<<"The condition in if statement is false";
  }
  return 0;
}



CODE 2:
#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a>b && c>d){
    cout<<"HAHA";
  }
  else if(a>b && c<d){
      cout<<"HEHE";
  }
  else if(a<b && c>d){
      cout<<"HUHU";
  }else{
      cout<<"Nothing";
  }
  return 0;
}

SWITCH CASE:
CODE 3:

#include<iostream>
using namespace std;
int main(){
  int a;
  cin>>a;
  switch(a){
case 1:
     cout<<"The value of a is 1";
     break;  
case 2:
     cout<<"The value of a is 2"; 
     break;
default:
     cout<<"default will always be printed";
     break;
  }
return 0;
}

  
  
