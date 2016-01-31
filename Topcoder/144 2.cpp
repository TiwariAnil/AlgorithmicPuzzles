
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

class BinaryCode
{
public:
	vector <string> decode(string m)
	{
		int a[300], r0[300], r1[300];
		string s0="NONE", s1="NONE";
		
		r0[0]=0;
		r1[0]=1; 
		int  f1=0, f0=0;
		a[0]= (int) m[0]-'0';
		
		//error(a[0]);
		char ch;
		if(m.length()>1)
		{
			s0="0"; s1="1";
			r0[m.length()+1]=r1[m.length()+1]=0;
		}
		FOR(i,1,m.length())
		{
			a[i]= (int) m[i]-'0';
			if(f0==0)
			{
				if(i>1)
					r0[i]=a[i-1]-r0[i-1]-r0[i-2];
				else
					r0[i]=a[i-1]-r0[i-1];
			//	error(r0[i]);
				if(r0[i]>1 || r0[i]<0 && a[i-1]==r0[i-1]+r0[i-2]+r0[i])
					{
						//cout<<"sdkfj";
			//			error(r0[i]);
						f0=1, s0="NONE";
					}
				else
				{
					ch= '0'+r0[i];
					s0+=ch;
				
				}
				//error(s0);		
			}
			
			if(f1==0)
			{
				if(i>1)
					r1[i]=a[i-1]-r1[i-1]-r1[i-2];
				else
					r1[i]=a[i-1]-r1[i-1];
				if(r1[i]>1 || r1[i]<0 && a[i-1]==r0[i-1]+r0[i-2]+r0[i])
					f1=1, s1="NONE";
				else
				{
						ch= '0'+r1[i];
					s1+=ch;
				}
					
			}
			
		}
		vector <string> v;
			v.push_back(s0);
			v.push_back(s1);
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

int main( int argc, char* argv[] )
{

	BinaryCode objectBinaryCode;

	//test case0
	string param00 = "123210122";
	vector <string> ret0 = objectBinaryCode.decode(param00);
	vector <string> need0;
	need0.push_back("011100011");
	need0.push_back("NONE");
	assert_eq(0,ret0,need0);

	//test case1
	string param10 = "11";
	vector <string> ret1 = objectBinaryCode.decode(param10);
	vector <string> need1;
	need1.push_back("01");
	need1.push_back("10");
	assert_eq(1,ret1,need1);

	//test case2
	string param20 = "22111";
	vector <string> ret2 = objectBinaryCode.decode(param20);
	vector <string> need2;
	need2.push_back("NONE");
	need2.push_back("11001");
	assert_eq(2,ret2,need2);

	//test case3
	string param30 = "123210120";
	vector <string> ret3 = objectBinaryCode.decode(param30);
	vector <string> need3;
	need3.push_back("NONE");
	need3.push_back("NONE");
	assert_eq(3,ret3,need3);

	//test case4
	string param40 = "3";
	vector <string> ret4 = objectBinaryCode.decode(param40);
	vector <string> need4;
	need4.push_back("NONE");
	need4.push_back("NONE");
	assert_eq(4,ret4,need4);

	//test case5
	string param50 = "12221112222221112221111111112221111";
	vector <string> ret5 = objectBinaryCode.decode(param50);
	vector <string> need5;
	need5.push_back("01101001101101001101001001001101001");
	need5.push_back("10110010110110010110010010010110010");
	assert_eq(5,ret5,need5);

}

