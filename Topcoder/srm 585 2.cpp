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

class TrafficCongestionDivTwo
{
public:
	long long power(long long base,long long pow)
	{
	    if(base==0)
	        return 0;
	    if(base==1 || pow==0)
	        return 1;
	    long long ans=1;
	    while(pow)
	    {
	        if(pow%2==1)
	        {
	            ans*=base;
	          //  ans%=MOD;
	        }
	        base*=base;
	        //base%=MOD;
	        pow>>=1;
	    }
	    return ans;
	}
	long long theMinCars(int t)
	{
		int f=-1;
		if(t%2==0)
			f=1;
		 long long res=power(2, t+1);
		res+=f;
		res=res/3;
		return res; 
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

	TrafficCongestionDivTwo objectTrafficCongestionDivTwo;

	//test case0
	int param00 = 1;
	long long ret0 = objectTrafficCongestionDivTwo.theMinCars(param00);
	long long need0 = 1;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 2;
	long long ret1 = objectTrafficCongestionDivTwo.theMinCars(param10);
	long long need1 = 3;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 3;
	long long ret2 = objectTrafficCongestionDivTwo.theMinCars(param20);
	long long need2 = 5;
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 10;
	long long ret3 = objectTrafficCongestionDivTwo.theMinCars(param30);
	long long need3 = 683;
	assert_eq(3,ret3,need3);

	//test case4
	int param40 = 60;
	long long ret4 = objectTrafficCongestionDivTwo.theMinCars(param40);
	long long need4 = 768614336404564651;
	assert_eq(4,ret4,need4);

}

