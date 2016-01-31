
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
          long long num;
          int test;
          cin>>test; 
           while(test--)
           {
                  cin>>num;
                  
                  if(num % 2!=0 )
                          num--;
                 cout<<num;  
                  cout<<"\n";      
            }
           
  return 0;  
}
