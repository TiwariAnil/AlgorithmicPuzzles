
#include<iostream>
using namespace std;
class TheBrickTowerEasyDivTwo
{
	public:
		int find(int redCount, int redHeight, int blueCount, int blueHeight)
		{
			int i,r=redCount, rh=redHeight, b=blueCount, bh=blueHeight;
			int a[r+b],c[r+b];
				for(i=0;i<r+b;i++)
					a[i]=-1,c[i]=-1;
			 i=0;
			int r1=r,b1=b;
			while(r!=0)
			{
				a[i]=rh;c[i+1]=rh;
				i++;
				i++;
				r--;
			}
			i=0;
			while(b!=0)
			{
				c[i]=bh;a[i+1]=bh;
				i++;
				i++;
				b--;
			}
			int sum1=0,sum2=0,count=0,res[((r1*rh)+(b1*bh))];
			for(i=0;i<((r1*rh)+(b1*bh));i++)
				res[i]=0;
			while(a[i]!=-1)
			{
				sum1=sum1+a[i];
				res[sum1]=1;
			
			}
				while(c[i]!=-1)
			{
				sum2=sum2+c[i];
				res[sum2]=1;
			
			}
			for(i=0;i<=sum1 && i<=sum2;i++)
				if(res[i]==1)
					count++;
			return count;
		}
		
		
};



main()
{
	int x;
	cin>>x;
	cout<<x;
}









