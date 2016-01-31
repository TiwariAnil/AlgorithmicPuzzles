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

class LetterStrings
{
public:
	int sum(vector <string> s)
	{
	 	int count=0;
	 	for(int i=0;i<s.size();i++)
			for(int j=0;j<s[i].length();j++)
					{
						if(s[i][j]=='-')
						 count++;
					}
	
	    int res=0;
	    for(int i=0;i<s.size();i++)
			res+=s[i].length();
			
	     return res-count;
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

	LetterStrings objectLetterStrings;

	//test case0
	vector <string> param00;
	param00.push_back("-");
	int ret0 = objectLetterStrings.sum(param00);
	int need0 = 0;
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back("A");
	int ret1 = objectLetterStrings.sum(param10);
	int need1 = 1;
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("-----Abc");
	int ret2 = objectLetterStrings.sum(param20);
	int need2 = 3;
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("-A-B-C-D");
	param30.push_back("--------EFGHI");
	param30.push_back("JKLMNOPQR");
	param30.push_back("---STU-VW-XYZ");
	int ret3 = objectLetterStrings.sum(param30);
	int need3 = 26;
	assert_eq(3,ret3,need3);

}

