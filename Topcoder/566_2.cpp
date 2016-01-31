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

class PenguinPals
{
public:
	int findMaximumMatching(string c)
	{
		bool fin= false;
		int res=0,n=c.size();
		while(!fin)
		{
			int p=-1;
			FOR(i,1,c.size())
				if(c[i]==c[i-1])
					p=i-1;
			
			if(p!=-1)
					c=c.substr(0,p)+c.substr(p+2,n), res++;
			else if(c.size()!=1 && c[0]==c[c.size()-1])
					c=c.substr(1,c.size()-2), res++;
			else
					fin=true;
			
		}
		if(c.size()>3)
			res+=(c.size()-2)/2;
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

main( int argc, char* argv[] )
{

	PenguinPals objectPenguinPals;

	//test case0
	string param00 = "RRBRBRBB";
	int ret0 = objectPenguinPals.findMaximumMatching(param00);
	int need0 = 3;
	assert_eq(0,ret0,need0);

	//test case1
	string param10 = "RRRR";
	int ret1 = objectPenguinPals.findMaximumMatching(param10);
	int need1 = 2;
	assert_eq(1,ret1,need1);

	//test case2
	string param20 = "BBBBB";
	int ret2 = objectPenguinPals.findMaximumMatching(param20);
	int need2 = 2;
	assert_eq(2,ret2,need2);

	//test case3
	string param30 = "RBRBRBRBR";
	int ret3 = objectPenguinPals.findMaximumMatching(param30);
	int need3 = 4;
	assert_eq(3,ret3,need3);

	//test case4
	string param40 = "RRRBRBRBRBRB";
	int ret4 = objectPenguinPals.findMaximumMatching(param40);
	int need4 = 5;
	assert_eq(4,ret4,need4);

	//test case5
	string param50 = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
	int ret5 = objectPenguinPals.findMaximumMatching(param50);
	int need5 = 0;
	assert_eq(5,ret5,need5);

	//test case6
	string param60 = "RBRRBBRB";
	int ret6 = objectPenguinPals.findMaximumMatching(param60);
	int need6 = 3;
	assert_eq(6,ret6,need6);

	//test case7
	string param70 = "RBRBRBRBRBRB";//"RBRBBRBRB";
	int ret7 = objectPenguinPals.findMaximumMatching(param70);
	int need7 = 4;
	assert_eq(7,ret7,need7);

}
//      RBRBRBRBRBRB
