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

class HouseBuilding
{
public:
	int getMinimum(vector <string> a)
	{
		vector <int> v;
		int x, cnt=0, sm=0;
		FOR(i,0,a.size())
		{
			FOR(j,0,a[0].length())
			{
				x= a[i][j] - '0';	
				v.push_back(x);
				cnt++;
				sm+=x;
			}
		}
	
		int avg = (int)(sm/cnt);
	//	error(avg);
		int m1=0, m2=0;
		FOR(i,0,v.size())
		{
			if(v[i]>avg)
			   m1+=(v[i]-avg)-1, m2+=v[i]-avg;
			if(v[i]<avg)
				m1+=avg-v[i], m2+=(avg-v[i])-1;
		}
	//	error(m1); 
	//	error(m2);
		return miN(m1, m2);
	
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

	HouseBuilding objectHouseBuilding;

	//test case0
	vector <string> param00;
	param00.push_back("10");
	param00.push_back("31");
	int ret0 = objectHouseBuilding.getMinimum(param00);
	int need0 = 2;
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back("54454");
	param10.push_back("61551");
	int ret1 = objectHouseBuilding.getMinimum(param10);
	int need1 = 7;
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("989");
	int ret2 = objectHouseBuilding.getMinimum(param20);
	int need2 = 0;
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("90");
	int ret3 = objectHouseBuilding.getMinimum(param30);
	int need3 = 8;
	assert_eq(3,ret3,need3);

	//test case4
	vector <string> param40;
	param40.push_back("5781252");
	param40.push_back("2471255");
	param40.push_back("0000291");
	param40.push_back("1212489");
	int ret4 = objectHouseBuilding.getMinimum(param40);
	int need4 = 53;
	assert_eq(4,ret4,need4);

}

