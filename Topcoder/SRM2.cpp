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
//   225
class CellRemoval
{
public:
	int cnt;
	int dfs(int pos,int d,vector <int > p)
	{
		int mi=1;
		if(pos==d)
			return 0;
		for(int i=0;i<p.size();i++)
		  if(p[i]==pos)
			mi+=dfs(i,d,p);
		return mi;
	}
	int cellsLeft(vector <int> p, int d)
	{
		int mi=0;
		for(int i=0;i<p.size();i++)
		{
			if(p[i]==-1)
			{
				mi=dfs(i,d,p);
				break;
			}
		}
		return mi/2;
	}
//	return cnt;
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

	CellRemoval objectCellRemoval;

	//test case0
	vector <int> param00;
	param00.push_back(-1);
	param00.push_back(0);
	param00.push_back(0);
	param00.push_back(1);
	param00.push_back(1);
	int param01 = 2;
	int ret0 = objectCellRemoval.cellsLeft(param00,param01);
	int need0 = 2;
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(-1);
	param10.push_back(0);
	param10.push_back(0);
	param10.push_back(1);
	param10.push_back(1);
	int param11 = 1;
	int ret1 = objectCellRemoval.cellsLeft(param10,param11);
	int need1 = 1;
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(-1);
	param20.push_back(0);
	param20.push_back(0);
	param20.push_back(1);
	param20.push_back(1);
	int param21 = 0;
	int ret2 = objectCellRemoval.cellsLeft(param20,param21);
	int need2 = 0;
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(-1);
	param30.push_back(0);
	param30.push_back(0);
	param30.push_back(2);
	param30.push_back(2);
	param30.push_back(4);
	param30.push_back(4);
	param30.push_back(6);
	param30.push_back(6);
	int param31 = 4;
	int ret3 = objectCellRemoval.cellsLeft(param30,param31);
	int need3 = 2;
	assert_eq(3,ret3,need3);

	//test case4
	vector <int> param40;
	param40.push_back(26);
	param40.push_back(2);
	param40.push_back(32);
	param40.push_back(36);
	param40.push_back(40);
	param40.push_back(19);
	param40.push_back(43);
	param40.push_back(24);
	param40.push_back(30);
	param40.push_back(13);
	param40.push_back(21);
	param40.push_back(14);
	param40.push_back(24);
	param40.push_back(21);
	param40.push_back(19);
	param40.push_back(4);
	param40.push_back(30);
	param40.push_back(10);
	param40.push_back(44);
	param40.push_back(12);
	param40.push_back(7);
	param40.push_back(32);
	param40.push_back(17);
	param40.push_back(43);
	param40.push_back(35);
	param40.push_back(18);
	param40.push_back(7);
	param40.push_back(36);
	param40.push_back(10);
	param40.push_back(16);
	param40.push_back(5);
	param40.push_back(38);
	param40.push_back(35);
	param40.push_back(4);
	param40.push_back(13);
	param40.push_back(-1);
	param40.push_back(16);
	param40.push_back(26);
	param40.push_back(1);
	param40.push_back(12);
	param40.push_back(2);
	param40.push_back(5);
	param40.push_back(18);
	param40.push_back(40);
	param40.push_back(1);
	param40.push_back(17);
	param40.push_back(38);
	param40.push_back(44);
	param40.push_back(14);
	int param41 = 24;
	int ret4 = objectCellRemoval.cellsLeft(param40,param41);
	int need4 = 14;
	assert_eq(4,ret4,need4);

}

