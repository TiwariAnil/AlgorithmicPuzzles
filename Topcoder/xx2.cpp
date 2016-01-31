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

class TheArray
{
public:
	int find(int n, int d, int fs, int ls)
	{
		int tmp, x, a, b, cnt=1, res1=0, res2;
		a=miN(fs, ls);
		b=maX(fs, ls);
		if(abS(b-a) == (n-1)*d)
			return b;
	//	error(a);  error(b);
		//error(cnt); error(n-2);
		while(cnt <= n-2)
		{
			//cout<<"dfa";
			x=cnt*d;
			//error(a+x);
			tmp=(a+x) - (n-cnt-1)*d;
		//	error(tmp);
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
			tmp=(b+x) - (n-cnt-1)*d;
		//	error(tmp);
			if( tmp < a)
				res2=b+x;
			else
				{
					break;
				}
			
			cnt++;
		}
		res1= maX(res1, res2);
		res1 = maX(b, res1);
		//cout<<res1;
		return res1;
	}
};


template<typename T> void print( T a ) {
    cerr << a;
}

void print( long long a ) {
    cerr << a << "L";
}

void print( string a ) {
    cerr << '"' << a << '"';
}

template<typename T> void print( vector<T> a ) {
    cerr << "{";
    for ( int i = 0 ; i != a.size() ; i++ ) {
        if ( i != 0 ) cerr << ", ";
        print( a[i] );
    }
    cerr << "}" << endl;
}

template<typename T> void assert_eq( int n, T have, T need ) {
    if ( have == need ) {
        cerr << "Case " << n << " passed." << endl;
    } else {
        cerr << "Case " << n << " failed: expected ";
        print( need );
        cerr << " received ";
        print( have );
        cerr << "." << endl;
    }
}

template<typename T> void assert_eq( int n, vector<T> have, vector<T> need ) {
    if( have.size() != need.size() ) {
        cerr << "Case " << n << " failed: returned " << have.size() << " elements; expected " << need.size() << " elements.";
        print( have );
        print( need );
        return;
    }
    for( int i= 0; i < have.size(); i++ ) {
        if( have[i] != need[i] ) {
            cerr << "Case " << n << " failed. Expected and returned array differ in position " << i << "." ;           print( have );
            print( need );
            return;
        }
    }
    cerr << "Case " << n << " passed." << endl;
}
void assert_eq( int n, string have, string need ) {
    if ( have == need ) {
        cerr << "Case " << n << " passed." << endl;
    } else {
        cerr << "Case " << n << " failed: expected ";
        print( need );
        cerr << " received ";
        print( have );
        cerr << "." << endl;
    }
}

int main( int argc, char* argv[] )
{

	TheArray objectTheArray;

	//test case0
	int param00 = 3;
	int param01 = 5;
	int param02 = 2;
	int param03 = 4;
	int ret0 = objectTheArray.find(param00,param01,param02,param03);
	int need0 = 7;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 10;
	int param11 = 100;
	int param12 = 999;
	int param13 = 100;
	int ret1 = objectTheArray.find(param10,param11,param12,param13);
	int need1 = 999;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 1000000;
	int param21 = 0;
	int param22 = 474;
	int param23 = 474;
	int ret2 = objectTheArray.find(param20,param21,param22,param23);
	int need2 = 474;
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 97;
	int param31 = 53;
	int param32 = -92;
	int param33 = 441;
	int ret3 = objectTheArray.find(param30,param31,param32,param33);
	int need3 = 2717;
	assert_eq(3,ret3,need3);

	//test case4
	int param40 = 99;
	int param41 = 3;
	int param42 = -743;
	int param43 = -619;
	int ret4 = objectTheArray.find(param40,param41,param42,param43);
	int need4 = -535;
	assert_eq(4,ret4,need4);

}

