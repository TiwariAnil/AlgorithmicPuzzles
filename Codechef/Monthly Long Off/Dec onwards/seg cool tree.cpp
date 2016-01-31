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
//#define s(n)                        scanf("%d",&n)
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

template<class T>
class SegmentTree
{
     public:
     int *A,size;
     
	 SegmentTree(int N)
     {
          int x = (int)(ceil(log2(N)))+1;
          size = 2*(int)pow(2,x);
          A = new int[size];
          memset(A,-1,sizeof(A));
     }
     void initialize(int node, int start, int end, T *array)
     {
     	
 		cout<<"node_no : "<<node<<endl;
        	chekarre(array, 5);
		  if (start==end)
             A[node] = start;
          else
          {
              int mid = (start+end)/2;
              initialize(2*node,start,mid,array);
              initialize(2*node+1,mid+1,end,array);
              //array is input, and A is out tree
			  if (array[A[2*node]]<=
                     array[A[2*node+1]])
                 A[node] = A[2 * node];
              else
                  A[node] = A[2 * node + 1];
          }
     }
     int query(int node, int start,
                   int end, int i, int j, T *array)
     {
         int id1,id2;
         if (i>end || j<start)
            return -1;
 
         if (start>=i && end<=j)
            return A[node];
 
         int mid = (start+end)/2;
         id1 = query(2*node,start,mid,i,j,array);
         id2 = query(2*node+1,mid+1,end,i,j,array);
 
         if (id1==-1)
            return id2;
         if (id2==-1)
            return id1;
 
         if (array[id1]<=array[id2])
            return id1;
         else
             return id2;
     }
};
/*
 5
1 2 3 4 5
*/
int main()
{
    int i,j,N;
    int A[1000];
    scanf("%d",&N);
    for (i=0;i<N;i++)
        scanf("%d",&A[i]);
 
    SegmentTree<int> s(N);
    s.initialize(1,0,N-1,A);
  	for(int i=0;i<2*N;i++)
  		cout<<s.A[i]<<" \n";
    while (scanf("%d%d",&i,&j))//!=EOF)
      printf("%d\n",A[s.query(1,0,N-1,i-1,j-1,A)]);
}
