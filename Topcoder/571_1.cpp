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

class FoxAndGame
{
public:
	int countStars(vector <string> r)
	{
		int le=r[0].length(), cnt=0;
		
		FOR(i,0,r.size())
		{
			FOR(j,0,le)
			{
				if(r[i][j]=='o')
					cnt++;
			}
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
 main( int argc, char* argv[] )
{

	FoxAndGame objectFoxAndGame;

	//test case0
	vector <string> param00;
	param00.push_back("ooo");
	param00.push_back("ooo");
	int ret0 = objectFoxAndGame.countStars(param00);
	int need0 = 6;
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back("ooo");
	param10.push_back("oo-");
	param10.push_back("o--");
	int ret1 = objectFoxAndGame.countStars(param10);
	int need1 = 6;
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("ooo");
	param20.push_back("---");
	param20.push_back("oo-");
	param20.push_back("---");
	param20.push_back("o--");
	int ret2 = objectFoxAndGame.countStars(param20);
	int need2 = 6;
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("o--");
	param30.push_back("o--");
	param30.push_back("o--");
	param30.push_back("ooo");
	param30.push_back("---");
	int ret3 = objectFoxAndGame.countStars(param30);
	int need3 = 6;
	assert_eq(3,ret3,need3);

	//test case4
	vector <string> param40;
	param40.push_back("---");
	param40.push_back("o--");
	param40.push_back("oo-");
	param40.push_back("ooo");
	param40.push_back("ooo");
	param40.push_back("oo-");
	param40.push_back("o--");
	param40.push_back("---");
	int ret4 = objectFoxAndGame.countStars(param40);
	int need4 = 12;
	assert_eq(4,ret4,need4);

	//test case5
	vector <string> param50;
	param50.push_back("---");
	param50.push_back("---");
	param50.push_back("---");
	param50.push_back("---");
	param50.push_back("---");
	param50.push_back("---");
	int ret5 = objectFoxAndGame.countStars(param50);
	int need5 = 0;
	assert_eq(5,ret5,need5);

	//test case6
	vector <string> param60;
	param60.push_back("oo-");
	int ret6 = objectFoxAndGame.countStars(param60);
	int need6 = 2;
	assert_eq(6,ret6,need6);

}

