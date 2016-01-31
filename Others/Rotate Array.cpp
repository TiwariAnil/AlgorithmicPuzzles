#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	int st=0, en=0;
	char tmp;
	string s="a1234bc5d67e9fuck0x";//"ab235cd84ef";
	cout<<s<<endl;
	//if(s[st]<='9' && s[st]>='0')
	//if(s[st]<='z' && s[st]>='a')
	int flag=0, cnt=0;
	cout<<s.size()<<endl;
	//int xx=s.size()-1;
	while(st<s.size() && en<s.size())
	{
		cnt++;
		cout<<cnt<<" : ";
		cout<<s<<endl;
		if(s[en]<='z' && s[en]>='a' && flag==0)	
		{
			en++;
			st++;
		}
		if(s[en]<='9' && s[en]>='0' && flag==0)	
		{
			flag=1;
			en++;
			//st++;
		}
		if(s[en]<='z' && s[en]>='a' && flag==1)	
		{
			tmp=s[en];
			s[en]=s[st];
			s[st]=tmp;
			if(en==s.size()-1)
				break;
		
			st++;
			en=st;
			flag=1;
			
		}
		if(s[en]<='9' && s[en]>='0' && flag==1)	
		{
			tmp=s[en];
			s[en]=s[st];
			s[st]=tmp;
			en++;
			//st++;
		}		
	}
	cout<<s<<endl;
	
}
