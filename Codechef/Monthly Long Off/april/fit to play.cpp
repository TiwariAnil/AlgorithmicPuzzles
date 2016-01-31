#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
          int test,match=0,pos=0;
          long small=0,big,goal=0,diff=0;
          cin>>test; 
          while(test--)
           {
                  cin>>match;
                  cin>>goal;
                  small=big=goal;
                  pos=match;
                  match--;
                  
                  while(match--)
                    {
                           cin>>goal;
                           if(goal<small && match > pos)
                              { 
                                small=goal;
                                pos=match;
                              }
                           if(goal > big && match < pos)
                               big=goal;         
                               pos1=match;
                                
                      }
                    diff= big-small;
                    if(diff < 1)
                       cout<<"UNFIT";
                    else
                       cout<<diff;   
                  cout<<"\n";      
            }
           system("pause");
  return 0;  
}
