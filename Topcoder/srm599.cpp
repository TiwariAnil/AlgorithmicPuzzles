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

class BlockTower
{
public:
	int getTallest(vector <int> a)
	{
		int siz=a.size(),sum=0;
		int sum1=a[0],sum2=a[0],cur1,cur2,sum3,cur3;
		//sort(a.begin(),a.end());
	sum1=0;
	for(int j=0;j<siz;j++)
	{
	 			//sum2=cur1=cur2=cur3=sum3=a[j];
	    sum1=0;
		for(int i=0;i<siz;i++)
		{
			if(i==0)
			{
				if(i<=j)

    		   if(a[i]%2==0 )
			     sum1+=a[i];

            }
			else
			{
				 if(i<=j)
			   if(a[i]>=a[i-1])
    		   if(a[i]%2==0 )
			     sum1+=a[i];

			}

			 if(i>j)
				if(a[i]>=a[i-1])
    		   if(a[i]%2==1 )
			     sum1+=a[i];
		}
		
		sum=max(sum1,sum);
    }
		if(a[0]%2==0)
		sum1=a[0];
		else
		sum2=a[0];
		for(int i=1;i<siz;i++)
		{
			if(a[i]>=a[i-1])
			   if(a[i]%2==0 )
			    sum1+=a[i];

				if(a[i]>=a[i-1])
			  if(a[i]%2==1)
			    sum2+=a[i];

		}
		int temp=max(sum1,sum2);
 		sum=max(temp,sum);

    return sum;
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

	BlockTower objectBlockTower;

	//test case0
	vector <int> param00;
	param00.push_back(4);
	param00.push_back(7);
	int ret0 = objectBlockTower.getTallest(param00);
	int need0 = 11;
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(7);
	param10.push_back(4);
	int ret1 = objectBlockTower.getTallest(param10);
	int need1 = 7;
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(7);
	int ret2 = objectBlockTower.getTallest(param20);
	int need2 = 7;
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(4);
	int ret3 = objectBlockTower.getTallest(param30);
	int need3 = 4;
	assert_eq(3,ret3,need3);

	//test case4
	vector <int> param40;
	param40.push_back(48);
	param40.push_back(1);
	param40.push_back(50);
	param40.push_back(1);
	param40.push_back(50);
	param40.push_back(1);
	param40.push_back(48);
	int ret4 = objectBlockTower.getTallest(param40);
	int need4 = 196;
	assert_eq(4,ret4,need4);

	//test case5
	vector <int> param50;
	param50.push_back(49);
	param50.push_back(2);
	param50.push_back(49);
	param50.push_back(2);
	param50.push_back(49);
	int ret5 = objectBlockTower.getTallest(param50);
	int need5 = 147;
	assert_eq(5,ret5,need5);

	//test case6
	vector <int> param60;
	param60.push_back(44);
	param60.push_back(3);
	param60.push_back(44);
	param60.push_back(3);
	param60.push_back(44);
	param60.push_back(47);
	param60.push_back(2);
	param60.push_back(47);
	param60.push_back(2);
	param60.push_back(47);
	param60.push_back(2);
	int ret6 = objectBlockTower.getTallest(param60);
	int need6 = 273;
	assert_eq(6,ret6,need6);

}

