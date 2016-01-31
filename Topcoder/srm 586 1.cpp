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

class TeamsSelection
{
public:
	string simulate(vector <int> p1, vector <int> p2)
	{
		int a[100], b[100];
		FOR(i,0,100)
			a[i]=0;
		int n=p1.size(), x=0, y=0, cnt=0;
		while(cnt<n)
		{
			while(a[p1[x]]!=0)
			{
				x++;
			}
			
			b[p1[x]]=1;
			a[p1[x]]=1;
			while(a[p2[y]]!=0)
			{
				y++;
			}
	//		error(x); error(y);
			b[p2[y]]=2;
			a[p2[y]]=1;
			cnt+=2;
		}
		string s;
		FOR(i,1,n+1)
		{
			if(b[i]==1)
			{
				s+='1';
			}
			else
				s+='2';
	//		cout<<s<<endl;
		}
	//	cout<<s;
		return s;
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

	TeamsSelection objectTeamsSelection;

	//test case0
	vector <int> param00;
	param00.push_back(1);
	param00.push_back(2);
	param00.push_back(3);
	param00.push_back(4);
	vector <int> param01;
	param01.push_back(1);
	param01.push_back(2);
	param01.push_back(3);
	param01.push_back(4);
	string ret0 = objectTeamsSelection.simulate(param00,param01);
	string need0 = "1212";
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(3);
	param10.push_back(2);
	param10.push_back(1);
	vector <int> param11;
	param11.push_back(1);
	param11.push_back(3);
	param11.push_back(2);
	string ret1 = objectTeamsSelection.simulate(param10,param11);
	string need1 = "211";
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(6);
	param20.push_back(1);
	param20.push_back(5);
	param20.push_back(2);
	param20.push_back(3);
	param20.push_back(4);
	vector <int> param21;
	param21.push_back(1);
	param21.push_back(6);
	param21.push_back(3);
	param21.push_back(4);
	param21.push_back(5);
	param21.push_back(2);
	string ret2 = objectTeamsSelection.simulate(param20,param21);
	string need2 = "212211";
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(8);
	param30.push_back(7);
	param30.push_back(1);
	param30.push_back(2);
	param30.push_back(4);
	param30.push_back(5);
	param30.push_back(6);
	param30.push_back(3);
	param30.push_back(9);
	vector <int> param31;
	param31.push_back(7);
	param31.push_back(2);
	param31.push_back(4);
	param31.push_back(8);
	param31.push_back(1);
	param31.push_back(5);
	param31.push_back(9);
	param31.push_back(6);
	param31.push_back(3);
	string ret3 = objectTeamsSelection.simulate(param30,param31);
	string need3 = "121121212";
	assert_eq(3,ret3,need3);

}

