//Data Structure includes
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<list>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<sstream>
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define FORs(i,a,b)             for(int i=a;i>=b;i--)
#define fill(a,v)               memset(a,v,sizeof a)
#define abS(x)                  ((x)<0?-(x):(x))
#define mP                      make_pair
#define pB                      push_back
#define error(x)                cout << #x << " : " << (x) << endl
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
#define mod 1000000007
#define MAXN 1000010
#define MP make_pair
#define INF mod
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
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

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}
inline int haint()
{
	int h;
	 register char c=0;
	 while (c<33) c=getchar();//getchar_unlocked();
	 h=0;
	 while (c>33)
	 {
	     h=h*10+c-'0';
	     c=getchar();//getchar_unlocked();
	 }
	 return h;
}
int n, m ,flag;

struct node{
	bool isend;
	node * child[10];
} *root;

node * newnode()
{
	node *nd=new node;
	nd->isend=false;
	FOR(i,0,10)
		nd->child[i]=NULL;
	return nd;
}
void ins(string s)
{

	if(root==NULL)
		root=newnode();
	node *temp=root;
	FOR(i,0,s.length()-1)
	{
		int pos=s[i]-'0';
		error(pos);
		if(temp->child[pos] == NULL)
		{
			temp->child[pos]= newnode();
			temp=temp->child[pos];
		}
		else
		{
			temp=temp->child[pos];
		}
	}
	int pos=s[s.length()-1]-'0';
	error(pos);
	if(temp->child[pos] )
	{
		if( temp->child[pos]->isend)
			flag=1;
		else
			temp->child[pos]->isend=true;
	}
	else
	{
		temp->child[pos]=newnode();
		temp->child[pos]->isend=true;
	}
	error(temp->child[pos]->isend);
}
int arr[20];
void disp(node *root, int len)
{
	FOR(i,0,10)
	{
		if(root->child[i]!=NULL)
		{
			arr[len]=i;
			error(i);
			if(root->child[i]->isend)
			{
				cout<<"Number: \t";
				FOR(j,0,len+1)
				{
						cout<<arr[j];
				}cout<<endl;
			}
			disp(root->child[i], len+1);
		}
	}
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    s(T);
    string s;
		FOR(i,0,T)
		{
			s(n);
			flag=0;
			FOR(j,0,n)
			{
				cin>>s;
				ins(s);
			}
			disp(root, 0);
			if(flag==0)
				cout<<"NO\n";
			else
				cout<<"YES\n";
			root=NULL;
		}
    return 0;
}
