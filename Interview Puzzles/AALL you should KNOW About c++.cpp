//  ALL YOU SHOULD KNOW ABOUT C++;  I LOVE YOU ..........
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;   //use so that std::cout<<""; like thing are replaced by just cout<<"";  
                       //:) no scope resolution operator :: is to be used
//#define is executed by compiler pre processor......
#define NEWLINE '\n'  // here data type is not important , but data is wahat it really matters
                     // so any thing you can put float to string
#define anil "enter the value here......."                                            

//type constant
const int pathwidth = 100;
const char tabulator = '\t';






main()
{
      cout<<NEWLINE;
      int x(20);
      cout<<x<<endl;
      
                                  //char l[30]("dont be over confidence");  //its wrong
      string l("i love india");  //have to add #include<string>....
      cout<<l<<endl;
      
     
     
      int a, b , c;
      a=75;   //decimal
      b=0113;  //octal
      c=0x4b;   //hexadecimal
      cout<<endl<<a<<"\t"<<b<<"\t"<<c;  // al r just 75... 75  75 75
       
     
     
       int z;
       z=75; // int
       z=75u; // unsigned int
       z=75l ;// long
       z=75ul ;// unsigned long
       cout<<endl<<z<<endl;
      
     
     
      float h;
      h=3.14159;  // 3.14159
      h=6.02e23 ; // 6.02 x 10^23
      h=1.6e-19 ; // 1.6 x 10^-19
      h=3.0 ;     // 3.0
      h=3.14159L; // long double
      cout<<h<<endl; //  o/p  3.14159
      h=6.02e23f; // float
      cout<<h<<endl; // output   6.02e+0e23........??
      
     
     
      bool p(true),y[10], w[20]={false};//sexy,{0 or false works bt true does not}
      cout<<p<<endl;  //  o/p   1
//      for(int i=0;i<2000;i++)
  //       cout<<y[i]<<"  "; // we r printing it  2000 time bt decrleration is only 
                          // for 10 times, it takes extra values as it is the 
                          // the sequence of memory adrress, if it is free, it will read it
      for(int i=0;i<20;i++)
         cout<<w[i]<<"  ";
       
      
      
      
      getch();
}      
