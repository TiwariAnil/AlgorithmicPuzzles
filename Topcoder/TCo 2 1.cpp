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

class EllysPairs
{
public:
	int getDifference(vector <int> k)
	{
		int x, p=k.size();
		vector <int> v;
		sort(k.begin(), k.end());
		FOR(i,0,k.size()/2)
		{
			x=k[i]+k[p-1-i];
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		return v[v.size()-1]-v[0];
		
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

	EllysPairs objectEllysPairs;

	//test case0
	vector <int> param00;
	param00.push_back(2);
	param00.push_back(6);
	param00.push_back(4);
	param00.push_back(3);
	int ret0 = objectEllysPairs.getDifference(param00);
	int need0 = 1;
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(1);
	param10.push_back(1);
	param10.push_back(1);
	param10.push_back(1);
	param10.push_back(1);
	param10.push_back(1);
	int ret1 = objectEllysPairs.getDifference(param10);
	int need1 = 0;
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(4);
	param20.push_back(2);
	param20.push_back(4);
	param20.push_back(2);
	param20.push_back(1);
	param20.push_back(3);
	param20.push_back(3);
	param20.push_back(7);
	int ret2 = objectEllysPairs.getDifference(param20);
	int need2 = 2;
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(5);
	param30.push_back(1);
	param30.push_back(8);
	param30.push_back(8);
	param30.push_back(13);
	param30.push_back(7);
	param30.push_back(6);
	param30.push_back(2);
	param30.push_back(1);
	param30.push_back(9);
	param30.push_back(5);
	param30.push_back(11);
	param30.push_back(3);
	param30.push_back(4);
	int ret3 = objectEllysPairs.getDifference(param30);
	int need3 = 3;
	assert_eq(3,ret3,need3);

}

