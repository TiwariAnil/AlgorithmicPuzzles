#include <sstream>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class DigitsSum
{
public:
	int lastDigit(int n)
	{
		int a=n;
	 	while(a>9)
	 	{
	 		int b=a,c=0;
	 		while(b)
	 		{
	 			c+=b%10;
	 			b=b/10;
	 		}
	 		a=c;
	 	}
	
		return a;
	
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

	DigitsSum objectDigitsSum;

	//test case0
	int param00 = 12345;
	int ret0 = objectDigitsSum.lastDigit(param00);
	int need0 = 6;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 6;
	int ret1 = objectDigitsSum.lastDigit(param10);
	int need1 = 6;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 999999999;
	int ret2 = objectDigitsSum.lastDigit(param20);
	int need2 = 9;
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 213413512;
	int ret3 = objectDigitsSum.lastDigit(param30);
	int need3 = 4;
	assert_eq(3,ret3,need3);

	//test case4
	int param40 = 314;
	int ret4 = objectDigitsSum.lastDigit(param40);
	int need4 = 8;
	assert_eq(4,ret4,need4);

	//test case5
	int param50 = 2147483647;
	int ret5 = objectDigitsSum.lastDigit(param50);
	int need5 = 1;
	assert_eq(5,ret5,need5);

}

