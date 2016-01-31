#include<iostream>

using namespace std;
	
class word
{
	public:
	int check()
	{
		int n,i,p[7],j,count=1;
		cin>>n;
		int a[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
		for(i=0;i<n;i++)
		{
			cin>>p[i];
		}	
		for(i=0;i<n;i++)
		{
			if(p[i]==0)
			    {cout<<0;i++;	}
			j=0;
			while(p[i] >= a[j] && j<=11)
			{  j++;
			//   if(j==11)
			  //   break;
			
			}
			j--;
			
				
			//j--;
		//	cout<<j;
		//	cout<<p[i];
			p[i]=p[i]-a[j];
		//	cout<<p[i];
			while(p[i]!=0)
			{
				 if(p[i]>=a[j])
			    	 p[i]=p[i]-a[j],count++;//,cout<<p[i];
				 else
				 	 j--;
			}
			cout<<count<<endl;
			count=1;
		}
	return 0;
	}
};

int main()
{
	word t;
	t.check();
	return 0;
}
