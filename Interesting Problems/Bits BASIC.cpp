#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
	int x;
	cin>>x;
	vector <int> v;
	while(x)
	{
		if(x&1)
			v.push_back(1);
		else
			v.push_back(0);
		x=x>>1;
	}
	int res=0, flag=0;
	for(int i=v.size()-1; i>-1; i--)
	{
		cout<<v[i]<<" ";
	}
	for(int i=0 ; i<v.size(); i++)//-1; i>-1; i--)
	{
		
		if(flag==1)
		{
			res=res<<1;
			cout<<"--"<<res<<endl;
			if(v[i]==1)
				res+=1;
		}
		
		if(v[i]==1 && flag==0)
			flag=1, res=1;
		
	}
	cout<<endl;
	cout<<res;
}
