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
typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef pair<int,PII> TRI;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;
typedef vector<TRI> VT;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VII> VVII;
typedef vector<VLL> VVLL;
typedef vector<VT> VVT;

class LinearTravellingSalesman
{
public:
	int findMinimumDistance(vector <int> x, vector <int> y)
	{
		//1 2 5 2 2 2
		vector <PII> v, c;
		FOR(i,0,x.size())
		{
			v.push_back(make_pair(x[i], y[i]));
			c.push_back(make_pair(y[i], x[i]));
		}
		sort(all(v));
		sort(all(c));
		int sm1=0, sm2=0;
		FOR(i,1,x.size())
		{
			//error(v[i-1].first);
			sm1+=abS(v[i-1].first - v[i].first) + abS(v[i-1].second - v[i].second);
			sm2+=abS(c[i-1].first - c[i].first) + abS(c[i-1].second - c[i].second);
		}
		return miN(sm1, sm2);
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

 main( int argc, char* argv[] )
{

	LinearTravellingSalesman objectLinearTravellingSalesman;

	//test case0
	vector <int> param00;
	param00.push_back(1);
	param00.push_back(3);
	param00.push_back(5);
	vector <int> param01;
	param01.push_back(2);
	param01.push_back(2);
	param01.push_back(2);
	int ret0 = objectLinearTravellingSalesman.findMinimumDistance(param00,param01);
	int need0 = 4;
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(3);
	param10.push_back(2);
	param10.push_back(1);
	vector <int> param11;
	param11.push_back(3);
	param11.push_back(2);
	param11.push_back(1);
	int ret1 = objectLinearTravellingSalesman.findMinimumDistance(param10,param11);
	int need1 = 4;
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(0);
	param20.push_back(100);
	param20.push_back(1000);
	param20.push_back(10000);
	vector <int> param21;
	param21.push_back(0);
	param21.push_back(10);
	param21.push_back(100);
	param21.push_back(1000);
	int ret2 = objectLinearTravellingSalesman.findMinimumDistance(param20,param21);
	int need2 = 11000;
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(80);
	param30.push_back(60);
	param30.push_back(70);
	param30.push_back(50);
	vector <int> param31;
	param31.push_back(50);
	param31.push_back(70);
	param31.push_back(60);
	param31.push_back(80);
	int ret3 = objectLinearTravellingSalesman.findMinimumDistance(param30,param31);
	int need3 = 60;
	assert_eq(3,ret3,need3);

	//test case4
	vector <int> param40;
	param40.push_back(7);
	param40.push_back(7);
	param40.push_back(7);
	param40.push_back(7);
	param40.push_back(7);
	param40.push_back(7);
	param40.push_back(7);
	vector <int> param41;
	param41.push_back(105);
	param41.push_back(1231);
	param41.push_back(5663);
	param41.push_back(295);
	param41.push_back(3062);
	param41.push_back(380);
	param41.push_back(7777);
	int ret4 = objectLinearTravellingSalesman.findMinimumDistance(param40,param41);
	int need4 = 7672;
	assert_eq(4,ret4,need4);

}

