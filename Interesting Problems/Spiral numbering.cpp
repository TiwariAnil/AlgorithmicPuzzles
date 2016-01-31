#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	int n, mid;
	cin>>n;
	int a[10][10];
	if(n%2==0)
		mid=n/2-1;
	else
		mid=n/2;//-1;
	int no=1;
	n--;
	cout<<mid<<endl<<endl;
	for(int i=0; i<=mid; i++)
	{
		
		for(int col=i; col<=n-i; col++)
		{
			a[i][col]=no;
			no++;
		}
		for(int j=i+1; j<=n-i; j++  )
		{
			//cout<<"("<<j<<","<<n-i<<")";
			a[j][n-i]=no;
			no++;
		}
		for(int col=n-i-1; col>=i; col-- )
		{		
			a[n-i][col]=no;
			no++;
		}
		for(int row=n-i-1; row>=i+1 ; row--)
		{
			a[row][i]=no;
			no++;
		}
	}
	for(int i=0 ; i<=n; i++)
	{
		for(int j=0; j<=n; j++)
		{
			cout<<a[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	
}
