#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;
int midf(int x, int y)
{
	return x+(y-x)/2;
}
int cnt=0;
// ss, se <=n is for getting the leaf nodes, index is the position 
// where we will keep store in segment tree
int buildsegtree(int seg[], int a[], int ss, int se, int index)
{         
	cnt++;
	cout<<cnt<<": ";                //start   end    seg tree
	cout<<index<<" lim : "<<ss<<"-"<<se<<endl;
	if(se==ss)
	{
		seg[index]=a[ss];
		return a[ss];
	}
	// if more than one element, then add them from left n right 
	// subtree
	int mid=midf(ss, se);
	seg[index]=(buildsegtree(seg, a, ss, mid, 2*index+1) +
			buildsegtree(seg, a, mid+1, se, 2*index+2));
	return seg[index];	

}	

int main()
{
	int a[]={1,1,2,3,4};//,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int n=sizeof(a)/ sizeof(int);
	n--;
	cout<<n<<endl;
	// It is complete binary tree with n leaf nodes !
	// for n leaf nodes , we have (n-1)/2 internal nodes, (x-1)/2 = n , then x=2*n+1
	// so to make our SEGMENT TREE , we will have to use array[2*n+1] size.
	
	// It wont be a COMPLETE BINARY TREE, it will be "symmetrical" in left and right subtree
	// see fig at GeeksforGeeks, "segment tree for input array{1,3,5,7,9,11}" 
	int LIM=2*n+1+3;
	int seg[LIM]; // +3 for extra
	for(int i=0; i<LIM; i++)
		seg[i]=0;
	
	
	buildsegtree(seg, a, 0, n, 0);
	for(int i=0; i<LIM; i++)
		cout<<seg[i]<<" ";	
	
}
