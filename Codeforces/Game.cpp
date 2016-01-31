#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
	
class word
{
	public:
	int check()
	{
		int a,b,c;
		cin>>a>>b>>c;
		while(1)
		{
		    c=c-gcd(a,c);
		    if(c<0)
		      {  cout<<1;break;}
			c=c-gcd(b,c);
		    if(c<0)
			    { cout<<0;break;} 
		}
	   
	   	 return 0;    
	}
	 
	int gcd(int a, int b)
	{
        if(b == 0)
        {
                return a;
        }
        else
        {
                return gcd(b, a % b);
        }
	}
};

int main()
{
	word t;
	t.check();
	return 0;
}
