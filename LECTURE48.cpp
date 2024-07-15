#include<iostream>
using namespace std;

void printmaxclassattend(int start[],int end[],int class_id[]){
                cout<<"the classes you should attend to cover max";
cout<<class_id[0];
int i;
for(int i=1;i<9;i++){
      if(start[i]>=end[i-1]){
              cout<<class_id[i];
      }
}

int main(){
     int start[] = {2,2,4,1,5,8,9,13};
     int end[] = {3,5,7,8,9,10,11,14,16};
     int class_id[] = {4,2,3,1,5,6,7,8,9};
    void printmaxclassattend(start,end,class_id[]);
     

