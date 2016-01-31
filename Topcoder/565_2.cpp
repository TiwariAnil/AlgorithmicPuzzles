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



class MonstersValley2
{
public:
    int sol(int price, long long dread,  vector <int> d, vector <int> p, int x  )
    {
     //   error(price);
       // error(dread);
	   if(x==d.size())
	       	return price;
	   if(dread < d[x])
	       	return(sol(price+ p[x], dread + d[x],  d,  p, x+1 ) );
       
       return miN(sol( price+p[x], dread+d[x], d, p, x+1), sol(price, dread, d, p, x+1 ) );
    }
	int minimumPrice(vector <int> d, vector <int> p)
	{
        //long long onep=p[0], oned=d[0], twop=p[0], twod=d[0];
        int x= 0;
        int price=0;
        long long dread=0;
        return sol(price, dread, d, p, x );
               
	}
};
//{{730354301, 612652745, 231201198, 1785940683, 1573792486, 1862050299, 55215265, 1482185079, 580169303, 745811023, 116284213, 1674085202, 243582700, 1259989441, 459631588, 1113164735, 549938993, 1675101506, 144384566, 1897340738}, {2, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2}}

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

	MonstersValley2 objectMonstersValley2;

	//test case0
/*	vector <int> param00;
	param00.push_back(8);
	param00.push_back(5);
	param00.push_back(10);
	vector <int> param01;
	param01.push_back(1);
	param01.push_back(1);
	param01.push_back(2);
	int ret0 = objectMonstersValley2.minimumPrice(param00,param01);
	int need0 = 2;
	assert_eq(0,ret0,need0);
*/
	vector <int> param00;
	param00.push_back(1000000000);
	param00.push_back(1000000000);
	param00.push_back(2000000000);
	vector <int> param01;
	param01.push_back(1);
	param01.push_back(2);
	param01.push_back(2);
	int ret0 = objectMonstersValley2.minimumPrice(param00,param01);
	int need0 = 3;
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(1);
	param10.push_back(2);
	param10.push_back(4);
	param10.push_back(1000000000);
	vector <int> param11;
	param11.push_back(1);
	param11.push_back(1);
	param11.push_back(1);
	param11.push_back(2);
	int ret1 = objectMonstersValley2.minimumPrice(param10,param11);
	int need1 = 5;
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(200);
	param20.push_back(107);
	param20.push_back(105);
	param20.push_back(206);
	param20.push_back(307);
	param20.push_back(400);
	vector <int> param21;
	param21.push_back(1);
	param21.push_back(2);
	param21.push_back(1);
	param21.push_back(1);
	param21.push_back(1);
	param21.push_back(2);
	int ret2 = objectMonstersValley2.minimumPrice(param20,param21);
	int need2 = 2;
	assert_eq(2,ret2,need2);

	//test case3
	vector <int> param30;
	param30.push_back(5216);
	param30.push_back(12512);
	param30.push_back(613);
	param30.push_back(1256);
	param30.push_back(66);
	param30.push_back(17202);
	param30.push_back(30000);
	param30.push_back(23512);
	param30.push_back(2125);
	param30.push_back(33333);
	vector <int> param31;
	param31.push_back(2);
	param31.push_back(2);
	param31.push_back(1);
	param31.push_back(1);
	param31.push_back(1);
	param31.push_back(1);
	param31.push_back(2);
	param31.push_back(1);
	param31.push_back(2);
	param31.push_back(1);
	int ret3 = objectMonstersValley2.minimumPrice(param30,param31);
	int need3 = 5;
	assert_eq(3,ret3,need3);
 
    system("pause");
}
