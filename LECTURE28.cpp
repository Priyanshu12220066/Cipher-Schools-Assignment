THIS LECTURE IS ABOUT ACCESS SPECIFIERS.
PUBLIC: CAN BE ACCESSED IN ANYWHERE IN PROGRAM.
PRIVATE: ACCESSED OR DECLARED WITHIN SAME CLASS.
PROTECTED: CAN BE ACCESSED WITHIN ITS OWN CLASS BY SUBCLASS.

#include<iostream>
using namespace std;

class student{
      public:
      string name;
      int attendence;
      float total_marks;
      

      void calculate_Percentage(){
        cout<<total_marks<<"%";
      }
};

int main(){
  student a,b,c;
  a.name = "Rohit";
  a.attendence = 90;
  a.total_marks = 70;

  a.calculate_percentage();
  return 0;
}

AS PRIVATE ELEMENTS ARE INACCESSIBLE SO WE USE GET/SET FUNCTIONS. PRIVATE MEMBERS ARE ACCESSIBLE INSIDE THE CLASS.
#include<iostream>
using namespace std;
class applicant{
      public:
      string name;
      float marks;
      int attendence;
      private:
      int cvv;
      int creditcard_no;

      void set_creditcard_no(int number){
        creditcard_no = number;
      }

      void get_creditcard_no(){
        cout<<"The credit card number is: "<<creditcard_no;
      }
};

  
        


