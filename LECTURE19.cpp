THIS LECTURE IS ALL ABOUT MEMORY ELEMENTS IN C++.
KILO = 10^3 BYTES
MEGA = 10^6 BYTES
GIGA = 10^9 BYTES.
COMPUTER STORES EVERYTHING IN TERMS OF 0/1.

1 BYTE = 8 BITS.
1 BIT STORES 0/1.

CONVERSIONS: 1) CONVERT BINARY TO DECIMAL?
  10(BINARY) TO DECIMAL
  2^1 *1 + 2^0 * 0 = 2(DECIMAL)


  10(DECIMAL) TO BINARY
  10/2 = 5  REM= 0
  5/2 = 2   REM= 1
  2/2 = 1   REM=0
  1/2 = 0   REM=1  //GO FROM BOTTOM TO UP
  (1010)2    //SO 4 BITS OF MEMORY IS NEEDED TO STORE IT.

 ELEMENTS ARE STORED IN BITS AND BITS IS A SINGLE ELEMENT WHICH CAN STORE 0/1.


 #include<iostream>
 using namespace std;
  int main(){
  cout<<"SIZE OF INT IS: "<<sizeof(int);
  return 0;
  }     // OUTPUT WILL BE 4 BYTES. SO 4 BYTE = 4*8 = 32 BITS

MAX AMOUNT OF INTEGER WHICH WE CAN STORE = 2^31.


 #include<iostream>
 using namespace std;
  int main(){
    long long int a;
    int b;
    cout<<sizeof(a)<<sizeof(b); 
    return 0;
  }                      // long long int a = 8 bytes which is 64 bits. So, max amount of long long int which we can store = 2^63 and of int is 2^31.

  
  
