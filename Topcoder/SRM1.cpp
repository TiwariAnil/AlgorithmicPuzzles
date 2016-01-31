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

class FriendScore
{
public:
	int highestScore(vector <string> f)
	{
		int sz=f[0].length(),mx=0,cnt;
		int a[100][100]={0};
		for(int i=0;i<sz;i++)
		{
			cnt=0;
			for(int j=0;j<sz;j++)
			{
				if(f[i][j]=='Y')
				{
					cnt++;
					a[i][j]=1;
					for(int k=0;k<sz;k++)
					{
						if(f[j][k]=='Y' && k!=i && f[i][k]!='Y' && a[i][k]!=1)
						cnt++,a[i][k]=1;
					}
				}
			}
			if(cnt>mx)
			mx=cnt;
		}
		return mx;



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

	FriendScore objectFriendScore;

	//test case0
	vector <string> param00;
	param00.push_back("NNN");
	param00.push_back("NNN");
	param00.push_back("NNN");
	int ret0 = objectFriendScore.highestScore(param00);
	int need0 = 0;
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back("NYY");
	param10.push_back("YNY");
	param10.push_back("YYN");
	int ret1 = objectFriendScore.highestScore(param10);
	int need1 = 2;
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("NYNNN");
	param20.push_back("YNYNN");
	param20.push_back("NYNYN");
	param20.push_back("NNYNY");
	param20.push_back("NNNYN");
	int ret2 = objectFriendScore.highestScore(param20);
	int need2 = 4;
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("NNNNYNNNNN");
	param30.push_back("NNNNYNYYNN");
	param30.push_back("NNNYYYNNNN");
	param30.push_back("NNYNNNNNNN");
	param30.push_back("YYYNNNNNNY");
	param30.push_back("NNYNNNNNYN");
	param30.push_back("NYNNNNNYNN");
	param30.push_back("NYNNNNYNNN");
	param30.push_back("NNNNNYNNNN");
	param30.push_back("NNNNYNNNNN");
	int ret3 = objectFriendScore.highestScore(param30);
	int need3 = 8;
	assert_eq(3,ret3,need3);

	//test case4
	vector <string> param40;
	param40.push_back("NNNNNNNNNNNNNNY");
	param40.push_back("NNNNNNNNNNNNNNN");
	param40.push_back("NNNNNNNYNNNNNNN");
	param40.push_back("NNNNNNNYNNNNNNY");
	param40.push_back("NNNNNNNNNNNNNNY");
	param40.push_back("NNNNNNNNYNNNNNN");
	param40.push_back("NNNNNNNNNNNNNNN");
	param40.push_back("NNYYNNNNNNNNNNN");
	param40.push_back("NNNNNYNNNNNYNNN");
	param40.push_back("NNNNNNNNNNNNNNY");
	param40.push_back("NNNNNNNNNNNNNNN");
	param40.push_back("NNNNNNNNYNNNNNN");
	param40.push_back("NNNNNNNNNNNNNNN");
	param40.push_back("NNNNNNNNNNNNNNN");
	param40.push_back("YNNYYNNNNYNNNNN");
	int ret4 = objectFriendScore.highestScore(param40);
	int need4 = 6;
	assert_eq(4,ret4,need4);

}

