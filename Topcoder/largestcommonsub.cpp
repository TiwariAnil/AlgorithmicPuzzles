
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

class LargestSubsequence
{
public:
	string getLargest(string s)
	{
	 	  int a=-1,pos=-1,i;
	 	  string ans="";
	 	  int sz=s.size();
	 	  while(pos<sz-1)
	 	  {
	 	  	a=-1;
	 	  	for(i=pos+1;i<sz;i++)
	 	  	{
	 	  		if(a<s[i])
	 	  			pos=i,a=s[i];
	 	  	}
	 	  	ans+=a;
	 	  }
	 	  return ans;
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

	LargestSubsequence objectLargestSubsequence;

	//test case0
	string param00 = "test";
	string ret0 = objectLargestSubsequence.getLargest(param00);
	string need0 = "tt";
	assert_eq(0,ret0,need0);

	//test case1
	string param10 = "a";
	string ret1 = objectLargestSubsequence.getLargest(param10);
	string need1 = "a";
	assert_eq(1,ret1,need1);

	//test case2
	string param20 = "example";
	string ret2 = objectLargestSubsequence.getLargest(param20);
	string need2 = "xple";
	assert_eq(2,ret2,need2);

	//test case3
	string param30 = "aquickbrownfoxjumpsoverthelazydog";
	string ret3 = objectLargestSubsequence.getLargest(param30);
	string need3 = "zyog";
	assert_eq(3,ret3,need3);

}

