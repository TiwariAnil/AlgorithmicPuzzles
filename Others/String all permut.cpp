#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;
string tmp;
int cnt=0;
void call(string s, int x, int y)
{
	
	if(s.size()==10)
	{
		cnt++;
		cout<<cnt<<s<<endl;
		return ;
	}
	if(x>0)
	{
		tmp=s+"(";
		call(tmp, x-1, y);
	
	}
	if(y>x && y>0)
	{
		tmp=s+")";
		call(tmp, x, y-1);
	}
	return ;
}


int main()
{
	string s="";
	call(s, 5, 5);
}
