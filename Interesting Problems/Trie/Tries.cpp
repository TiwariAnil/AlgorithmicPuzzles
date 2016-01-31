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

#define ALPHA_SIZE 26
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

struct trie_node
{
	int value;
	trie_node *children[ALPHA_SIZE];
};
struct head
{
	int count;
	trie_node *root;
};
trie_node *getNode(void)
{
	trie_node *nd=NULL;
	nd = new trie_node;
	if(nd)
	{
		nd->value=0;
		FOR(i,0,ALPHA_SIZE)
			nd->children[i]=NULL;
	}
	return nd;
}
void insert_trie(head *base, string key)
{
	int index;
	trie_node *crawl;
	crawl=base->root;
	base->count++;
	//error(base->count);
	FOR(i,0,key.length())
	{
		//error(key[i]);
		index=CHAR_TO_INDEX(key[i]);
		//error(index);
		if(!crawl->children[index])
		{
			crawl->children[index]=getNode();
		}
		//error(crawl->value);
		crawl=crawl->children[index];
	}
	crawl->value = base->count;
}
int search_trie(head *base, string key)
{
	int index;
	trie_node *crawl;
	crawl=base->root;
	FOR(i,0,key.length())
	{
		index = CHAR_TO_INDEX(key[i]);
		if(!crawl->children[index])
			return 0;
		crawl = crawl->children[index];
	}
	return (0 !=crawl && crawl->value);
}
int leafNode(trie_node *nd)
{
	return (nd->value != 0);
}
int isItFreeNode(trie_node *nd)
{
	FOR(i,0,ALPHA_SIZE)
		if(nd->children[i])
			return 0;
	return 1;
}
bool delete_help(trie_node *nd, string key, int x, int y)
{
	if(nd)
	{
		if(x==y)
		{
			if(nd->value)
			{
				nd->value=0;
				if(isItFreeNode(nd))
					return true;
				return false;
			}
		}
		else
		{
			int index = CHAR_TO_INDEX(key[x]);
			if(delete_help(nd->children[index], key, x+1, y))
			{
				delete nd->children[index];
				return (!leafNode(nd) && isItFreeNode(nd));
			}
		}
	}
	return false;
}
void delete_trie(head *base, string key)
{
	if(key.length()>0)
		delete_help(base->root, key, 0, key.length());
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    //s(T);
	cin>>T;
	head *base;
	base = new head;
	base->count=0;
	base->root=getNode();//NULL;
	int n;string s;
	while(T--)
	{
		cin>>n;
		cin>>s;
		if(n==1)
		{
			insert_trie(base, s);
		}
		else if (n==2)
		{
			if(search_trie(base, s)==1)
				cout<<"Found !"<<endl;
			else
				cout<<"Nopes !"<<endl;
		}
		else
		{
			delete_trie(base,s);
		}
		cout<<endl;
	}

    return 0;
}
