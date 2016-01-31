#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
	
class word
{
	public:
	int check()
	{
		int a,b,i;
		cin>>a>>b;
		for(i=0;i<a;i++)
		{
		    scanf("%d",&r[i]) 
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
