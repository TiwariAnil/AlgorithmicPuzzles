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

class Chopsticks
{
public:
	int getmax(vector <int> l)
	{
		int x[106];
		FOR(i,0,106)
			x[i]=0;
		FOR(i,0,l.size())
		{
			x[l[i]]++;
		}
		int sm=0;
		FOR(i,0,106)
		{
			sm+=x[i]/2;
		}
		return sm;
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
int  main( int argc, char* argv[] )
{

	Chopsticks objectChopsticks;

	//test case0
	vector <int> param00;
	param00.push_back(5);
	param00.push_back(5);
	int ret0 = objectChopsticks.getmax(param00);
	int need0 = 1;
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(1);
	param10.push_back(2);
	param10.push_back(3);
	param10.push_back(2);
	param10.push_back(1);
	param10.push_back(2);
	param10.push_back(3);
	param10.push_back(2);
	param10.push_back(1);
	int ret1 = objectChopsticks.getmax(param10);
	int need1 = 4;
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(1);
	int ret2 = objectChopsticks.getmax(param20);
	int need2 = 0;
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(1);
	param30.push_back(2);
	param30.push_back(3);
	param30.push_back(4);
	param30.push_back(5);
	param30.push_back(6);
	param30.push_back(7);
	param30.push_back(8);
	param30.push_back(9);
	int ret3 = objectChopsticks.getmax(param30);
	int need3 = 0;
	assert_eq(3,ret3,need3);

	//test case4
	vector <int> param40;
	param40.push_back(35);
	param40.push_back(35);
	param40.push_back(35);
	param40.push_back(50);
	param40.push_back(16);
	param40.push_back(30);
	param40.push_back(10);
	param40.push_back(10);
	param40.push_back(35);
	param40.push_back(50);
	param40.push_back(16);
	param40.push_back(16);
	param40.push_back(16);
	param40.push_back(30);
	param40.push_back(50);
	param40.push_back(30);
	param40.push_back(16);
	param40.push_back(35);
	param40.push_back(50);
	param40.push_back(30);
	param40.push_back(10);
	param40.push_back(50);
	param40.push_back(50);
	param40.push_back(16);
	param40.push_back(16);
	param40.push_back(10);
	param40.push_back(35);
	param40.push_back(50);
	param40.push_back(50);
	param40.push_back(50);
	param40.push_back(16);
	param40.push_back(35);
	param40.push_back(35);
	param40.push_back(30);
	param40.push_back(35);
	param40.push_back(10);
	param40.push_back(50);
	param40.push_back(10);
	param40.push_back(50);
	param40.push_back(50);
	param40.push_back(16);
	param40.push_back(30);
	param40.push_back(35);
	param40.push_back(10);
	param40.push_back(10);
	param40.push_back(30);
	param40.push_back(10);
	param40.push_back(10);
	param40.push_back(16);
	param40.push_back(35);
	int ret4 = objectChopsticks.getmax(param40);
	int need4 = 24;
	assert_eq(4,ret4,need4);

}

