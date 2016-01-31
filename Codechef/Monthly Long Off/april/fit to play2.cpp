
#include<iostream>
using namespace std;

int main()
{
          int test,match;
          long small,difffinal,goal,diff=0;
          cin>>test; 
          while(test--)
           {
                  difffinal=0;
                  cin>>match;
                  cin>>goal;
                  small=goal;
                  match--;
                  while(match--)
                    {
                           cin>>goal;
                           diff=goal-small;
                           if(difffinal<diff)
                              difffinal=diff;
                           if(diff<1)
                               small=goal;         
                    }
                   if(difffinal<1)
                       cout<<"UNFIT\n";
                    else
                       cout<<difffinal<<"\n";   
                  
           
            }
         return 0;  
}

