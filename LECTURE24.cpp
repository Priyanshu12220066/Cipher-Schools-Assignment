IN THIS LECTURE WE HAVE LEARNT PARAMETER PASSING AND RETURN USING POINTERS.
*(pointer_name)-> De-refrencing pointer.

 #include<iostream>
 using namespace std;

 void Swap(int *x , int *y){
   int c;
   c = *x;
   *x = *y;
   *y = c;
   cout<<"Swapping is complete"<<endl;
 }

int main(){
  int a,b;
  a = 3;
  b = 4;
  swap(&a,&b);
  cout<<a<<" "<<b;
  return 0;
}                    //OUTPUT WILL BE: 4 3


IF WE KNOW THE ADDRESS WE CAN CHANGE THE VALUE.
