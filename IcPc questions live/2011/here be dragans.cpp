#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
	
class word
{
	public:
	int check()
	{
		string s;
		int t,i;cin>>t;int found;
		for(i=0;i<t;i++)
		{
		 	cin>>s;
		 	found=s.find('D');
		 	if(found!=string::npos)
		 	cout<<"You shall not pass!\n";
			else
			cout<<"Possible\n";
		}	   
	   	 return 0;    
	}
	 

};

int main()
{
	word t;
	t.check();
	return 0;
}
