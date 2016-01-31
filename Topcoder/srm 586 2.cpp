/*
{2, 4, 8, 0, 3, -6, 10, 99, 234, 22, 1, -5}
{0, 1, 2, 3, 4, 0, 65536}


*/







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

class PiecewiseLinearFunctionDiv2
{
public:
	vector <int> countSolutions(vector <int> y, vector <int> q)
	{
		vector<int> sol;
		int n=y.size();
		int a, b, t, mm;
		FOR(i,0,q.size())
		{
			t=0;mm=0;
			FOR(j,0,n-1)
			{
				a=maX(y[j], y[j+1]);
				b=miN(y[j], y[j+1]);
					
				if(q[i]<a && q[i]>b)
				{
					t++;	
				}
				if(q[i]==y[j])
				{
					t++;
				}
			
				if(q[i]==a && q[i]==b)
				{
					t=-1;
					break;
				}
			}
			if(q[i]==y[n-1] && t!=-1)
				t++;
			sol.push_back(t);
		}
		return sol;
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

	PiecewiseLinearFunctionDiv2 objectPiecewiseLinearFunctionDiv2;

	//test case0
	vector <int> param00;
	param00.push_back(1);
	param00.push_back(4);
	param00.push_back(-1);
	param00.push_back(2);
	vector <int> param01;
	param01.push_back(-2);
	param01.push_back(-1);
	param01.push_back(0);
	param01.push_back(1);
	vector <int> ret0 = objectPiecewiseLinearFunctionDiv2.countSolutions(param00,param01);
	vector <int> need0;
	need0.push_back(0);
	need0.push_back(1);
	need0.push_back(2);
	need0.push_back(3);
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(0);
	param10.push_back(0);
	vector <int> param11;
	param11.push_back(-1);
	param11.push_back(0);
	param11.push_back(1);
	vector <int> ret1 = objectPiecewiseLinearFunctionDiv2.countSolutions(param10,param11);
	vector <int> need1;
	need1.push_back(0);
	need1.push_back(-1);
	need1.push_back(0);
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(2);
	param20.push_back(4);
	param20.push_back(8);
	param20.push_back(0);
	param20.push_back(3);
	param20.push_back(-6);
	param20.push_back(10);
	vector <int> param21;
	param21.push_back(0);
	param21.push_back(1);
	param21.push_back(2);
	param21.push_back(3);
	param21.push_back(4);
	param21.push_back(0);
	param21.push_back(65536);
	vector <int> ret2 = objectPiecewiseLinearFunctionDiv2.countSolutions(param20,param21);
	vector <int> need2;
	need2.push_back(3);
	need2.push_back(4);
	need2.push_back(5);
	need2.push_back(4);
	need2.push_back(3);
	need2.push_back(3);
	need2.push_back(0);
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(-178080289);
	param30.push_back(-771314989);
	param30.push_back(-237251715);
	param30.push_back(-949949900);
	param30.push_back(-437883156);
	param30.push_back(-835236871);
	param30.push_back(-316363230);
	param30.push_back(-929746634);
	param30.push_back(-671700962);
	vector <int> param31;
	param31.push_back(-673197622);
	param31.push_back(-437883156);
	param31.push_back(-251072978);
	param31.push_back(221380900);
	param31.push_back(-771314989);
	param31.push_back(-949949900);
	param31.push_back(-910604034);
	param31.push_back(-671700962);
	param31.push_back(-929746634);
	param31.push_back(-316363230);
	vector <int> ret3 = objectPiecewiseLinearFunctionDiv2.countSolutions(param30,param31);
	vector <int> need3;
	need3.push_back(8);
	need3.push_back(6);
	need3.push_back(3);
	need3.push_back(0);
	need3.push_back(7);
	need3.push_back(1);
	need3.push_back(4);
	need3.push_back(8);
	need3.push_back(3);
	need3.push_back(4);
	assert_eq(3,ret3,need3);

}

