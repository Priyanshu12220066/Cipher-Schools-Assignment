FROM THIS LECTURE THE CONCEPT OF OBJECT ORIENTED PROGRAMMING STARTS.
ENCAPSULATION: BUNDLING OF DATA AND METHOD IN A SINGLE UNIT CALLED CLASS.
 ACCESS SPECIFIERS ARE USED.
 IT HELPS TO ACHIEVE DATA HIDING.

#include<iostream>
using namespace std;

class Student{
      private:
      int marks;
      int attendence;
      string name;

      public:
      void displayMarks(){
        cout<<"Marks";
      }
};
