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

class PenguinTiles
{
public:
	int minMoves(vector <string> tiles)
	{
		int x, y;
		int sz=tiles.size();
		int a=tiles.size(), b=tiles[0].length();
		FOR(i,0,sz)
			FOR(j,0,tiles[0].length())
			{
				if(tiles[i][j]=='.')
					{
						x=i; y=j;
						break;
					}
			}
		//error(x);error(y);
		if(x==a-1 && y==b-1)
			return 0;
		if(x==a-1 || y==b-1)
			return 1;
		return 2;
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

	PenguinTiles objectPenguinTiles;

	//test case0
	vector <string> param00;
	param00.push_back("PP");
	param00.push_back("P.");
	int ret0 = objectPenguinTiles.minMoves(param00);
	int need0 = 0;
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back("PPPPPPPP");
	param10.push_back(".PPPPPPP");
	int ret1 = objectPenguinTiles.minMoves(param10);
	int need1 = 1;
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("PPP");
	param20.push_back("P.P");
	param20.push_back("PPP");
	int ret2 = objectPenguinTiles.minMoves(param20);
	int need2 = 2;
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("P.");
	param30.push_back("PP");
	param30.push_back("PP");
	param30.push_back("PP");
	int ret3 = objectPenguinTiles.minMoves(param30);
	int need3 = 1;
	assert_eq(3,ret3,need3);

	//test case4
	vector <string> param40;
	param40.push_back(".PPP");
	param40.push_back("PPPP");
	param40.push_back("PPPP");
	param40.push_back("PPPP");
	int ret4 = objectPenguinTiles.minMoves(param40);
	int need4 = 2;
	assert_eq(4,ret4,need4);

}

