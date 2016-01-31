#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>

using namespace std;
string tmp;
int cnt=0, cur=0, lau=0;

void fun(string s, int open,int  close)
{
	string t;
cout<<s<<endl;//	error(s);
	lau++;
	if(close==0)
	{
		cur++;
		cout<<cur<<s<<endl;
		return;
	}
	if(open<close && close>0)
		t=s+")", fun(t, open, close-1);
	if(open>0)
		t=s+"(", fun(t, open-1, close);
}

void call(string s, int x, int y)
{

	if(s.size()==10)
	{
		cnt++;
		cout<<cnt<<s<<endl;
		return ;
	}
	if(x>0 )
	{
		tmp=s+"(";
		call(tmp, x-1, y);

	}
	if(y>0 && x<y)
	{
		tmp=s+")";
		call(tmp, x, y-1);
	}
	return ;
}

int main()
{
	string s="";
	//call(s, 5, 5);
	fun(s, 5, 5);
	cout<<lau;
}
