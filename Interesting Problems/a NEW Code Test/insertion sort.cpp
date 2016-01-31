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

int ceilsearch(int a[], int n, int key){
    int start=0, end=n;
    if(a[n]<key)
        return n+1;
    if(a[0]>key)
        return 0;
    int mid;
    while(start<=end){
        mid= (start+end)/2;

        if(a[mid]<key && key<a[mid+1])
            return mid+1;

        if(a[mid]<key){
            start=mid+1;
        }
        else
            end=mid-1;

    }
    return -1;//+1;
}

void insertion_sort(int a[], int n){


    for(int i=1; i<n; i++){
        int j= ceilsearch(a, i-1, a[i]);
        error(j);
        if(j!=i && j!=-1){
            int tmp=a[i];
            for(int k=i; k>j; k--){
                a[k]=a[k-1];
            }
            a[j]=tmp;
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    //s(T);
    int a[10]={9,3,0,1,8,5,4,6,2,7};
    insertion_sort(a, 10);
    for(int testnum=0;testnum<10;testnum++)
    {
        printf("%d ", a[testnum]);

    }
//    system("pause");
    return 0;
}




