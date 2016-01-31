
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;
int main()
{
           long long i,j,num;
           long long *sum_prime;
           sum_prime=new long long [1000000];        //this is how the array is decleard dynamically in a c++ language....fuck again...
           long long *a;
           a=new long long [1000000];
           int test;
           cin>>test;
           sum_prime[0]=sum_prime[1]=0;
           /*for(i=2;i<1000000;i++)
           {
                a[i]=1;
           }   */
           for(i=2;i<1000;i++)                  // for 100 factorial yu hav to take the values below 10 i=2,3,5,7 nd all but here
           {                                    //you r fucking the value around 10^6 so 10^3 will do the job ,,,,u asshole :/ 
                if(a[i]==0)
                {
                           for(j=i*2;j<1000000;j+=i)
                           a[j]=1;
                }
           }
           
           for(i=2;i<1000000;i++)
           {                                            
                if(a[i]==0)
                {
                           sum_prime[i]=sum_prime[i-1] + i;
                }
                else
                {
                           sum_prime[i]=sum_prime[i-1];
                }
           }          
           for(int i=0;i<test;i++)
           {
                cin>>num;
                if(num==1000000)
                    cout<<sum_prime[num-1]<<endl;
                else
                    cout<<sum_prime[num]<<endl;
           }
           //system("pause");
  return 0;  
}
