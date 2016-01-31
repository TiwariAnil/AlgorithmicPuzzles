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

class TheNumberGameDiv2
{
public:
	int minimumMoves(int A, int B)
	{
		string a, b, aa;
		ostringstream conv;
		conv<<A;
		a= conv.str();
		ostringstream conv1;
		conv1<<B;
		b= conv1.str();
		
		FORs(i, a.length()-1, 0)
		{
			aa+=a[i];
		}
		int m1=-10, m2=-10, res, p, q, r;
		unsigned found = a.find(b);
    	if (found!=std::string::npos && found<10)
		{
			found++;
			p=found-1;
			q=a.length()-found-b.length()+1;
			m1=p+q;
			if(p > 0)
			{
				m1+=1;
			}
			if(q > 0)
			{
				m1+=1;
			}
			if(p==0)
			{
				m1--;
			}
			error(p);
			error(q);
			error(m1);
			error(found);
			error(a);
			error(b);
			cout<<endl;
		}
		found = aa.find(b);
    	if (found!=std::string::npos && found<10)
		{
			found++;
			p=found-1;
			q=a.length()-found-b.length()+1;
			m2=p+q;
			m2+=1;
			
			error(p);
			error(q);
			error(m2);
			error(found);
			error(aa);
			error(b);
		}
		cout<<endl<<endl;
		res=miN(m1, m2);
		int ma=maX(m1, m2);
		if(res<0 && ma<0)
		{
			return -1;
		}
		else if(res <0 && ma>0)
		{
			return ma;
		}
		else
		{
			return res;
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

	TheNumberGameDiv2 objectTheNumberGameDiv2;

	//test case0
	int param00 = 999919999;
	int param01 = 1;
	int ret0 = objectTheNumberGameDiv2.minimumMoves(param00,param01);
	int need0 = 2;
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 5162;
	int param11 = 16;
	int ret1 = objectTheNumberGameDiv2.minimumMoves(param10,param11);
	int need1 = 4;
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 334;
	int param21 = 12;
	int ret2 = objectTheNumberGameDiv2.minimumMoves(param20,param21);
	int need2 = -1;
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 218181918;
	int param31 = 9181;
	int ret3 = objectTheNumberGameDiv2.minimumMoves(param30,param31);
	int need3 = 6;
	assert_eq(3,ret3,need3);

	//test case4
	int param40 = 9798147;
	int param41 = 79817;
	int ret4 = objectTheNumberGameDiv2.minimumMoves(param40,param41);
	int need4 = -1;
	assert_eq(4,ret4,need4);

}

