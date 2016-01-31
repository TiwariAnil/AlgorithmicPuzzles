#include<iostream>
#include<stdio.h>
//#include<algorithm>
using namespace std;

class check
{
    public:
    long comb(int n,int r)
    {
        long long temp1,temp2,temp3,temp4;
        if(r==0)
            return 1;
        else
           {    
                temp1=n*(mul(n-1));
				temp2=r*(mul(r-1));
				if(n-r==0)
				temp3=1;
				else
				temp3=(n-r)*mul(n-r-1);
                temp4= temp1/temp2;
           		return temp4/temp3;
		   }     
    }
    long long mul(int a)
    {
		if(a==0)
		return 1;
		return a*mul(a-1);
	}
};    
int main()
{
    //cout<<"akfnadslj";
     check t; 
     //t.find();
     int n,r;
     cin>>n>>r;
     cout<<t.comb(n,r);
     return 0;
}
