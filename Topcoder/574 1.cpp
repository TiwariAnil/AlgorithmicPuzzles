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

class CityMap
{
public:
	string getLegend(vector <string> C, vector <int> P)
	{
		
		map <char, int> mp;
		map <int , char>xx;
		map <char, int>:: iterator it;
		
		int siz=C.size(), len=C[0].length();
		FOR(i,0,siz)
		{
			FOR(j,0,len)
			{
				mp[C[i][j]]++;
			}
		}
		for (it=mp.begin(); it!=mp.end(); ++it)
		{
			xx[it->second]=it->first;
		}
    //std::cout <<  << " => " <<  << '\n';
		string r;
		FOR(i,0,P.size())
		{
			r+=xx[P[i]];
		}
		return r;
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

	CityMap objectCityMap;

	//test case0
	vector <string> param00;
	param00.push_back("M....M");
	param00.push_back("...R.M");
	param00.push_back("R..R.R");
	vector <int> param01;
	param01.push_back(3);
	param01.push_back(4);
	string ret0 = objectCityMap.getLegend(param00,param01);
	string need0 = "MR";
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back("XXXXXXXZXYYY");
	vector <int> param11;
	param11.push_back(1);
	param11.push_back(8);
	param11.push_back(3);
	string ret1 = objectCityMap.getLegend(param10,param11);
	string need1 = "ZXY";
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("...........");
	param20.push_back("...........");
	param20.push_back("...........");
	param20.push_back("..........T");
	vector <int> param21;
	param21.push_back(1);
	string ret2 = objectCityMap.getLegend(param20,param21);
	string need2 = "T";
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("AIAAARRI.......GOAI.");
	param30.push_back(".O..AIIGI.OAAAGI.A.I");
	param30.push_back(".A.IAAAARI..AI.AAGR.");
	param30.push_back("....IAI..AOIGA.GAIA.");
	param30.push_back("I.AIIIAG...GAR.IIAGA");
	param30.push_back("IA.AOA....I....I.GAA");
	param30.push_back("IOIGRAAAO.AI.AA.RAAA");
	param30.push_back("AI.AAA.AIR.AGRIAAG..");
	param30.push_back("AAAAIAAAI...AAG.RGRA");
	param30.push_back(".J.IA...G.A.AA.II.AA");
	vector <int> param31;
	param31.push_back(16);
	param31.push_back(7);
	param31.push_back(1);
	param31.push_back(35);
	param31.push_back(11);
	param31.push_back(66);
	string ret3 = objectCityMap.getLegend(param30,param31);
	string need3 = "GOJIRA";
	assert_eq(3,ret3,need3);

}

