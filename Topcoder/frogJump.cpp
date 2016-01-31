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
#define abS(x)                  ((x)<0?-(x):(x))
class ThreeTeleports
{
public:
	int dist(int a,int b, int c, int d)
	{
	 	return (abS(a-c)+abS(b-d));
	}
	int shortestDistance(int xm, int ym, int xh, int yh, vector <string> t)
	{
	 	int a[4][5];
	 	for(int i=0;i<3;i++)
	 	{
	 		sscanf(t[i].c_str(),"%d%d%d%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
	 	}
	 	long long mins[10];
	 	mins[0]=dist(xm,ym,xh,yh);
	 	mins[1]=min(dist(xm,ym,a[0][0],a[0][1])+10+dist(xh,yh,a[0][2],a[0][3]),dist(xm,ym,a[0][2],a[0][3])+10+dist(xh,yh,a[0][0],a[0][1]));
		
	 	mins[2]=min(dist(xm,ym,a[1][0],a[1][1])+10+dist(xh,yh,a[1][2],a[1][3]),dist(xm,ym,a[1][2],a[1][3])+10+dist(xh,yh,a[1][0],a[1][1]));
	 	
	    mins[3]=min(dist(xm,ym,a[2][0],a[2][1])+10+dist(xh,yh,a[2][2],a[2][3]),dist(xm,ym,a[2][2],a[2][3])+10+dist(xh,yh,a[2][0],a[2][1]));
		
		mins[4]=dist(xm,ym,a[0][0],a[0][1])+10+dist(a[0][2],a[0][3],a[1][0],a[1][1])+10+dist(xh,yh,a[1][2],a[1][3]);
		mins[4]=dist(xm,ym,a[0][0],a[0][1])+10+dist(a[0][2],a[0][3],a[1][0],a[1][1])+10+dist(xh,yh,a[1][2],a[1][3]);
		mins[5]=dist(xm,ym,a[0][0],a[0][1])+10+dist(a[0][2],a[0][3],a[1][0],a[1][1])+10+dist(a[1][2],a[1][3],a[2][0],a[2][1])+10+dist(xh,yh,a[2][2],a[2][3]);
		
		mins[6]=dist(xm,ym,a[1][0],a[1][1])+10+dist(a[1][2],a[1][3],a[2][0],a[2][1])+10+dist(xh,yh,a[2][2],a[2][3]);
		
		mins[7]=dist(xm,ym,a[0][0],a[0][1])+10+dist(a[0][2],a[0][3],a[2][0],a[2][1])+10+dist(xh,yh,a[2][2],a[2][3]);
		int time=1000000000;
		for(int i=0;i<8;i++)
				if(time>mins[i])
								time=mins[i];
	 	return time;
	
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

	ThreeTeleports objectThreeTeleports;

	//test case0
	int param00 = 3;
	int param01 = 3;
	int param02 = 4;
	int param03 = 5;
	vector <string> param04;
	param04.push_back("1000 1001 1000 1002");
	param04.push_back("1000 1003 1000 1004");
	param04.push_back("1000 1005 1000 1006");
	int ret0 = objectThreeTeleports.shortestDistance(param00,param01,param02,param03,param04);
	int need0 = 3;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 0;
	int param11 = 0;
	int param12 = 20;
	int param13 = 20;
	vector <string> param14;
	param14.push_back("1 1 18 20");
	param14.push_back("1000 1003 1000 1004");
	param14.push_back("1000 1005 1000 1006");
	int ret1 = objectThreeTeleports.shortestDistance(param10,param11,param12,param13,param14);
	int need1 = 14;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 0;
	int param21 = 0;
	int param22 = 20;
	int param23 = 20;
	vector <string> param24;
	param24.push_back("1000 1003 1000 1004");
	param24.push_back("18 20 1 1");
	param24.push_back("1000 1005 1000 1006");
	int ret2 = objectThreeTeleports.shortestDistance(param20,param21,param22,param23,param24);
	int need2 = 14;
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 10;
	int param31 = 10;
	int param32 = 10000;
	int param33 = 20000;
	vector <string> param34;
	param34.push_back("1000 1003 1000 1004");
	param34.push_back("3 3 10004 20002");
	param34.push_back("1000 1005 1000 1006");
	int ret3 = objectThreeTeleports.shortestDistance(param30,param31,param32,param33,param34);
	int need3 = 30;
	assert_eq(3,ret3,need3);

	//test case4
	int param40 = 3;
	int param41 = 7;
	int param42 = 10000;
	int param43 = 30000;
	vector <string> param44;
	param44.push_back("3 10 5200 4900");
	param44.push_back("12212 8699 9999 30011");
	param44.push_back("12200 8701 5203 4845");
	int ret4 = objectThreeTeleports.shortestDistance(param40,param41,param42,param43,param44);
	int need4 = 117;
	assert_eq(4,ret4,need4);

	//test case5
	int param50 = 0;
	int param51 = 0;
	int param52 = 1000000000;
	int param53 = 1000000000;
	vector <string> param54;
	param54.push_back("0 1 0 999999999");
	param54.push_back("1 1000000000 999999999 0");
	param54.push_back("1000000000 1 1000000000 999999999");
	int ret5 = objectThreeTeleports.shortestDistance(param50,param51,param52,param53,param54);
	int need5 = 36;
	assert_eq(5,ret5,need5);

}

