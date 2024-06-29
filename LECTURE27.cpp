THIS LECTURE IS ALL ABOUT STRING.

A STRING IS A SEQUENCE OF CHARACTER USED TO REPRESENT A TEXT.IT CAN BE SYMBOLS NUMBER,SPACES,LETTERS.

#include<iostream>
using namespace std;

int main(){
  cin>>name;
for(int i=0;i<5;i++){
    cout<<name[i]<<endl;
}
return 0;
}

A STRING HAS NULL CHARACTER AT THE END.
NOW, TO USE FUNCTIONS IN STRING YOU MUST INCLUDE <string>..

#include<iostream>
using namespace std;

int main(){
  string a;
  string b;
  string c;
  c = a+b;
  cout<<c<<endl;
  cout<<c.length()<<endl;
  return 0;
}

