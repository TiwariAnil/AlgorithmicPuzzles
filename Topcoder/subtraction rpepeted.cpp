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

class DerivativeSequence
{
public:
	vector <int> fun(vector <int> a)
	{
			int s=a.size();
             vector <int> r(s-1);
             for(int i=0;i<s-1;i++)
			     r[i]=a[i+1]-a[i];
			 return r;    
		}
	vector <int> derSeq(vector <int> a, int n)
	{
		
		
		while(n--)
		{
			vector <int > p;
             //p=new vector <int> ;
             p=fun(a);
             a=p;   
		}
		return a;
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

	DerivativeSequence objectDerivativeSequence;

	//test case0
	vector <int> param00;
	param00.push_back(5);
	param00.push_back(6);
	param00.push_back(3);
	param00.push_back(9);
	param00.push_back(-1);
	int param01 = 1;
	vector <int> ret0 = objectDerivativeSequence.derSeq(param00,param01);
	vector <int> need0;
	need0.push_back(1);
	need0.push_back(-3);
	need0.push_back(6);
	need0.push_back(-10);
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(5);
	param10.push_back(6);
	param10.push_back(3);
	param10.push_back(9);
	param10.push_back(-1);
	int param11 = 2;
	vector <int> ret1 = objectDerivativeSequence.derSeq(param10,param11);
	vector <int> need1;
	need1.push_back(-4);
	need1.push_back(9);
	need1.push_back(-16);
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(5);
	param20.push_back(6);
	param20.push_back(3);
	param20.push_back(9);
	param20.push_back(-1);
	int param21 = 4;
	vector <int> ret2 = objectDerivativeSequence.derSeq(param20,param21);
	vector <int> need2;
	need2.push_back(-38);
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(4);
	param30.push_back(4);
	param30.push_back(4);
	param30.push_back(4);
	param30.push_back(4);
	param30.push_back(4);
	param30.push_back(4);
	param30.push_back(4);
	int param31 = 3;
	vector <int> ret3 = objectDerivativeSequence.derSeq(param30,param31);
	vector <int> need3;
	need3.push_back(0);
	need3.push_back(0);
	need3.push_back(0);
	need3.push_back(0);
	need3.push_back(0);
	assert_eq(3,ret3,need3);

	//test case4
	vector <int> param40;
	param40.push_back(-100);
	param40.push_back(100);
	int param41 = 0;
	vector <int> ret4 = objectDerivativeSequence.derSeq(param40,param41);
	vector <int> need4;
	need4.push_back(-100);
	need4.push_back(100);
	assert_eq(4,ret4,need4);

}

