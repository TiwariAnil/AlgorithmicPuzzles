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

class TheSimilarNumbers
{
public:
	int find(int l, int u)
	{
		int cnt=0;
		while(l<=u)
		{
			cnt++;
			l=l*10+1;
		}
		return cnt;
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
            cerr << "Case " << n << " failed. Expected and returned array differ in position " << i << ".";
            print( have );
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

	TheSimilarNumbers objectTheSimilarNumbers;

	//test case0
	int param00 = 1;
	int param01 = 10;
	int ret0 = objectTheSimilarNumbers.find(param00,param01);
	int need0 = 1;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 5;
	int param11 = 511;
	int ret1 = objectTheSimilarNumbers.find(param10,param11);
	int need1 = 3;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 5;
	int param21 = 4747;
	int ret2 = objectTheSimilarNumbers.find(param20,param21);
	int need2 = 3;
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 1;
	int param31 = 1000000;
	int ret3 = objectTheSimilarNumbers.find(param30,param31);
	int need3 = 6;
	assert_eq(3,ret3,need3);

	//test case4
	int param40 = 10;
	int param41 = 10110;
	int ret4 = objectTheSimilarNumbers.find(param40,param41);
	int need4 = 3;
	assert_eq(4,ret4,need4);

}

