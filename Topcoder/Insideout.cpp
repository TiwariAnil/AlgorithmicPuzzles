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

class InsideOut
{
public:
	string unscramble(string l)
	{
	 	   int s=l.size();
	 	   string t,r;
	 	   int j=s/2;
	 	   for(int i=j-1,k=s-1;i>=0;i--,k--)
	 	   {
	 	   		   t+=l[i];
	 	   		   r+=l[k];
	 	   }
	 	   string f=t+r;
	 	   return f;




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

	InsideOut objectInsideOut;

	//test case0
	string param00 = "I ENIL SIHTHSIREBBIG S";
	string ret0 = objectInsideOut.unscramble(param00);
	string need0 = "THIS LINE IS GIBBERISH";
	assert_eq(0,ret0,need0);

	//test case1
	string param10 = "LEVELKAYAK";
	string ret1 = objectInsideOut.unscramble(param10);
	string need1 = "LEVELKAYAK";
	assert_eq(1,ret1,need1);

	//test case2
	string param20 = "H YPPAHSYADILO";
	string ret2 = objectInsideOut.unscramble(param20);
	string need2 = "HAPPY HOLIDAYS";
	assert_eq(2,ret2,need2);

	//test case3
	string param30 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string ret3 = objectInsideOut.unscramble(param30);
	string need3 = "MLKJIHGFEDCBAZYXWVUTSRQPON";
	assert_eq(3,ret3,need3);

	//test case4
	string param40 = "RUT OWT SNEH HCNERF EERHTEGDIRTRAP A DNA  SEVODELT";
	string ret4 = objectInsideOut.unscramble(param40);
	string need4 = "THREE FRENCH HENS TWO TURTLEDOVES  AND A PARTRIDGE";
	assert_eq(4,ret4,need4);

}

