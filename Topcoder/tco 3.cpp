//Data Structure includes
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
//Other Includes
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<sstream>
//some common functionn
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define FORs(i,a,b)             for(int i=a;i>=b;i--)
#define fill(a,v)               memset(a,v,sizeof a)
#define abS(x)                  ((x)<0?-(x):(x))
#define mP                      make_pair
#define pB                      push_back
#define error(x)                cout << #x << " : " << (x) << endl
#define all(c)                  (c).begin(),(c).end()

using namespace std;
int find(int n, int d, int fs, int ls)
	{
		int tmp, x, a, b, cnt=1, res1=0, res2;
		a=miN(fs, ls);
		b=maX(fs, ls);
		error(a);  error(b);
		//error(cnt); error(n-2);
		while(cnt <= n-2)
		{
			//cout<<"dfa";
			x=cnt*d;
			error(a+x);
			tmp=(a+x) - (n-cnt)*d;
			error(tmp);
			if( tmp < b)
				res1=a+x;
			else
				{
					break;
				}
			cnt++;
		}
		res2=res1;
		cnt=1;
		while(cnt <= n-2)
		{
			x=cnt*d;
			tmp=(b+x) - (n-cnt)*d;
			if( tmp < a)
				res2=b+x;
			else
				{
					break;
				}
			cnt++;
		}
		res1= maX(res1, res2);
		cout<<res1;
		return res1;
	}


int main( int argc, char* argv[] )
{
//n d 
	find(3,5,2,4);
	//2, 7 ,4  
	find(10,100,999,100);
//	find();
//	find();
}

