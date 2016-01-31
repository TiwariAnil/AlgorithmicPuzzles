#include<iostream>
using namespace std;
int p=0,n,v[20],w[20],table[55][20]={0};
int knap(int c,int i)
{
	p++;
	if(i>=n)
		{
			table[c][i]=0;
			return table[c][i];
		}
	if(c<w[i])
		if(table[c][i+1]==0)
		{	table[c][i+1]=knap(c,i+1);
			return table[c][i+1];
		}
	else
		{
			if(table[c][i+1]==0)
				table[c][i+1]=knap(c,i+1);
			
			if(table[c-w[i]][i+1]==0)
				table[c-w[i]][i+1]=v[i]+knap(c,i+1);
			
			return max(table[c][i+1],table[c-w[i]][i+1]);
		}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++)
		cin>>w[i];
	int c;
	cin>>c;
	cout<<knap(c,0);
	cout<<endl<<p;	
	return 0;
}
