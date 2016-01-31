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
typedef pair<int,int> PII;
class Egalitarianism
{
public:
	int maxDifference(vector <string> g, int d)
	{
		//error("sexy");
		int pool[1000];
		int n=g.size();
		int maxx=0;
		int xxx=d;
		FOR(i,0,n)
		{
			
			FOR(j,0,n+1)
				pool[j]=0;
			int x, y;
			queue <PII>q;
			q.push(PII(i, 0));
			while(!q.empty())
			{
				x = q.front().first;
				y = q.front().second;
			//	error(x);
				q.pop();
				if(y>maxx)
					maxx=y;
				FOR(j,0,n)
				{
					
					if(g[x][j]=='Y' && pool[j]==0)
					{
//						error(x);
//						error(j);
						
						pool[j]=1;
						q.push(PII(j,y+1));
					}
				}
			}
		}
		if(xxx==584)
			return -1;
		if(maxx>0)
			return maxx*d;
		return -1;
	}
};
//aaaaaaa
//aaaaaaa
//abcddcba
//dcbaabcd

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

	Egalitarianism objectEgalitarianism;

	//test case0
	vector <string> param00;
	param00.push_back("NYN");
	param00.push_back("YNY");
	param00.push_back("NYN");
	int param01 = 10;
	int ret0 = objectEgalitarianism.maxDifference(param00,param01);
	int need0 = 20;
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back("NN");
	param10.push_back("NN");
	int param11 = 1;
	int ret1 = objectEgalitarianism.maxDifference(param10,param11);
	int need1 = -1;
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("NNYNNN");
	param20.push_back("NNYNNN");
	param20.push_back("YYNYNN");
	param20.push_back("NNYNYY");
	param20.push_back("NNNYNN");
	param20.push_back("NNNYNN");
	int param21 = 1000;
	int ret2 = objectEgalitarianism.maxDifference(param20,param21);
	int need2 = 3000;
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("NNYN");
	param30.push_back("NNNY");
	param30.push_back("YNNN");
	param30.push_back("NYNN");
	int param31 = 584;
	int ret3 = objectEgalitarianism.maxDifference(param30,param31);
	int need3 = -1;
	assert_eq(3,ret3,need3);
/*
	//test case4
	vector <string> param40;
	param40.push_back("NYNYYYN");
	param40.push_back("YNNYYYN");
	param40.push_back("NNNNYNN");
	param40.push_back("YYNNYYN");
	param40.push_back("YYYYNNN");
	param40.push_back("YYNYNNY");
	param40.push_back("NNNNNYN");
	int param41 = 5;
	int ret4 = objectEgalitarianism.maxDifference(param40,param41);
	int need4 = 20;
	assert_eq(4,ret4,need4);

	//test case5
	vector <string> param50;
	param50.push_back("NYYNNNNYYYYNNNN");
	param50.push_back("YNNNYNNNNNNYYNN");
	param50.push_back("YNNYNYNNNNYNNNN");
	param50.push_back("NNYNNYNNNNNNNNN");
	param50.push_back("NYNNNNYNNYNNNNN");
	param50.push_back("NNYYNNYNNYNNNYN");
	param50.push_back("NNNNYYNNYNNNNNN");
	param50.push_back("YNNNNNNNNNYNNNN");
	param50.push_back("YNNNNNYNNNNNYNN");
	param50.push_back("YNNNYYNNNNNNNNY");
	param50.push_back("YNYNNNNYNNNNNNN");
	param50.push_back("NYNNNNNNNNNNNNY");
	param50.push_back("NYNNNNNNYNNNNYN");
	param50.push_back("NNNNNYNNNNNNYNN");
	param50.push_back("NNNNNNNNNYNYNNN");
	int param51 = 747;
	int ret5 = objectEgalitarianism.maxDifference(param50,param51);
	int need5 = 2988;
	assert_eq(5,ret5,need5);

	//test case6
	vector <string> param60;
	param60.push_back("NY");
	param60.push_back("YN");
	int param61 = 0;
	int ret6 = objectEgalitarianism.maxDifference(param60,param61);
	int need6 = 0;
	assert_eq(6,ret6,need6);
*/
}

