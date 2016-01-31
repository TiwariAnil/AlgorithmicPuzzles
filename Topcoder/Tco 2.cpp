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

class TheFrog
{
public:
	double getMinimum(int D, vector <int> L, vector <int> R)
	{
		double jmp=0.0, cov=0.0;
		int path[40009]={0}, lim=D;
		FOR(i,0,30009)
		{
			path[i]=0;
		}
		FOR(i,0,L.size())
		{
			if(R[i]-L[i]>jmp)
			{
				jmp=R[i]-L[i];
			}
			/*
			if(R[i]>lim)
			{
				lim=R[i];
			}*/
			FOR(j,L[i]+1,R[i] )
			{
				path[j]=1;
			}
		}
		int i=1, ji, k;
		while(cov<lim)
		{
			//error(jmp);
			cov+=jmp;
			ji=(int)cov;
			if(ji!=cov)
				ji++;
			if(path[ji]==1)
			{
		//		error(cov);
				//tmp=jmp;
				for( k=ji; path[k]!=0; k++ )
				{
				}
				//;
				jmp=(jmp+((double)(k-cov)/i));
				
				i=0;
				cov=0.0;
			}
			i++;
		}
		return jmp;
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

	TheFrog objectTheFrog;

	//test case0
	int param00 = 16;
	vector <int> param01;
	param01.push_back(2);
	vector <int> param02;
	param02.push_back(7);
	double ret0 = objectTheFrog.getMinimum(param00,param01,param02);
	double need0 = 7.0;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 25;
	vector <int> param11;
	param11.push_back(11);
	param11.push_back(3);
	vector <int> param12;
	param12.push_back(21);
	param12.push_back(7);
	double ret1 = objectTheFrog.getMinimum(param10,param11,param12);
	double need1 = 10.5;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 100;
	vector <int> param21;
	param21.push_back(0);
	vector <int> param22;
	param22.push_back(100);
	double ret2 = objectTheFrog.getMinimum(param20,param21,param22);
	double need2 = 100.0;
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 100;
	vector <int> param31;
	param31.push_back(0);
	param31.push_back(50);
	vector <int> param32;
	param32.push_back(50);
	param32.push_back(100);
	double ret3 = objectTheFrog.getMinimum(param30,param31,param32);
	double need3 = 50.0;
	assert_eq(3,ret3,need3);

	//test case4
	int param40 = 30000;
	vector <int> param41;
	param41.push_back(17);
	param41.push_back(25281);
	param41.push_back(5775);
	param41.push_back(2825);
	param41.push_back(14040);
	vector <int> param42;
	param42.push_back(55);
	param42.push_back(26000);
	param42.push_back(5791);
	param42.push_back(3150);
	param42.push_back(14092);
	double ret4 = objectTheFrog.getMinimum(param40,param41,param42);
	double need4 = 787.8787878787879;
	assert_eq(4,ret4,need4);

}

