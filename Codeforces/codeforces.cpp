#include<iostream>
#include<stdio.h>
//#include<algorithm>
using namespace std;

class check
{
    public:
    int find()
    {
        long long n,v[5],k[5]={0,0,0,0,0},i,sum=0;
        cin>>n;
        long long f[n];
        for(i=0;i<n;i++)
        {
            cin>>f[i];
        }
        for(i=0;i<5;i++)
        {
            cin>>v[i];
        }
        for(i=0;i<n;i++)
        {
            sum=sum+f[i];
             while(sum>=v[0])
             { if(sum>=v[4])
                 sum-=v[4],k[4]++;
               else if(sum>=v[3])
                 sum-=v[3],k[3]++;
                else if(sum>=v[2])
                 sum-=v[2],k[2]++;
               else if(sum>=v[1])
                 sum-=v[1],k[1]++; 
               else
                 sum-=v[0],k[0]++;           
             }
        }
        for(i=0;i<5;i++)
        {
            cout<<k[i]<<" "; 
        }
        cout<<endl;
        cout<<sum;
             
        return 0;
    }
};    
int main()
{
    //cout<<"akfnadslj";
     check t; 
     t.find();
     return 0;
}
