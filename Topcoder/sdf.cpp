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
typedef pair<int,int> PII;

class BallsSeparating
{
public:
	int minOperations(vector <int> r, vector <int> g, vector <int> b)
	{
		
		if(r.size()<3)
		{
			return -1;
		}		
		//vector <PII> rr;
		int sr=0, mm=0, xx;
		vector <int> ff;
		FOR(i,0,r.size())
		{
			xx=max(max(r[i], b[i]), g[i]);
			mm+=xx;
			ff.push_back(xx);
			sr+=r[i]+b[i]+g[i];
		}
		int rc=0, bc=0, gc=0;
		FOR(i,0,r.size())
		{
			if(ff[i]==r[i])
				rc++;
			if(ff[i]==b[i])
				bc++;
			if(ff[i]==g[i])
				gc++;
		}
		int ab[100];
		FOR(i,0,55)
		{
			ab[i]=0;
		}
		int mins=10000009;
		if(rc==0)
		{
			mins=10000009;
			FOR(i,0,r.size())
			{
				if(mins>ff[i]-r[i])
					mins=ff[i]-r[i];
			}
			mm-=mins;
		}
		if(bc==0)
		{
			mins=10000009;
			FOR(i,0,r.size())
			{
				if(mins>ff[i]-b[i] && ab[i]==0)
					mins=ff[i]-b[i], ab[i]=1;
			}
			mm-=mins;
		}
		if(gc==0)
		{
			mins=10000009;
			FOR(i,0,r.size())
			{
				if(mins>ff[i]-g[i] && ab[i]==0)
					mins=ff[i]-g[i];
			}
			mm-=mins;
		}
		return sr-mm;
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

	BallsSeparating objectBallsSeparating;

	//test case0
	vector <int> param00;
	param00.push_back(1);
	param00.push_back(1);
	param00.push_back(1);
	vector <int> param01;
	param01.push_back(1);
	param01.push_back(1);
	param01.push_back(1);
	vector <int> param02;
	param02.push_back(1);
	param02.push_back(1);
	param02.push_back(1);
	int ret0 = objectBallsSeparating.minOperations(param00,param01,param02);
	int need0 = 6;
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(5);
	vector <int> param11;
	param11.push_back(6);
	vector <int> param12;
	param12.push_back(8);
	int ret1 = objectBallsSeparating.minOperations(param10,param11,param12);
	int need1 = -1;
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(4);
	param20.push_back(6);
	param20.push_back(5);
	param20.push_back(7);
	vector <int> param21;
	param21.push_back(7);
	param21.push_back(4);
	param21.push_back(6);
	param21.push_back(3);
	vector <int> param22;
	param22.push_back(6);
	param22.push_back(5);
	param22.push_back(3);
	param22.push_back(8);
	int ret2 = objectBallsSeparating.minOperations(param20,param21,param22);
	int need2 = 37;
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(7);
	param30.push_back(12);
	param30.push_back(9);
	param30.push_back(9);
	param30.push_back(7);
	vector <int> param31;
	param31.push_back(7);
	param31.push_back(10);
	param31.push_back(8);
	param31.push_back(8);
	param31.push_back(9);
	vector <int> param32;
	param32.push_back(8);
	param32.push_back(9);
	param32.push_back(5);
	param32.push_back(6);
	param32.push_back(13);
	int ret3 = objectBallsSeparating.minOperations(param30,param31,param32);
	int need3 = 77;
	assert_eq(3,ret3,need3);

	//test case4
	vector <int> param40;
	param40.push_back(842398);
	param40.push_back(491273);
	param40.push_back(958925);
	param40.push_back(849859);
	param40.push_back(771363);
	param40.push_back(67803);
	param40.push_back(184892);
	param40.push_back(391907);
	param40.push_back(256150);
	param40.push_back(75799);
	vector <int> param41;
	param41.push_back(268944);
	param41.push_back(342402);
	param41.push_back(894352);
	param41.push_back(228640);
	param41.push_back(903885);
	param41.push_back(908656);
	param41.push_back(414271);
	param41.push_back(292588);
	param41.push_back(852057);
	param41.push_back(889141);
	vector <int> param42;
	param42.push_back(662939);
	param42.push_back(340220);
	param42.push_back(600081);
	param42.push_back(390298);
	param42.push_back(376707);
	param42.push_back(372199);
	param42.push_back(435097);
	param42.push_back(40266);
	param42.push_back(145590);
	param42.push_back(505103);
	int ret4 = objectBallsSeparating.minOperations(param40,param41,param42);
	int need4 = 7230607;
	assert_eq(4,ret4,need4);

}

