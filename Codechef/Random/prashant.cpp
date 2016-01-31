#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{ int n,c=1;int l,m;
cin>>n;
int a[24][59]={0};
for(int i=0;i<n;i++)
{scanf("%d %d",&l,&m);
a[l][m]+=1;
}
for(int j=0;j<=23;j++)
{
for(int p=0;p<=59;p++)
{if(a[j][p]>1)c++;
}
}
cout<<c;
return 0;

}
