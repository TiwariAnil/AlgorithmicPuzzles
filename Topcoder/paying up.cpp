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

class LotteryTicket
{
public:
	int a1,a2,a3,a4;
	int go(int p,vector <int> t, int i )
	{
		if(p==0)
						  return 1;
        if(p<0)
        	   return 0;
		if(i<=3)
		return (go(p,t,i+1)||go(p-t[i],t,i+1));
		return 0;
	//b1,b2,b3,b4
	}
	
	string buy(int p, int b1, int b2, int b3, int b4)
	{
		vector <int> t;
		t.push_back(b1);
		t.push_back(b2);
		t.push_back(b3);
		t.push_back(b4);
		//sort(t.begin(),t.end());
		if(go(p,t,0))
		   return "POSSIBLE";
        return "IMPOSSIBLE";
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

	LotteryTicket objectLotteryTicket;

	//test case0
	int param00 = 10;
	int param01 = 1;
	int param02 = 5;
	int param03 = 10;
	int param04 = 50;
	string ret0 = objectLotteryTicket.buy(param00,param01,param02,param03,param04);
	string need0 = "POSSIBLE";
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 15;
	int param11 = 1;
	int param12 = 5;
	int param13 = 10;
	int param14 = 50;
	string ret1 = objectLotteryTicket.buy(param10,param11,param12,param13,param14);
	string need1 = "POSSIBLE";
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 65;
	int param21 = 1;
	int param22 = 5;
	int param23 = 10;
	int param24 = 50;
	string ret2 = objectLotteryTicket.buy(param20,param21,param22,param23,param24);
	string need2 = "POSSIBLE";
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 66;
	int param31 = 1;
	int param32 = 5;
	int param33 = 10;
	int param34 = 50;
	string ret3 = objectLotteryTicket.buy(param30,param31,param32,param33,param34);
	string need3 = "POSSIBLE";
	assert_eq(3,ret3,need3);

	//test case4
	int param40 = 1000;
	int param41 = 999;
	int param42 = 998;
	int param43 = 997;
	int param44 = 996;
	string ret4 = objectLotteryTicket.buy(param40,param41,param42,param43,param44);
	string need4 = "IMPOSSIBLE";
	assert_eq(4,ret4,need4);

	//test case5
	int param50 = 20;
	int param51 = 5;
	int param52 = 5;
	int param53 = 5;
	int param54 = 5;
	string ret5 = objectLotteryTicket.buy(param50,param51,param52,param53,param54);
	string need5 = "POSSIBLE";
	assert_eq(5,ret5,need5);

	//test case6
	int param60 = 2;
	int param61 = 1;
	int param62 = 5;
	int param63 = 10;
	int param64 = 50;
	string ret6 = objectLotteryTicket.buy(param60,param61,param62,param63,param64);
	string need6 = "IMPOSSIBLE";
	assert_eq(6,ret6,need6);

}

