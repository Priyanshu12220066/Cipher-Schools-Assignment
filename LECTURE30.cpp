THIS LECTURE IS ALL ABOUT CONSTRUCTOR AND DESTRUCTOR.

#include<iostream>
using namespace std;
class Complex{
    public:
    float real;
    float imag;
    void SqdistanceformOrigin(){
      float dist;
      dist  = real*real+imag*imag;
      cout<<"The distance from origin is: "<<dist;
      return;
    }
};
int main(){
  Complex a,b;
  a.SqdistancefromOrigin();
  return 0;
}

------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
class New_account{
    public:
    int amount;
    int days;
    void Initial(){
      amount=0;
      days=0;
    }
};
int main(){
    New_account a;
    a.initial();
    a.amount++;
    a.days++;
    return 0;
}
