#include<iostream>
#include<cstdio>
#include<cstdlib>


int main()
{
	int x;
	std:: cin>>x;
	//int t= x & (x-1);
	//std:: cout<<t;
	if( (x & (x-1)) ==0)
		std:: cout<<"Yes";
	else
		std:: cout<<"No";
	return 1;
}
