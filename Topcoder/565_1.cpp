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
void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}



class ValueHistogram
{
public:
	vector <string> build(vector <int> v)
	{
        vector <string> s;
        int a[10];
        FOR(i,0,10)
            a[i]=0;
        FOR(i,0,v.size())
            a[v[i]]++;
        int ma=0;
        FOR(i,0,10)
            if(a[i]>ma)
                ma=a[i];
        string t="..........";
        s.push_back(t);
        string str[ma];        
        FOR(i,0,ma)    
        {
            FOR(j,0,10)
            { 
                if(a[j]>0)   
                  str[i]+='X',a[j]--;
                else
                   str[i]+='.';
            }
            //s.push_front(str[i]);
        }
        FORs(i,ma-1,0)
        {
            s.push_back(str[i]);
        }
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

	ValueHistogram objectValueHistogram;

	//test case0
	vector <int> param00;
	param00.push_back(2);
	param00.push_back(3);
	param00.push_back(5);
	param00.push_back(5);
	param00.push_back(5);
	param00.push_back(2);
	param00.push_back(0);
	param00.push_back(8);
	vector <string> ret0 = objectValueHistogram.build(param00);
	vector <string> need0;
	need0.push_back("..........");
	need0.push_back(".....X....");
	need0.push_back("..X..X....");
	need0.push_back("X.XX.X..X.");
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(9);
	param10.push_back(9);
	param10.push_back(9);
	param10.push_back(9);
	vector <string> ret1 = objectValueHistogram.build(param10);
	vector <string> need1;
	need1.push_back("..........");
	need1.push_back(".........X");
	need1.push_back(".........X");
	need1.push_back(".........X");
	need1.push_back(".........X");
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(6);
	param20.push_back(4);
	param20.push_back(0);
	param20.push_back(0);
	param20.push_back(3);
	param20.push_back(9);
	param20.push_back(8);
	param20.push_back(8);
	vector <string> ret2 = objectValueHistogram.build(param20);
	vector <string> need2;
	need2.push_back("..........");
	need2.push_back("X.......X.");
	need2.push_back("X..XX.X.XX");
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(0);
	param30.push_back(1);
	param30.push_back(2);
	param30.push_back(3);
	param30.push_back(4);
	param30.push_back(5);
	param30.push_back(6);
	param30.push_back(7);
	param30.push_back(8);
	param30.push_back(9);
	vector <string> ret3 = objectValueHistogram.build(param30);
	vector <string> need3;
	need3.push_back("..........");
	need3.push_back("XXXXXXXXXX");
	assert_eq(3,ret3,need3);

	//test case4
	vector <int> param40;
	param40.push_back(6);
	param40.push_back(2);
	param40.push_back(3);
	param40.push_back(3);
	param40.push_back(3);
	param40.push_back(7);
	param40.push_back(8);
	param40.push_back(1);
	param40.push_back(0);
	param40.push_back(9);
	param40.push_back(2);
	param40.push_back(2);
	param40.push_back(4);
	param40.push_back(3);
	vector <string> ret4 = objectValueHistogram.build(param40);
	vector <string> need4;
	need4.push_back("..........");
	need4.push_back("...X......");
	need4.push_back("..XX......");
	need4.push_back("..XX......");
	need4.push_back("XXXXX.XXXX");
	assert_eq(4,ret4,need4);
    system("pause");
}
