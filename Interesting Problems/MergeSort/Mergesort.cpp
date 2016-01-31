#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
/*
7
5 3 2 6 4 1 7
*/
int fast_int()
{
		int n = 0;
		char c = getchar_unlocked();
		while (!('0' <= c && c <= '9'))
		{
			c = getchar_unlocked();
		}
		while ('0' <= c && c <= '9')
		{
			n = (n<<3)+(n<<1) + c - '0';
			c = getchar_unlocked();
		}
		return n;
}
int n, a[1000009];
void merge( int low, int high, int mid)
{
	// extra space
	int x[1000009];

	int h, i, j, k;
	h=low;
	i=low;
	j=mid+1;
	while( h<=mid && j<=high)
	{
		if(a[h] <= a[j])
		{
			x[i]=a[h];
			h++;
		}
		else
			x[i]=a[j], j++;
		i++;
	}
	if(h>mid)
	{
		for(k=j; k<=high; k++)
		{
			x[i]=a[k];
			i++;
		}
	}
	else
	{
		for(k=h; k<=mid; k++)
		{
			x[i]=a[k];
			i++;
		}
	}
	for(k=low; k<=high; k++)
		a[k]=x[k];
}
void mergesort( int x, int y )
{
	if(y-x>0)
	{
		int mid=x+(y-x)/2;
		mergesort( x, mid);
		mergesort( mid+1, y);
		merge( x, y, mid);
	}
}

int main()
{
	scanf("%d", &n);
	for(int i=0; i<n;i++)
	{
		a[i]=fast_int();//scanf("%d", &a[i]);
	}
	mergesort( 0,  n-1);
	for(int i=0; i<n;i++)
	{
		printf("%d\n", a[i]);
	}
}
