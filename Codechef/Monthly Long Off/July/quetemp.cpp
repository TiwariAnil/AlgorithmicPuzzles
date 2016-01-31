#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<cctype>

using namespace std;


class check
{ 
public:

int result()

{
	int n,i,j,a,count=0,b,x,y,tor,z,max,ma[1000],k,s=0,l=0,m=0,f[1000];
	cin>>n;
	for(i=0;i<1000;i++)
	   f[i]=0,ma[i]=0;
	while(n--)
	{
		cin>>a>>b;
		s=0;
		while(b--)
		{	
			cin>>x>>y>>z;
			if(y!=a)
				if(x==1)
				    f[y]=z;//,bhen[y]++;
				else
				     f[y]=f[x]+z,f[x]=0;//,bhen[y]++;
			else
			     ma[x]=f[x]+z,s++;//,bhen[x]++;
				
		}
		max=1000000;
		//cout<<ma[1]<<endl<<bhen[1];
		for(i=0;i<1000;i++)
	        if(ma[i]< max && ma[i]>=1)
			      max=ma[i],tor=i;
		for(i=0;i<1000;i++)
	        if(ma[i]==max)
			      count++;
		//cout<<max<<endl;
		cout<<count<<endl;
		count=0;
		for(i=0;i<1000;i++)
	      f[i]=0,ma[i]=0;
	
	}
	
	
return 0;
}

};


int main()
{
check c;
c.result();

return 0;
}

1
4 7
1 2 3
2 3 6
3 4 7
1 7 16
1  6
1 3 9


