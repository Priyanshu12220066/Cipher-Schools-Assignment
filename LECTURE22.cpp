 SYNTAX OF A POINTER:- data_type *pointer_name;
 #include<iostream>
 using namespace std;
 int main(){
   int a,b;
   int *p;              //initializing a pointer
   p=&a;                //storing address of variable a in p
   b=*p;                //IT SIMPLY MEANS b=a.
   return 0;
 }

#include<iostream>
using namespace std;
int main(){
  int a,b;
  int *p;
  int *q;
  
  a=1;
  b=4;
  p = &a;
  q = &b;
  int c = *p+*q;
  cout<<c<<endl;
  return 0;
}
