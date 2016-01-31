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
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

// Output macros
#define p(n)                        printf("%d",n)
#define pc(n)                       printf("%c",n)
#define pl(n)                       printf("%lld",n)
#define pf(n)                       printf("%lf",n)
#define ps(n)                       printf("%s",n)

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef pair<int,PII> TRI;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;
typedef vector<TRI> VT;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VII> VVII;
typedef vector<VLL> VVLL;
typedef vector<VT> VVT;

using namespace std;

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}


int n, m ;

int solve()
{
	int carwait,outside,manwait,cartime,mantime,totaltime;
	s(carwait);s(outside);s(manwait);s(cartime);s(mantime);s(totaltime);
	int gotride=0,cargone[100004]={0};// kep outside

	FOR(i,1,totaltime+1)
	{
		    if( i%mantime==0 && outside > 0)
			{
				manwait++;
				outside--;
			}
			if( (i-cartime)==0 && cargone[i-cartime]!=0  )
			{
				carwait+=cargone[i-cartime];
			}

		
		if(carwait <= manwait && carwait!=0)
		{
			gotride+=carwait;
			cargone[i]=carwait;
			
			manwait= manwait- carwait;
			carwait= 0;
		}
		else
		{
			gotride+=manwait;
			cargone[i]=manwait;
			
			carwait = carwait - manwait;
			manwait= 0;
		}

			
			
			
			
			
			
	//	cout<<"Time: ";error(i);
	//	cout<<endl;
	//	error(carwait);error(outside);error(manwait);error(gotride);//error(cartime);error(mantime);error(totaltime);
	//	if(i!=0 && i%cartime && car)
	//	cout<<endl;
		//sum+=gonride[i];
	  }

	p(carwait);printf(" ");p(gotride);printf(" ");p(outside);printf(" ");p(manwait);
	cout<<endl;
	
	return 1;
}

/*
3
1
3 20 5 3 1 10
2 30 3 3 4 14
4 15 6 5 2 18

*/
int main()
{
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
       // if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


