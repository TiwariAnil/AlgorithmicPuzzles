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


string tmp;
int cnt=0, cur=0, lau=0;
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void fun(string s, int open,int  close)
{
	if(close==0)
	{
		cur++;
		cout<<cur<<s<<endl;
		return;
	}
	if(open<close && close>0)
		fun(s+")", open, close-1);
	if(open>0)
		fun(s+"(", open-1, close);
}

void permute_a_string(char *a, int pos, int n)// n = a.length()-1
{// ABC ACB BAC BCA CAB CBA
   int j;
   if (pos == n)
     printf("%s\n", a);
   else
   {
        for (j = pos; j <= n; j++)
       {
          swap((a+pos), (a+j));
          permute_a_string(a, pos+1, n);
          swap((a+pos), (a+j)); //backtrack
       }
   }
}

int cnx=0;

void Print_LEXO_permut(string s)
{
	cnx++;
	if(cnx>20)
		return;
	cout<<s<<endl;
	int i,flag=0, n=s.length();
	for(i=n-1; i>0; i--)
		if(s[i]>s[i-1])
		{
			flag=1;
			break;
		}
	if(flag==0)
		return;
	i--;
	int ceilindx=i+1 ;

	for(int j=i+1; j<n-1; j++)
		if(s[i]<s[j] && s[j]<s[ceilindx])
			ceilindx=j;

	//error(i);
	//error(ceilindx);
	char ch=s[i];
	s[i]=s[ceilindx];
	s[ceilindx]=ch;

	sort(s.begin()+i+1,s.end());
	//cout<<s<<endl;
	//cout<<endl;
	Print_LEXO_permut(s);
}


void PermWithRepeat(string s, string t, int pos)
{
	//Input: ABC
	//Outpu: AAA AAB AAC ABA	...	CCB CCC
	if(pos>=s.length())
		return;
	if(t.length()==s.length())
	{
		cout<<t<<endl; return ;
	}
	PermWithRepeat(s, t+s[pos], pos);
	PermWithRepeat(s, t, pos+1);
}
int main()
{
	string s="", curr="";
	fun(s, 6, 6);

	cout<<endl<<endl;
	s="ABCD";
//	permut(s,curr,0,0);

	s="AAAAABBBCCCDEFGGGG";
//	cout<<compress(s);
	char ch[]="hithisishellu";
	cout<<chek(ch)<<endl;
	s="ABCDE";
	//PermWithRepeat(s,"",0);
	char b[]="ABCD";
	//permute_a_string(b,0,3);
	s="AACD";
	Print_LEXO_permut(s);

}
