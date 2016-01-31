#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

void minheapyfy(int a[], int n , int i)
{
	int left=2*i+1, right=2*i+2, small=i;
	
	if(left<n && a[left]<a[small])
		small=left;
	if(right<n && a[right]<a[small])
		small=right;
		
	if(small!=i)
	{
		int temp=a[small];
		a[small]=a[i];
		a[i]=temp;
		minheapyfy(a, n, small);
	}
	
}

int main()
{
	int a[]={9,2,7,6,4,3,5,10,1,8};
	int n=10;
	
	int noofinternalnodes=(n-1)/2;
	
	for(int i=noofinternalnodes; i>=0; i--)
	{
		minheapyfy(a, n, i);
	}
	// Build heap DONE
	
	//Sorting to be DONE; 
	for(int i=n-1; i>=0; i--)
	{
		int temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		minheapyfy(a, i, 0);
	}
	
	for(int i=n-1; i>=0; i--)
		cout<<a[i]<<" , ";

}
