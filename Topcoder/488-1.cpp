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

class TheBoredomDivTwo
{
public:
	int find(int n, int m, int j, int b)
	{
        int cnt=n;
	    if(n<j && j<=n+m)
	           cnt++;
               if(n<b && b<=n+m)
               cnt++;
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

int main( int argc, char* argv[] )
{

	TheBoredomDivTwo objectTheBoredomDivTwo;

	//test case0
	int param00 = 1;
	int param01 = 1;
	int param02 = 1;
	int param03 = 2;
	int ret0 = objectTheBoredomDivTwo.find(param00,param01,param02,param03);
	int need0 = 2;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 2;
	int param11 = 1;
	int param12 = 1;
	int param13 = 2;
	int ret1 = objectTheBoredomDivTwo.find(param10,param11,param12,param13);
	int need1 = 2;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 1;
	int param21 = 2;
	int param22 = 3;
	int param23 = 2;
	int ret2 = objectTheBoredomDivTwo.find(param20,param21,param22,param23);
	int need2 = 3;
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 4;
	int param31 = 7;
	int param32 = 7;
	int param33 = 4;
	int ret3 = objectTheBoredomDivTwo.find(param30,param31,param32,param33);
	int need3 = 5;
	assert_eq(3,ret3,need3);
 int z;
 cin>>z;

}

