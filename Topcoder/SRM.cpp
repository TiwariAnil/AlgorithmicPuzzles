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

class TheAirTripDivTwo
{
public:
	int find(vector <int> f, int fuel)
	{
		int i=0,cnt=0;
		while(fuel>0 && i<f.size())
		{
			fuel-=f[i];
			if(fuel<0)
			break;
			cnt++;
			i++;
			
		}
		return cnt--;
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

	TheAirTripDivTwo objectTheAirTripDivTwo;

	//test case0
	vector <int> param00;
	param00.push_back(1);
	param00.push_back(2);
	param00.push_back(3);
	param00.push_back(4);
	param00.push_back(5);
	param00.push_back(6);
	param00.push_back(7);
	int param01 = 10;
	int ret0 = objectTheAirTripDivTwo.find(param00,param01);
	int need0 = 4;
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(7);
	param10.push_back(6);
	param10.push_back(5);
	param10.push_back(4);
	param10.push_back(3);
	param10.push_back(2);
	param10.push_back(1);
	int param11 = 10;
	int ret1 = objectTheAirTripDivTwo.find(param10,param11);
	int need1 = 1;
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(1);
	int param21 = 1000;
	int ret2 = objectTheAirTripDivTwo.find(param20,param21);
	int need2 = 1;
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(8);
	param30.push_back(7);
	param30.push_back(7);
	param30.push_back(1);
	param30.push_back(5);
	param30.push_back(7);
	param30.push_back(9);
	int param31 = 21;
	int ret3 = objectTheAirTripDivTwo.find(param30,param31);
	int need3 = 2;
	assert_eq(3,ret3,need3);

}

