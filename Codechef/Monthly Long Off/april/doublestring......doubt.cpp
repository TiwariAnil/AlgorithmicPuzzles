
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
          long long num;
          int test;
         scanf("%d",&test); //cin>>test;
           while(test--)
           {
                 scanf("%l",&num); //cin>>num;
                  if(num % 2!=0)
                          num--;
                 printf("%l",num); //  cout<<num;
                        
            }
           system("pause");
  return 0;  
}
