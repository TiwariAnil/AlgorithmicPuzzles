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

class MagicMoleculeEasy
{
public:
	int maxMagicPower(vector <int> magicPower, vector <string> magicBond, int k)
	{
		
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

	MagicMoleculeEasy objectMagicMoleculeEasy;

	//test case0
	vector <int> param00;
	param00.push_back(1);
	param00.push_back(2);
	vector <string> param01;
	param01.push_back("NY");
	param01.push_back("YN");
	int param02 = 1;
	int ret0 = objectMagicMoleculeEasy.maxMagicPower(param00,param01,param02);
	int need0 = 2;
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(100);
	param10.push_back(1);
	param10.push_back(100);
	vector <string> param11;
	param11.push_back("NYN");
	param11.push_back("YNY");
	param11.push_back("NYN");
	int param12 = 1;
	int ret1 = objectMagicMoleculeEasy.maxMagicPower(param10,param11,param12);
	int need1 = 1;
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(100);
	param20.push_back(1);
	param20.push_back(100);
	vector <string> param21;
	param21.push_back("NYN");
	param21.push_back("YNY");
	param21.push_back("NYN");
	int param22 = 2;
	int ret2 = objectMagicMoleculeEasy.maxMagicPower(param20,param21,param22);
	int need2 = 200;
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(4);
	param30.push_back(7);
	param30.push_back(5);
	param30.push_back(8);
	vector <string> param31;
	param31.push_back("NYNY");
	param31.push_back("YNYN");
	param31.push_back("NYNY");
	param31.push_back("YNYN");
	int param32 = 2;
	int ret3 = objectMagicMoleculeEasy.maxMagicPower(param30,param31,param32);
	int need3 = 15;
	assert_eq(3,ret3,need3);

	//test case4
	vector <int> param40;
	param40.push_back(46474);
	param40.push_back(60848);
	param40.push_back(98282);
	param40.push_back(58073);
	param40.push_back(42670);
	param40.push_back(50373);
	vector <string> param41;
	param41.push_back("NYNNNY");
	param41.push_back("YNNYNY");
	param41.push_back("NNNYYY");
	param41.push_back("NYYNNN");
	param41.push_back("NNYNNN");
	param41.push_back("YYYNNN");
	int param42 = 3;
	int ret4 = objectMagicMoleculeEasy.maxMagicPower(param40,param41,param42);
	int need4 = 209503;
	assert_eq(4,ret4,need4);

	//test case5
	vector <int> param50;
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	param50.push_back(1);
	vector <string> param51;
	param51.push_back("NNYYYNYYNYNNY");
	param51.push_back("NNYNYYYYYYYNY");
	param51.push_back("YYNYYNYYYYYYY");
	param51.push_back("YNYNYYNYYYYYY");
	param51.push_back("YYYYNNYYYYYNY");
	param51.push_back("NYNYNNYYYYYNN");
	param51.push_back("YYYNYYNYYYYYY");
	param51.push_back("YYYYYYYNYNYYY");
	param51.push_back("NYYYYYYYNYYYY");
	param51.push_back("YYYYYYYNYNNNN");
	param51.push_back("NYYYYYYYYNNYN");
	param51.push_back("NNYYNNYYYNYNN");
	param51.push_back("YYYYYNYYYNNNN");
	int param52 = 9;
	int ret5 = objectMagicMoleculeEasy.maxMagicPower(param50,param51,param52);
	int need5 = -1;
	assert_eq(5,ret5,need5);

	//test case6
	vector <int> param60;
	param60.push_back(1);
	param60.push_back(1);
	vector <string> param61;
	param61.push_back("NN");
	param61.push_back("NN");
	int param62 = 1;
	int ret6 = objectMagicMoleculeEasy.maxMagicPower(param60,param61,param62);
	int need6 = 1;
	assert_eq(6,ret6,need6);

	//test case7
	vector <int> param70;
	param70.push_back(1);
	param70.push_back(1);
	param70.push_back(2);
	param70.push_back(5);
	param70.push_back(2);
	param70.push_back(4);
	param70.push_back(2);
	vector <string> param71;
	param71.push_back("NNNNNNN");
	param71.push_back("NNYNNNN");
	param71.push_back("NYNNNYN");
	param71.push_back("NNNNNNY");
	param71.push_back("NNNNNNN");
	param71.push_back("NNYNNNN");
	param71.push_back("NNNYNNN");
	int param72 = 3;
	int ret7 = objectMagicMoleculeEasy.maxMagicPower(param70,param71,param72);
	int need7 = 11;
	assert_eq(7,ret7,need7);

}

