#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
//#incluce<cstring>

using namespace std;

int main()
{
	string s="AKJDSJIENCK";
	cout<<s<<endl;
	sort(s.begin() , s.end());
	cout<<s;
}
