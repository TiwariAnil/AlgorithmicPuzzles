#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
void tobin(int x)
{
	if(x==0)
		return ;
	tobin(x>>1);
	if(x&1)
		cout<<"1";
	else
		cout<<"0";
	return ;
}



int main()
{
	int x=10;
	int arr[7]={1,2,3,4,5,6,7};
	int n=6;
	//tobin(10);
	cout<<endl;
	int  pos=0, swap=4;
 

	int temp1,temp=arr[0], temp0=arr[0];

	for(int i=0; i<n; i++)
	{
	
		temp1=arr[(pos+swap)%n];	
		arr[(pos+swap)%n]=temp0;
		pos=(pos+swap)%n;
		temp0=temp1;
	}

	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}
