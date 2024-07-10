#include<iostream>
using namespace std;
int main(){
  stack <int> a;
  a.push(5);
  a.push(6);
  a.push(7);
  cout<<a.top();
  a.pop();
  cout<<a.top();

  if(a.empty() == 0){
    cout<<"STack is empty"<<endl;
  }else{
      cout<<"STack is not empty"<<endl;
      a.pop();
      a.pop();
  }
  return 0;
}


#include<iostream>
using namespace std;
int main(){
  queue <int> a;
  a.push(5);
  a.push(6);
  a.push(7);
  cout<<a.top();
  a.pop();
  cout<<a.top();

  if(a.empty() == 0){
    cout<<"queue is empty"<<endl;
  }else{
      cout<<"queue is not empty"<<endl;
      a.pop();
      a.pop();
  }
  return 0;
}



MAP- IT IS ASSOCIATIVE CONTAINER THAT STORES KEY VALUE PAIRS.
SYNTAX - map <key,value> mapname;
ALLOWS EFFICIENT LOOKUP, DELETION,INSERTION BASED ON THEIR KEY.
KEY VALUE PAIRS ARE STORED IN SORTED ORDER.

#include<iostream>
#include<map>  
using namespace std;
int main(){
  map <string,int> hash;
  hash["rohit"] = 1;
  hash["programming"]  = 2;
  hash["ready"] = 3;
  cout<<"value of rohit in hashtable is: "<<hash["rohit"];
  return 0;
}


TO PRINT KEY VALUE PAIRS ALL AT ONCE:-
#include<iostream>
#include<map>  
using namespace std;
int main(){
  map <string,int> hash;
  hash["rohit"] = 1;
  hash["programming"]  = 2;
  hash["ready"] = 3;
  for(auto j = hash.begin(); j!= hash.end();j++){
    cout<<"Key will be: "<<j->first<<"VAlue will be: "<<j->second;
  }
  return 0;
}


LINKED LIST: 
#include<iostream>
#include<list>
using namespace std;

int main(){
  list <int> a;
  a.push_back(4);
  a.push_front(6);
  a.push_back(7);
  a.push_front(2);
  a.pop_back();
  a.pop_front();

  for(auto i = a.begin(); i!=a.end();i++){
      cout<<*i;    //get the value stored at linked list
  }
  return 0;
}







  

  
