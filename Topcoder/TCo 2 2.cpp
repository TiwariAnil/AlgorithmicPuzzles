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

class EllysFigurines
{
public:
	int getMoves(vector <string> b, int R, int C)
	{
		int flag=0;
		int rs=b.size()-1, cs=b[0].length()-1;
		int arr1[20]={0}, arr2[20]={0};
		//vector<int> r, c;
		FOR(i,0,b.size())
		{
			flag=0;
			FOR(j,0,b[0].length())
			{
				if(b[i][j]=='X')
				{
					flag=1; break;
				}
			}
			if(flag==0)
			{
				arr1[i]=1;
				//r.push_back(i);
			}
		}
		
		FOR(i,0,b[0].length())
		{
			flag=0;
			FOR(j,0,b.size())
			{
				if(b[j][i]=='X')
				{
					flag=1; break;
				}
			}
			if(flag==0)
			{
				arr2[i]=1;
				//c.push_back(j);
			}
		}
		int x;
		//r.push_back(0);
		//c.push_back(0);
		//sort(all(r));
		//sort(all(c));
		int prev=0, cnt1=0, cnt2=0;
		FOR(i,0,rs)
		{
			if(arr1[i]==1 )
			{
				if(i==1 && arr1[0]==1)
					prev=1;
				else
				{
					x=i-prev;
					if(x%R==0)
						cnt1+=(x/R);
					else
					   cnt1+=((x/R)+1);
					prev=i;
				}
			}
		//	x=r[i]-r[i-1];	
		}
		prev=0;
		FOR(i,0,cs)
		{
			if(arr2[i]==1 )
			{
				if(i==1 && arr1[0]==1)
					prev=1;
				else
				{
					x=i-prev;
					if(x%C==0)
						cnt2+=(x/R);
					else
					   cnt2+=((x/R)+1);
					prev=i;
				}
			}
			//x=r[i]-r[i-1];	
		}
		error(cnt1);
		error(cnt2);
		return miN(cnt1, cnt2);
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

	EllysFigurines objectEllysFigurines;

	//test case0
	vector <string> param00;
	param00.push_back(".....");
	param00.push_back(".X...");
	param00.push_back(".X...");
	param00.push_back(".....");
	param00.push_back(".X..X");
	
	/*
	param00.push_back(".X.X.");
	param00.push_back("XX..X");
	param00.push_back(".XXX.");
	param00.push_back("...X.");
	param00.push_back(".X.XX");
	*/
	int param01 = 1;
	int param02 = 20;
	int ret0 = objectEllysFigurines.getMoves(param00,param01,param02);
	int need0 = 20;//3;
	assert_eq(0,ret0,need0);

	//test case1
	vector <string> param10;
	param10.push_back(".X.X.");
	param10.push_back("XX..X");
	param10.push_back(".X.X.");
	param10.push_back("...X.");
	param10.push_back(".X.XX");
	int param11 = 2;
	int param12 = 2;
	int ret1 = objectEllysFigurines.getMoves(param10,param11,param12);
	int need1 = 2;
	assert_eq(1,ret1,need1);

	//test case2
	vector <string> param20;
	param20.push_back("XXXXXXX");
	int param21 = 2;
	int param22 = 3;
	int ret2 = objectEllysFigurines.getMoves(param20,param21,param22);
	int need2 = 1;
	assert_eq(2,ret2,need2);

	//test case3
	vector <string> param30;
	param30.push_back("XXXXX");
	param30.push_back("X....");
	param30.push_back("XXX..");
	param30.push_back("X....");
	param30.push_back("XXXXX");
	int param31 = 1;
	int param32 = 1;
	int ret3 = objectEllysFigurines.getMoves(param30,param31,param32);
	int need3 = 4;
	assert_eq(3,ret3,need3);

	//test case4
	vector <string> param40;
	param40.push_back("XXX..XXX..XXX.");
	param40.push_back(".X..X....X...X");
	param40.push_back(".X..X....X...X");
	param40.push_back(".X..X....X...X");
	param40.push_back(".X...XXX..XXX.");
	param40.push_back("..............");
	param40.push_back("...XX...XXX...");
	param40.push_back("....X......X..");
	param40.push_back("....X....XXX..");
	param40.push_back("....X......X..");
	param40.push_back("...XXX..XXX...");
	int param41 = 1;
	int param42 = 2;
	int ret4 = objectEllysFigurines.getMoves(param40,param41,param42);
	int need4 = 7;
	assert_eq(4,ret4,need4);

}

