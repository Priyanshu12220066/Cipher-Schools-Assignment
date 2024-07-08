IN THIS LECTURE I HAVE LEARNT ABOUT INHERITANCE.
INHERITANCE: IT ALLOWS A CLASS TO INHERIT PROPERTIES AND BEHAVIOUR FROM ANOTHER CLASS.
BASE CLASS(PARENT CLASS)
DERIEVED CLASS(CHILD CLASS)

SYNTAX OF INHERITANCE: class derieved class: public base class.

#include<iostream>
using namespace std;
class Bus{
      private:
      int price;
      int mileage;
      int capacity;
      string name;

      public:
      void Calc_mileage(){
        cout<<"Mileage of bus is: "<<mileage;
      }
      void print_Name(){
        cout<<"Name of the bus is: "<<name;
};

int main(){
    Bus a,b;
    a.Calc_mileage();
    b.name();
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------
  NOW A CODE TO EXPLAIN THE CONCEPT OF INHERITANCE.

  #include<iostream>
  using namespace std;
  class Vehicle{
        private: 
        int no_tires;
        string name;
        int capacity;
        int mileage;

        public:
        void Calc_mileage(){
          cout<<"Mileage is: "<<mileage;
        }
};
class schoolBus : public Vehicle{
      string schoolName;
      int Holidays;

      public:
      void Name_of_school(){
        cout<<"Name of the school is: "<<name;
      }
};
       

  
