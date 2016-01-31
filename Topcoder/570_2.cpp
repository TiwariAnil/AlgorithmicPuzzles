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

class RobotHerbDiv2
{
public:
	
	int getdist(int T, vector <int> a)
	{
		long long x=0, y=0, dir=0, r;
		//1 y+ ; 2 x+ ; 3 x- ; 4 y-; 
		FOR(t,0,T)
		{
			FOR(i,0,a.size())
			{
				if(dir == 0 )
				{
					y+=a[i];
					r= ( a[i]%4 ) + 0;
					dir = r%4;
				}
				else if( dir == 1)
				{
					x+=a[i];
					
					r= ( a[i]%4 ) + 1;
					dir = r%4;
				}
				else if (dir == 2)
				{
					y = y - a[i];
					
					r= ( a[i]%4 ) + 2;
					dir = r%4;
				}
				else if( dir == 3)
				{
					//	error(y);
				
					x-=a[i];
					
					r= ( a[i]%4 ) + 3;
					dir = r%4;
				}
				//error(x); error(y);
			//	error(dir);
			//	cout<<endl;
			}
		}
		return (abS(x)+abS(y));
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

	RobotHerbDiv2 objectRobotHerbDiv2;

	//test case0
	int param00 = 1;
	vector <int> param01;
	param01.push_back(1);
	param01.push_back(2);
	param01.push_back(3);
	int ret0 = objectRobotHerbDiv2.getdist(param00,param01);
	int need0 = 2;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 100;
	vector <int> param11;
	param11.push_back(1);
	int ret1 = objectRobotHerbDiv2.getdist(param10,param11);
	int need1 = 0;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 5;
	vector <int> param21;
	param21.push_back(1);
	param21.push_back(1);
	param21.push_back(2);
	int ret2 = objectRobotHerbDiv2.getdist(param20,param21);
	int need2 = 10;
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 100;
	vector <int> param31;
	param31.push_back(400000);
	param31.push_back(400000);
	int ret3 = objectRobotHerbDiv2.getdist(param30,param31);
	int need3 = 40000000;
	assert_eq(3,ret3,need3);

}

