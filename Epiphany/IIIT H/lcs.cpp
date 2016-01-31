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


int n, m , cnt=0, pos;
int x[100009], y[100009],  py[100009], px[100009];
bool ckx[100009], cky[100009];
int solve()
{
	int cnt1=0, cnt2=0;
	int posx=-1, posy=-1;
	FOR(i,0,n)
	{
		//ckx[x[i]]=true;
		cky[y[i]]=true;
		ckx[x[i]]=true;
		if(cky[x[i]]==true && posy<py[x[i]])
		{
			cnt1++;
			posx=i;
			posy=py[x[i]];
			//error(pos);
		}
		if(ckx[y[i]]==true && posx<px[y[i]] )
			{
				posx=px[y[i]];
				cnt1++;
				posy=i;
			}
			
		
		//error(posy);
	}
	posx=-1, posy=-1;
	FOR(i,0,n)
	{
		//ckx[x[i]]=true;
		cky[y[i]]=false;
		ckx[x[i]]=false;
		if(ckx[y[i]]==false && posx<px[y[i]])
		{
			cnt2++;
			posy=i;
			posx=px[y[i]];
			//error(pos);
		}
		if(cky[x[i]]==false && posy<py[x[i]] )
		{
			cnt2++;
			posx=i;
			posy=py[x[i]];
			
		}
			
		
		//error(posy);
	}
//	error(cnt1);
//	error(cnt2);
	cout<<maX(cnt1, cnt2);
	cout<<endl;
	//cout<<cnt1<<endl;
    return 1;
}
/*
10
2
1 2
2 1
3
1 2 3
1 3 2
10
1 2 3 4 5 6 7 8 9 10
2 1 10 3 7 6 4 5 9 8
10
1 2 3 4 5 6 7 8 9 10
2 1 5 3 7 6 4 10 9 8

*/


bool input()
{
	s(n);
	//m=n;
	cnt=0;
	FOR(i,0,n)
		s(x[i]), px[x[i]]=i, ckx[i]=false;
	
	FOR(i,0,n)
		s(y[i]), py[y[i]]=i, cky[i]=false;
	return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




