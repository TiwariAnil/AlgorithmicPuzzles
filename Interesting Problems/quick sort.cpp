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
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}

-----------BETTER-------------------------

#Watch https://www.youtube.com/watch?v=aQiWF4E8flQ video and then read from http://geeksquiz.com/quick-sort/ link

int partition (int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i + 1], &arr[h]);
    return (i + 1);
}

/* A[] --> Array to be sorted, l  --> Starting index, h  --> Ending index */
void quickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int p = partition(A, l, h); /* Partitioning index */
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, h);
    }
}


-----------------------------------------













int split(int *a, int lower, int upper)
{
    int pivot, less, more, tmp;
    pivot=lower;
    less=lower+1;
    more=upper;    //error(high); error(low);
    while(less <= more)
    {
        while(a[less] < a[pivot] )
        {
            less++;
        }
        while(a[more] > a[pivot])
        {
            more--;
        }

        if(less < more)
        {
            tmp=a[less];
            a[less]=a[more];
            a[more]=tmp;
        }        //error(low);
    }
    tmp=a[lower];
    a[lower]=a[more];
    a[more]=tmp;
    return more;
}
void quicksort(int *a, int lower, int upper)
{
    if(lower < upper)
    {

        int i= split(a, lower, upper);
      //  error(i);
        quicksort(a, lower, i-1);
        quicksort(a, i+1, upper);
    }
}
int n, m ;

int solve()
{

    return 1;
}

bool input()
{
    /*
    10
    2 39 19 49 11 34 23 21 0 12
    */
    int a[10]= { 11, 2, 9, 13, 57, 25, 17, 1, 90, 3 } ;

    s(n);
    /*
    FOR(i,0,n)
    {
    	s(a[i]);
    }
    */
    quicksort(a ,0 , n);

    FOR(i,0,n)
    {
        p(a[i]);
        cout<<" ";
    }
    return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int T=1;
    //s(T);
    for(int testnum=1; testnum<=T; testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}




