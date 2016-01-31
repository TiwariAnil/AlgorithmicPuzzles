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

class Haar1D
{
public:
	vector <int> go(vector <int> d, int pos)
		   {
		   		 vector <int> a(pos),b(pos);
		   		 for(int i=0,j=0;i<pos;i=i+2,j++)
		   		 		 a[j]=d[i]+d[i+1];
		   	     for(int i=0,j=pos/2;i<pos;i=i+2,j++)
		   		 		 b[j]=d[i]-d[i+1];			 
		   		for(int i=0;i<pos/2;i=i++)
		   		 		 d[i]=a[i];//+d[i+1];		 
  				for(int i=pos/2;i<pos;i=i++)
		   		 		 d[i]=b[i];//+d[i+1];		 
  				 return d;
		   }
	vector <int> transform(vector <int> d, int l)
	{
		   int s=d.size();
	 	   while(l--)
	 	   {
	 	   		   
	 	   		   //vector <int> p;
	 	   		   d=go(d,s);
	 	   		   s=s/2;
	 	   		   
	 	   	
	 	   }
		   return d;
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

	Haar1D objectHaar1D;

	//test case0
	vector <int> param00;
	param00.push_back(1);
	param00.push_back(2);
	param00.push_back(3);
	param00.push_back(5);
	int param01 = 1;
	vector <int> ret0 = objectHaar1D.transform(param00,param01);
	vector <int> need0;
	need0.push_back(3);
	need0.push_back(8);
	need0.push_back(-1);
	need0.push_back(-2);
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(1);
	param10.push_back(2);
	param10.push_back(3);
	param10.push_back(5);
	int param11 = 2;
	vector <int> ret1 = objectHaar1D.transform(param10,param11);
	vector <int> need1;
	need1.push_back(11);
	need1.push_back(-5);
	need1.push_back(-1);
	need1.push_back(-2);
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(1);
	param20.push_back(2);
	param20.push_back(3);
	param20.push_back(4);
	param20.push_back(4);
	param20.push_back(3);
	param20.push_back(2);
	param20.push_back(1);
	int param21 = 3;
	vector <int> ret2 = objectHaar1D.transform(param20,param21);
	vector <int> need2;
	need2.push_back(20);
	need2.push_back(0);
	need2.push_back(-4);
	need2.push_back(4);
	need2.push_back(-1);
	need2.push_back(-1);
	need2.push_back(1);
	need2.push_back(1);
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(94);
	param30.push_back(47);
	param30.push_back(46);
	param30.push_back(28);
	param30.push_back(39);
	param30.push_back(89);
	param30.push_back(75);
	param30.push_back(4);
	param30.push_back(28);
	param30.push_back(62);
	param30.push_back(69);
	param30.push_back(89);
	param30.push_back(34);
	param30.push_back(55);
	param30.push_back(81);
	param30.push_back(24);
	int param31 = 2;
	vector <int> ret3 = objectHaar1D.transform(param30,param31);
	vector <int> need3;
	need3.push_back(215);
	need3.push_back(207);
	need3.push_back(248);
	need3.push_back(194);
	need3.push_back(67);
	need3.push_back(49);
	need3.push_back(-68);
	need3.push_back(-16);
	need3.push_back(47);
	need3.push_back(18);
	need3.push_back(-50);
	need3.push_back(71);
	need3.push_back(-34);
	need3.push_back(-20);
	need3.push_back(-21);
	need3.push_back(57);
	assert_eq(3,ret3,need3);

}

