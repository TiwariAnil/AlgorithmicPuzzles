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

void heapify(int *a, int n, int i)
{
	int left=2*i+1, right=2*i+2, large=i;
	if(left<n && a[left]>a[large])
		large=left;
	if(right<n && a[right]>a[large])
		large=right;
	
	if(large!=i)
	{
		int temp=a[i];
		a[i]=a[large];
		a[large]=temp;
		heapify(a, n, large);
	}

}

int main()
{
	int a[]={9,2,7,6,4,3,5,10,1,8};
	int n=10;
	int noofinternalnodes=(n-1)/2, temp;
	
	//Build Heap
	
	for(int i=noofinternalnodes; i>=0; i--)
	{
		heapify(a, n, i);
	}
	
	// Building Heap ends here 
	
	//Sorting Process
	
	for(int i=n-1; i>0; i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(a, i, 0);
	}	
	FOR(i,0,10)
		cout<<a[i]<<" ";
    return 0;
}




