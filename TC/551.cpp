#include<iostream>
#include<string.h>
using namespace std;	

class ColorfulBricks
{
	public:
	int countLayouts(string bricks)
	{
		int a[100],x,i,count=0;
		for(i=65;i<91;i++)
			a[i]=0;
		x=bricks.length();
		for(i=0;i<x;i++)
			a[bricks[i]]=1;	
		for(i=65;i<91;i++)
		{
			if(a[i]>0)
				count++;	
		}
		if(count>2)
			return 0;
		if(count==2)
			return 2;
		if(count==1)
			return 1;		
	}
	 
};

int main()
{
	ColorfulBricks t;
	string bricks="SKLDFJKKKK";
	cout<<t.countLayouts(bricks);
	return 0;
}
