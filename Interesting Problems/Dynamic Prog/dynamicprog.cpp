#include<iostream>
using namespace std;
int x=0;
int r[10]={0};
int rodcut(int p[],int n);
int main()
{
	int a[10],n;
	for(int i=0;i<10;i++)
	 cin>>a[i];
	cin>>n;
	cout<<rodcut(a,n);
	cout<<endl<<x;
	return 0;
	
}
int rodcut(int p[],int n)
{
	
	 int q=-19999;
	 if(n==0)
	 return 0;
	 if(r[n]!=0)
	 return r[n];
	 for(int i=0;i<n;i++)
	    {q=max(q,(p[i]+rodcut(p,n-i-1)));x++;}
	 r[n]=q;   
	 return r[n];
}
//1 5 8 9 10 17 17 20 24 30
//10
