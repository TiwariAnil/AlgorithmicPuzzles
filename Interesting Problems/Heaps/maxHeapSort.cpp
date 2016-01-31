#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

// A simple algorithm just to swap the root and children if
// they are not following the heap property :)
void heapify(int *a, int n, int i)
{
	// left and right are all the positions only NOT VALUES
	int left=2*i+1, right=2*i+2, large=i; // large = ROOT

    // large because maxHeapify
	if(left<n && a[left]>a[large])  // in limit and is greater
		large=left;
	if(right<n && a[right]>a[large])
		large=right;

    // if both kids are not smaller than root then swap the kid and root, and heapify further to fix new issues down the line!
	if(large!=i)
	{
		int temp=a[i];
		a[i]=a[large];
		a[large]=temp;
		heapify(a, n, large);
	}

}

int main()
{
	int a[]={9,2,7,6,4,3,5,10,1,8};
	int n=sizeof(a)/sizeof(int);
	// The basic funda = No of internal nodes= (Total_nodes - 1)/2...........it came from below stuff.
	// It is complete binary tree with n leaf nodes !
	// for n leaf nodes , we have (n-1) internal nodes, so total nodes = n+ n-1 = 2*n -1;
	// so to make our SEGMENT TREE , we will have to use array[2*n-1] size.


	int noofinternalnodes=(n-1)/2, temp;
	//  Internal nodes = Having one or two children
	//  Here 0, 1, 2, 3, 4 are the internal NODES :)
			 /*

			 0
		 1      2
	   3   4   5  6
	 7  8 9  10

			*/

	//Build Heap

	for(int i=noofinternalnodes; i>=0; i--)
	{
		heapify(a, n, i);
	}
	// Building Heap ends here

	//Sorting Process

	for(int i=n-1; i>0; i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
        // After heapify, the largest number comes on 0 ie root, so to sort it, we will keep copying it to end
		// Place that gets imbalaced is 0, Limit= i, array = a[]
		heapify(a, i, 0);
	}
	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
    return 0;
}
