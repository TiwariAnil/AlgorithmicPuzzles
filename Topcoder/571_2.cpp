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

class FoxAndMp3Easy
{
public:
	vector <string> playList(int n)
	{
		int tmp, x, z;
		vector <string> v, k;
		string s=".mp3", t, r;
		string ch[10]={"0","1","2","3","4","5","6","7","8","9"};//""""", '1','2','3','4','5','6','7','8','9'};
		FOR(i,1, n+1)
		{
			tmp=i;
			t.clear();
			r.clear();
			while(tmp)
			{
				
				x=tmp%10;
			//	error(ch[x]);
				t+=ch[x];
			//	error(t);
				tmp/=10;
			}
			FORs(j,t.length()-1, 0)
			{
				r+=t[j];
			}
			r=r+s;
			//error(r);
			v.push_back(r);
		}
		sort(v.begin(), v.end());
		if(v.size()>50)
		{
			
			FOR(i,0,50)
			{
				k.push_back(v[i]);
			}
			return k;
		}
		
		return v;
		
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

	FoxAndMp3Easy objectFoxAndMp3Easy;

	//test case0
	int param00 = 3;
	vector <string> ret0 = objectFoxAndMp3Easy.playList(param00);
	vector <string> need0;
	need0.push_back("1.mp3");
	need0.push_back("2.mp3");
	need0.push_back("3.mp3");
	assert_eq(0,ret0,need0);

	//test case1
	int param10 = 10;
	vector <string> ret1 = objectFoxAndMp3Easy.playList(param10);
	vector <string> need1;
	need1.push_back("1.mp3");
	need1.push_back("10.mp3");
	need1.push_back("2.mp3");
	need1.push_back("3.mp3");
	need1.push_back("4.mp3");
	need1.push_back("5.mp3");
	need1.push_back("6.mp3");
	need1.push_back("7.mp3");
	need1.push_back("8.mp3");
	need1.push_back("9.mp3");
	assert_eq(1,ret1,need1);

	//test case2
	int param20 = 16;
	vector <string> ret2 = objectFoxAndMp3Easy.playList(param20);
	vector <string> need2;
	need2.push_back("1.mp3");
	need2.push_back("10.mp3");
	need2.push_back("11.mp3");
	need2.push_back("12.mp3");
	need2.push_back("13.mp3");
	need2.push_back("14.mp3");
	need2.push_back("15.mp3");
	need2.push_back("16.mp3");
	need2.push_back("2.mp3");
	need2.push_back("3.mp3");
	need2.push_back("4.mp3");
	need2.push_back("5.mp3");
	need2.push_back("6.mp3");
	need2.push_back("7.mp3");
	need2.push_back("8.mp3");
	need2.push_back("9.mp3");
	assert_eq(2,ret2,need2);

	//test case3
	int param30 = 32;
	vector <string> ret3 = objectFoxAndMp3Easy.playList(param30);
	vector <string> need3;
	need3.push_back("1.mp3");
	need3.push_back("10.mp3");
	need3.push_back("11.mp3");
	need3.push_back("12.mp3");
	need3.push_back("13.mp3");
	need3.push_back("14.mp3");
	need3.push_back("15.mp3");
	need3.push_back("16.mp3");
	need3.push_back("17.mp3");
	need3.push_back("18.mp3");
	need3.push_back("19.mp3");
	need3.push_back("2.mp3");
	need3.push_back("20.mp3");
	need3.push_back("21.mp3");
	need3.push_back("22.mp3");
	need3.push_back("23.mp3");
	need3.push_back("24.mp3");
	need3.push_back("25.mp3");
	need3.push_back("26.mp3");
	need3.push_back("27.mp3");
	need3.push_back("28.mp3");
	need3.push_back("29.mp3");
	need3.push_back("3.mp3");
	need3.push_back("30.mp3");
	need3.push_back("31.mp3");
	need3.push_back("32.mp3");
	need3.push_back("4.mp3");
	need3.push_back("5.mp3");
	need3.push_back("6.mp3");
	need3.push_back("7.mp3");
	need3.push_back("8.mp3");
	need3.push_back("9.mp3");
	assert_eq(3,ret3,need3);

	//test case4
	int param40 = 109;
	vector <string> ret4 = objectFoxAndMp3Easy.playList(param40);
	vector <string> need4;
	need4.push_back("1.mp3");
	need4.push_back("10.mp3");
	need4.push_back("100.mp3");
	need4.push_back("101.mp3");
	need4.push_back("102.mp3");
	need4.push_back("103.mp3");
	need4.push_back("104.mp3");
	need4.push_back("105.mp3");
	need4.push_back("106.mp3");
	need4.push_back("107.mp3");
	need4.push_back("108.mp3");
	need4.push_back("109.mp3");
	need4.push_back("11.mp3");
	need4.push_back("12.mp3");
	need4.push_back("13.mp3");
	need4.push_back("14.mp3");
	need4.push_back("15.mp3");
	need4.push_back("16.mp3");
	need4.push_back("17.mp3");
	need4.push_back("18.mp3");
	need4.push_back("19.mp3");
	need4.push_back("2.mp3");
	need4.push_back("20.mp3");
	need4.push_back("21.mp3");
	need4.push_back("22.mp3");
	need4.push_back("23.mp3");
	need4.push_back("24.mp3");
	need4.push_back("25.mp3");
	need4.push_back("26.mp3");
	need4.push_back("27.mp3");
	need4.push_back("28.mp3");
	need4.push_back("29.mp3");
	need4.push_back("3.mp3");
	need4.push_back("30.mp3");
	need4.push_back("31.mp3");
	need4.push_back("32.mp3");
	need4.push_back("33.mp3");
	need4.push_back("34.mp3");
	need4.push_back("35.mp3");
	need4.push_back("36.mp3");
	need4.push_back("37.mp3");
	need4.push_back("38.mp3");
	need4.push_back("39.mp3");
	need4.push_back("4.mp3");
	need4.push_back("40.mp3");
	need4.push_back("41.mp3");
	need4.push_back("42.mp3");
	need4.push_back("43.mp3");
	need4.push_back("44.mp3");
	need4.push_back("45.mp3");
	assert_eq(4,ret4,need4);

}

