THIS LECTURE IS ALL ABOUT CHARACTER ARRAYS AND STRINGS.

#include<iostream>
using namespace std;
int main(){
  char name[5];
  for(int i=0;i<5;i++){
      cin>>name[i];
  }
  for(int i=0;i<5;i++){
     cout<<name[i];
  }
}                                //taking character array as input and printing it.

WHEN WE DO NOT KNOW THE LENGTH OF INPUT-----> AT LAST ADD '#'.
NAME OF RANDOM LENGTH AS INPUT.

 #include<iostream>
 using namespace std;
 int main(){
   char name[5];
   cout<<"Enter your name: # after end of the name";
   int i=0;
   while(1){
        cin>>name[i];
        if(name[i] == '#') break;
        i++;
   }
 }



STRINGS:- STRING IS A SEQUENCE OF CHARACTERS USED TO REPRESENT A TEXT. IT CAN BE NUMBERS, SYMBOLS, SPACES, LETTERS ETC.

#include<iostream>  
using namespace std;
int main(){
  string name;
  cin>>name;
  cout<<name;
  return 0;
}
    
  
