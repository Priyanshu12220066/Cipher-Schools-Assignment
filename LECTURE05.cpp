IN THIS LECTURE I HAVE LEARNT ABOUT CONDITIONAL STATEMENTS IN C++.
STATEMENT:- A STATEMENT IS EITHER TRUE OR FALSE BUT NOT BOTH.
AND - &&
OR - ||
DEMO CODE OF IMPLEMENTATION:
  
#include <iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a;
  cin>>b;
  cin>>c;
  cin>>d;
  if(a>b && c>d){
      cout<<"  "<<endl;
  }
  else if(a<c && d<b){
        cout<<" "<<endl;
  }

  return 0;
}

  
  
  
