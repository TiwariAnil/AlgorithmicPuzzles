#include<iostream>
using namespace std;
int main()
{
int j,t,n;
cin>>t;

long a[1000];
int i;
a[0]=2;
a[1]=5;
for(i=2;i<1000;i++)
{
a[i]=(2*a[i-1])+a[i-2];

}

for(i=0;i<t;i++)
{
    cin>>n;
	cout<<(a[n-1]%1000000007)<<endl;

}

return 0;
}
