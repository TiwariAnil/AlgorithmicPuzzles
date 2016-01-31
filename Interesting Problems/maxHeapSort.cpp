#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

// A simple recursive algorithm just to swap the root and children if
// they are not following the heap property :)
void heapify(int *a, int k, int i)
{
	// left and right are all the positions only NOT VALUES
	int left=2*i+1, right=2*i+2, large=i; // large = ROOT
	if(left<k && a[left]>a[large])  // in limit and is greater
		large=left;
	if(right<k && a[right]>a[large])
		large=right;

	if(large!=i)
	{
		int temp=a[i];
		a[i]=a[large];
		a[large]=temp;
		heapify(a, k, large);
	}
}

int main()
{
	int a[]={9,2,7,6,4,3,5,10,1,8}; //random data
	int k=10;
	// The basic funda = No of internal nodes= (Total_nodes - 1)/2
	int noofinternalnodes=(k-1)/2, temp; //makes a complete tree
	//  Internal nodes = Having one or two children
	//  Here 0, 1, 2, 3, 4 are the internal NODES :)
/*			    0
		   1         2
	  3    4     5   6
   7 8  9 10				*/

	//Build Heap O(k)	// remember that it starts frm the last internal node
	//(infact lowest one)

//	we are modifying the array itself
	for(int i=noofinternalnodes; i>=0; i--)
	{
		//void heapify(int *a, int k, int i)
		heapify(a, k, i);
	}
	// Building Heap ends here

	//Sorting Process
	for(int i=k-1; i>0; i--) // O(nlogk) as for all elements we are removing and hepifying it!
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		// Place that gets imbalaced is 0, Limit= i, array = a[]
		heapify(a, i, 0);
	}
	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
    return 0;
}
