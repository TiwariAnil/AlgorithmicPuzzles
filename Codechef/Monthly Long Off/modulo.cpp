#include<iostream>
using namespace std;
	int ar[100000000];
	int b[100000000];

main()
{
	int temp=1;
	temp=1<<29;

    ar[0]=1;
    for(int i=1;i<=100000000;i++)
    {  if(i<30)
			b[i]=1<<i;
			
		else
		{	b[i]=2*b[i-1];if(b[i]>1000000007)b[i]=b[i]%1000000007;}
		
		ar[i]=ar[i-1]+b[i];
		if(ar[i]>1000000007)ar[i]=ar[i]%1000000007;
		//cout<<ar[i]<<endl;
	}
	cout<<temp<<endl;
	cout<<"1000000007";
}
