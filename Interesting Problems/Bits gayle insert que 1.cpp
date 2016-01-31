#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;
vector <int> vec;
void tobin(int x)
{
	
	cout<<endl<<x<<" :";
	while(x!=0)
	{
		if(x&1)
			vec.push_back(1);
		else
			vec.push_back(0);
		x=x>>1;
	}
	for(int i=vec.size()-1; i>=0; i--)
		cout<<vec[i];
	vec.clear();
}
int main()
{//1024 19 2 6
	int n, m, p, q;
	cin>>n>>m>>p>>q;
	int left, temp=1;
		//tobin(temp);
	tobin(n);
	for(int i=0;i<p;i++)
	{
		temp=temp<<1;
		//temp+=1;
	//	cout<<temp<<" ";
		m=m<<1;
	}
	//tobin(temp);
	//tobin(m);
	left= temp & n;
	temp=1;
	for(int i=0; i<=q+1; i++)
	{
		temp<<1;
	}
	temp+=n;
	int right=temp & n;
	cout<<right<<"yes"<<endl;
	right=right | m;
	cout<<right<<endl;
	right=right | left;
	cout<<endl<<"ans: "<<right<<endl;
	tobin(right);
	return 1;
}
