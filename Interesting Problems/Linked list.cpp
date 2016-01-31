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
struct node
{
	int info;
	node* next;
};

node* newnode(int x)
{
	node* nd = new node;
	nd->info = x;
	nd->next = NULL;
	return nd;
}

void insert( node ** start, int val)
{
	node *nd=newnode(val);
	if((*start)==NULL)
	{
		(*start)=nd;
		return ;
	}
	else
	{
		node *nw=(*start);
		while(nw->next !=NULL)
		{
			nw=nw->next;
		}
		nw->next = nd;
	}
}

void push(node ** start, int val)
{
	node *nd=newnode(val);
	nd->next=(*start);
	(*start)=nd;
}




void display(node* start)
{
	if(!start)
		return ;
	node * nw=start;
	while(nw->next !=NULL)
	{
		cout<<nw->info<<"----";
		nw=nw->next;
	}
	cout<<nw->info;
	cout<<endl;
}

void detect_cycle(node *start)
{
	if(start==NULL)
		return ;

	node * slow=start;
	node * fast=(start->next)->next;
	while(fast && fast->next)
	{
		if(slow==fast)
			{cout<<"\n\nThis is a cycle: :)) \n\n";return;}
		slow=slow->next;
		fast=(fast->next)->next;
	}
	cout<<"\n\nNOt a cycle :(\n\n";
	return;
}
void deletelist(node** head)
{
	node* curr= *head;
	node* next;
	while(curr!=NULL)
	{
		next=curr->next;
		free(curr);
		curr=next;
	}
	*head=NULL;
}

void reverse(node **start)
{
	if((*start)==NULL)return ;

	node *tmp1=NULL, *tmp2, *curr=(*start);
	while(curr!=NULL)
	{
		tmp2=curr;
		curr=tmp2->next;
		tmp2->next=tmp1;
		tmp1=tmp2;
	}
	(*start)=tmp2;
	return ;
}
node * reverseit(node * start)
{
	if(!start) return NULL;
	node *tmp1=NULL, *tmp2, *curr=start;
	while(curr!=NULL)
	{
		tmp2=curr;
		curr=tmp2->next;
		tmp2->next=tmp1;
		tmp1=tmp2;
	}
	return tmp2;
}

node * add(node *nd1, node *nd2)
{
	node *res=NULL;
	int tmp=0, carry=0;
	while(nd1 || nd2)
	{
		tmp=carry;
		if(nd1)
			tmp+=nd1->info, nd1=nd1->next;
		if(nd2)
			tmp+=nd2->info, nd2=nd2->next;

		push(&res, tmp%10);
		carry=tmp/10;
	}
	if(carry!=0)
		push(&res, carry);
	return res;
}

int sizeList(node * nd)
{
	if(!nd)return 0;
	int cnt=0;
	while(nd)
		nd=nd->next, cnt++;
	return cnt;
}

int main()
{
	struct node * res=NULL, *first=NULL, *second=NULL;
	FOR(i,5,9)
		insert(&res, i);

	FOR(i,0,10)
		push(&first, i);

/*
	display(res);
							cout<<endl;
	display(first);

	reverse(&res);
	reverse(&first);
							cout<<endl;
	display(res);
							cout<<endl;
	display(first);

	//node *nd=reverseit(res);

	//display(nd);

	node *sec=add(res, first);
	reverse(&sec);
	cout<<endl;

	display(sec);
*/

	return 0;
}











