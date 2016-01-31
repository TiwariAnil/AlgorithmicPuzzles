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

class Truckloads
{
public:
    int go(int n, int m)
    {
    	if(n<=m)
    			return 1;
        else
        	if(n%2==0)
        			  return 2*go(n/2,m);
			  else
			  	  return go(n/2,m)+go(n/2+1,m);
    	
    	
    }
	int numTrucks(int n, int l)
	{
		return go(n,l);
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

	Truckloads objectTruckloads;

	//test case0
	int param00 = 14;
	int param01 = 3;
	int ret0 = objectTruckloads.numTrucks(param00,param01);
	int need0 = 6;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 15;
	int param11 = 1;
	int ret1 = objectTruckloads.numTrucks(param10,param11);
	int need1 = 15;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 1024;
	int param21 = 5;
	int ret2 = objectTruckloads.numTrucks(param20,param21);
	int need2 = 256;
	assert_eq(2,ret2,need2);

}

