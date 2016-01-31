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
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

// Output macros
#define p(n)                        printf("%d",n)
#define pc(n)                       printf("%c",n)
#define pl(n)                       printf("%lld",n)
#define pf(n)                       printf("%lf",n)
#define ps(n)                       printf("%s",n)

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

using namespace std;


class CoinsGameEasy
{
public:
	int minimalSteps(vector <string> board)
	{
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

void main( int argc, char* argv[] )
{

	CoinsGameEasy objectCoinsGameEasy;

	//test case0
	vector <string> param00;
	param00.push_back("oo");
	int ret0 = objectCoinsGameEasy.minimalSteps(param00);
	int need0 = 1;
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back(".#");
	param10.push_back(".#");
	param10.push_back(".#");
	param10.push_back("o#");
	param10.push_back("o#");
	param10.push_back("##");
	int ret1 = objectCoinsGameEasy.minimalSteps(param10);
	int need1 = 4;
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("..");
	param20.push_back("..");
	param20.push_back("..");
	param20.push_back("o#");
	param20.push_back("o#");
	param20.push_back("##");
	int ret2 = objectCoinsGameEasy.minimalSteps(param20);
	int need2 = 3;
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("###");
	param30.push_back(".o.");
	param30.push_back("###");
	param30.push_back(".o.");
	param30.push_back("###");
	int ret3 = objectCoinsGameEasy.minimalSteps(param30);
	int need3 = -1;
	assert_eq(3,ret3,need3);

	//test case4
	vector <string> param40;
	param40.push_back("###");
	param40.push_back(".o.");
	param40.push_back("#.#");
	param40.push_back(".o.");
	param40.push_back("###");
	int ret4 = objectCoinsGameEasy.minimalSteps(param40);
	int need4 = 3;
	assert_eq(4,ret4,need4);

	//test case5
	vector <string> param50;
	param50.push_back("###########");
	param50.push_back("........#o#");
	param50.push_back("###########");
	param50.push_back(".........o#");
	param50.push_back("###########");
	int ret5 = objectCoinsGameEasy.minimalSteps(param50);
	int need5 = 10;
	assert_eq(5,ret5,need5);

	//test case6
	vector <string> param60;
	param60.push_back("############");
	param60.push_back(".........#o#");
	param60.push_back("############");
	param60.push_back("..........o#");
	param60.push_back("############");
	int ret6 = objectCoinsGameEasy.minimalSteps(param60);
	int need6 = -1;
	assert_eq(6,ret6,need6);

}
