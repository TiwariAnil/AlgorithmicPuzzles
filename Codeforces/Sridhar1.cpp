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

/*   INPUT

1000000009 , 100005
*/

int n, m ;
//typedef pair<string , string> mp;

typedef map <string , string> SS;
typedef pair <string , int>  SI;
typedef map <string, SI> SSI;
typedef map <string, int> hahaha;
int solve()
{
	//mp temp;
	//full p;
	SS child;
	map <SS, int> kiss;
    SS ::iterator it;
    SI other;
    SSI final;
	hahaha mony;
	string s1, s2, s3;
	int rs,sum=0;
	vector<string> vec;
	s(n);
	n--;
	string stf;
	int cnt=1;
	FOR(i,0,n)
	{
		cin>>s1;
		cin>>s2;
		s(rs);
		cin>>s3;
	//	temp= make_pair(s1,s2);
	//	p.insert (pair < mp, int>(temp, rs));
		//temp = make_pair (s2,s1);
		//child.insert (pair<string, string>(s2,s1);
		other = make_pair(s2, rs);
		final[s1]=other;
		//final.insert(pair<string,SI>(s1,other));//[s1]=other;
		child[s1]= s2;
		//mony[s2]= rs;
		
	    vec.push_back(s1);
		
	}
	sort(vec.begin(),vec.end());
	string temp=vec[0];
	FOR(i,1,vec.size())
	{
		if(i%2!=0)
		 { if(vec[i]!=temp)
		    break;
          }
          else
		   temp=vec[i];
	}
	cout<<temp;
	
	
}
/*/	while(1)
	{
		it = & child[sta];
		if(child.count(sta)==1)
		sta = child[sta];
		else
		break;
		cout<<sta<<endl;
	}
	cout<<sta<<endl;

}
	
//	cout<<(*it).first<<"  "<<(*it).second;
	string start=(*it).first;
	while(n--)//!final.empty())
	{
		cout<<start;
		cout<<" ";
		other =final[start];
		cout<<other.first;
		cout<<" ";
		cout<<other.second;
		cout<<"$";
		sum+=other.second;
		start=other.first;
		cout<<endl;
		//final.erase(final[start]);
	}
	cout<<sum;
	cout<<"$";
	cout<<endl;
	//while(child)
	return 1;
}
*
1
4
a b 2$
c a 3$
d c 4$

d c
c a
a b

*/
bool input()
{
	return true;
}

int main()
{
    int T=1;
    s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
     //   if(!input()) break;

        solve();
        //printf("\n");

    }
    return 0;
}


