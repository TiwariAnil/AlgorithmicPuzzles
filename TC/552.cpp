#include<iostream>
#include<string.h>
using namespace std;	

class ColorfulChocolates
{
	public:
	int maximumSpread(string chocolates, int maxSwaps)
	{
		int a[100],p,x,i,temp,count=0;
		for(i=65;i<91;i++)
			a[i]=0;
		x=chocolates.length();
		for(i=0;i<x;i++)
		{	p=chocolates[i];	a[p]++;
			
		}
		int max=0;	
		for(i=65;i<91;i++)
		{
			if(a[i]>max)
				max=a[i],temp=i;	
		}
		int lol=0,ff=0;
		for(i=0;i<x;i++)
		{
			p=chocolates[i];
			if(p==temp)
				while(p==temp)
				{
					lol++;
					i++;
					p=chocolates[i];	
					//ff=lol;
				}	
				if(lol>ff)
					ff=lol;	
			lol=0;		
		}
		int ki;
		ki=a[temp]-ff;
		if( maxSwaps>=ki)
			return a[temp];
		else
			return (ff+maxSwaps);
				
	}
	 
};

int main()
{
	ColorfulChocolates t;
	string bricks="SKLDFJKKKK";
	//cout<<t.countLayouts(bricks);
	return 0;
} 
