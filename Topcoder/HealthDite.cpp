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

#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)

class HealthFood
{
public:
	int siz;
	int fun(int j)
	{
		if(j==7 || j==8)
		{
			int k[siz];
			FOR(i,0,siz)
			{
				k[i]=(p[i]+c[i])*5+(9*f[i]);
			}
			
		}
		else
		FOR(i,0,)
		{
			
		}
	}
	vector <int> selectMeals(vector <int> p, vector <int> c, vector <int> f, vector <string> d)
	{
		siz=p.size();
		vector <int> r;
		FOR(i,0,d.size())
		{
			 int a;
             FOR(j,0,d[i].length())
             {
              		switch(d[i][j])
					  {
					   			   case 'P':
									a=fun(1);  	
					  			   break;
					  			   case 'p':	
					  			   a=fun(2);
									 break;
								   case 'C':
								   a=fun(3);	
					  			   break;
								   case 'c':
								   a=fun(4);	
					  			   break;
									case 'F':
									a=fun(5);	
					  			   break; 	 	 	
		   			  			   case 'f':
										a=fun(6);	
					  			   break;
			 					   case 'T':
									a=fun(7);	
					  			   break;
					  			   case 't':
									 a=fun(8);	
					  			   break;
				     }
			 }
		}
	
	
	
	
	
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

	HealthFood objectHealthFood;

	//test case0
	vector <int> param00;
	param00.push_back(3);
	param00.push_back(4);
	vector <int> param01;
	param01.push_back(2);
	param01.push_back(8);
	vector <int> param02;
	param02.push_back(5);
	param02.push_back(2);
	vector <string> param03;
	param03.push_back("P");
	param03.push_back("p");
	param03.push_back("C");
	param03.push_back("c");
	param03.push_back("F");
	param03.push_back("f");
	param03.push_back("T");
	param03.push_back("t");
	vector <int> ret0 = objectHealthFood.selectMeals(param00,param01,param02,param03);
	vector <int> need0;
	need0.push_back(1);
	need0.push_back(0);
	need0.push_back(1);
	need0.push_back(0);
	need0.push_back(0);
	need0.push_back(1);
	need0.push_back(1);
	need0.push_back(0);
	assert_eq(0,ret0,need0);

	//test case1
	vector <int> param10;
	param10.push_back(3);
	param10.push_back(4);
	param10.push_back(1);
	param10.push_back(5);
	vector <int> param11;
	param11.push_back(2);
	param11.push_back(8);
	param11.push_back(5);
	param11.push_back(1);
	vector <int> param12;
	param12.push_back(5);
	param12.push_back(2);
	param12.push_back(4);
	param12.push_back(4);
	vector <string> param13;
	param13.push_back("tFc");
	param13.push_back("tF");
	param13.push_back("Ftc");
	vector <int> ret1 = objectHealthFood.selectMeals(param10,param11,param12,param13);
	vector <int> need1;
	need1.push_back(3);
	need1.push_back(2);
	need1.push_back(0);
	assert_eq(1,ret1,need1);

	//test case2
	vector <int> param20;
	param20.push_back(18);
	param20.push_back(86);
	param20.push_back(76);
	param20.push_back(0);
	param20.push_back(34);
	param20.push_back(30);
	param20.push_back(95);
	param20.push_back(12);
	param20.push_back(21);
	vector <int> param21;
	param21.push_back(26);
	param21.push_back(56);
	param21.push_back(3);
	param21.push_back(45);
	param21.push_back(88);
	param21.push_back(0);
	param21.push_back(10);
	param21.push_back(27);
	param21.push_back(53);
	vector <int> param22;
	param22.push_back(93);
	param22.push_back(96);
	param22.push_back(13);
	param22.push_back(95);
	param22.push_back(98);
	param22.push_back(18);
	param22.push_back(59);
	param22.push_back(49);
	param22.push_back(86);
	vector <string> param23;
	param23.push_back("f");
	param23.push_back("Pt");
	param23.push_back("PT");
	param23.push_back("fT");
	param23.push_back("Cp");
	param23.push_back("C");
	param23.push_back("t");
	param23.push_back("");
	param23.push_back("cCp");
	param23.push_back("ttp");
	param23.push_back("PCFt");
	param23.push_back("P");
	param23.push_back("pCt");
	param23.push_back("cP");
	param23.push_back("Pc");
	vector <int> ret2 = objectHealthFood.selectMeals(param20,param21,param22,param23);
	vector <int> need2;
	need2.push_back(2);
	need2.push_back(6);
	need2.push_back(6);
	need2.push_back(2);
	need2.push_back(4);
	need2.push_back(4);
	need2.push_back(5);
	need2.push_back(0);
	need2.push_back(5);
	need2.push_back(5);
	need2.push_back(6);
	need2.push_back(6);
	need2.push_back(3);
	need2.push_back(5);
	need2.push_back(6);
	assert_eq(2,ret2,need2);

}

