#include<iostream>
#include<cstdio>
#include<cstdlib>
#define error(x)                cout << #x << " : " << (x) << endl
using namespace std;


int Find_nearst_no(int a[], int n, int k)
{
	int low=0, high=n-1;
	while(low<high)
	{
		int mid=(low+high)/2;
		int x=abs(a[mid]-k);
		int y=abs(a[mid+1]-k);
		if(x<y)
			high=mid;
		else
			low=mid+1;
	}
	error(low);
	error(high);
	return a[low];
}

int main()
{
	int a[]={1,2,3, 4,5,7, 9,11,35, 38,43,50}; // 12
	cout<<Find_nearst_no(a,12, 8);

	return 1;
}


