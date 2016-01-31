#include<vector>
#include<set>
#include<map>
#include<queue>
#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<sstream>

#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define error(x)                cout << #x << " : " << (x) << endl

using namespace std;


int main()
{

	long long n, x, y;
	cin>>n>>x>>y;
	long long result;
	result=(n+1)*(n+2)/2;
	cout<<result<<endl;
    return 0;
}
