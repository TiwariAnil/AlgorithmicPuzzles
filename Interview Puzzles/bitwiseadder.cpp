#include<iostream>
using namespace std;
int add_numbers(int a, int b)
{
int carry_out;
   while (b != 0)     // run loop untl carry is not zero
   {
     a = a ^ b;      // Sum of bits of x and y
     carry_out = a & b;     // carry_out contains common bits of a and
    b = carry_out << 1;      // Carry is shifted by one and then XOR is performed to get the desired answer
   }
 return a;
}

main()
{
      int a,b;
      cin>>a>>b;    
      
}
