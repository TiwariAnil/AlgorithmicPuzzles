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

class TopFox
{
public:
	
	int possibleHandles(string x, string y)
	{
		set <string> st;
		//set <string>::iterator it;
		string s, tmp;
		FOR(i,0,x.length())
		{
			s="";
			FOR(t,0,i+1)
			{
				s+=x[t];
			}
			FOR(j,0,y.length())
			{
				tmp=s;
				FOR(k,0,j+1)
				{
					s+=y[k];
				}
				//error(s);
				st.insert(s);
				s=tmp;
			}
		}
		/*
		it=st.begin();
		FOR(i,0,st.size())
			{
				error(*it);
				it++;
			}
		//cout<<st.size();
		*/
		return st.size();
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

	TopFox objectTopFox;

	//test case0
	string param00 = "ab";
	string param01 = "cd";
	int ret0 = objectTopFox.possibleHandles(param00,param01);
	int need0 = 4;
	assert_eq(0,ret0,need0);

	//test case1
	string param10 = "abb";
	string param11 = "bbc";
	int ret1 = objectTopFox.possibleHandles(param10,param11);
	int need1 = 7;
	assert_eq(1,ret1,need1);

	//test case2
	string param20 = "fox";
	string param21 = "ciel";
	int ret2 = objectTopFox.possibleHandles(param20,param21);
	int need2 = 12;
	assert_eq(2,ret2,need2);
	//test case3
	string param30 = "abbbb";
	string param31 = "bbbbbbbc";
	int ret3 = objectTopFox.possibleHandles(param30,param31);
	int need3 = 16;
	assert_eq(3,ret3,need3);

	//test case4
	string param40 = "abxy";
	string param41 = "xyxyxc";
	int ret4 = objectTopFox.possibleHandles(param40,param41);
	int need4 = 21;
	assert_eq(4,ret4,need4);

	//test case5
	string param50 = "ababababab";
	string param51 = "bababababa";
	int ret5 = objectTopFox.possibleHandles(param50,param51);
	int need5 = 68;
	assert_eq(5,ret5,need5);

}

