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

class RGBStreet
{
public:
	int estimateCost(vector <string> ho)
	{
	 	for(int i=0;i<ho.size();i++)
		 {
		  		sscanf(ho[i].c_str(),"%d%d%d",&h[i][0],&h[i][1],&h[i][2]);
		 }
		 					 }					 
	
	
	
	
	
	
	
	
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

	RGBStreet objectRGBStreet;

	//test case0
	vector <string> param00;
	param00.push_back("1 100 100");
	param00.push_back("100 1 100");
	param00.push_back("100 100 1");
	int ret0 = objectRGBStreet.estimateCost(param00);
	int need0 = 3;
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back("1 100 100");
	param10.push_back("100 100 100");
	param10.push_back("1 100 100");
	int ret1 = objectRGBStreet.estimateCost(param10);
	int need1 = 102;
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("26 40 83");
	param20.push_back("49 60 57");
	param20.push_back("13 89 99");
	int ret2 = objectRGBStreet.estimateCost(param20);
	int need2 = 96;
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("30 19 5");
	param30.push_back("64 77 64");
	param30.push_back("15 19 97");
	param30.push_back("4 71 57");
	param30.push_back("90 86 84");
	param30.push_back("93 32 91");
	int ret3 = objectRGBStreet.estimateCost(param30);
	int need3 = 208;
	assert_eq(3,ret3,need3);

	//test case4
	vector <string> param40;
	param40.push_back("71 39 44");
	param40.push_back("32 83 55");
	param40.push_back("51 37 63");
	param40.push_back("89 29 100");
	param40.push_back("83 58 11");
	param40.push_back("65 13 15");
	param40.push_back("47 25 29");
	param40.push_back("60 66 19");
	int ret4 = objectRGBStreet.estimateCost(param40);
	int need4 = 253;
	assert_eq(4,ret4,need4);

}

