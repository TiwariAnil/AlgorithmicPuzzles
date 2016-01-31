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


int n, m ;
/*
FOR(i,0,s.length())
          if(s[i]==':')
            cout<<i<<",";
*/
int solve()
// delete sys(pause)
{
    int pos[8]={3,8,13,18,23,28,33,38};
    FOR(i,0,n)
    {
        string s="0000:0000:0000:0000:0000:0000:0000:0000",y="::";
        string k;
        cin>>k;
        int cnt=0,temp;
        if(k==y)
          cout<<s<<endl;
       else
        {
            int roll=0,last,flag=0;
            FOR(j,0,k.length())
            {     
                //error(j);
                last=pos[roll];
                while(k[j]!=':' && j<=k.length()-1)
                    j++,temp=j;
                //error(temp);    
                if(k[j+1]==':')
                   {flag=1;}
                
                if(temp!=k.length()-1)
                    temp--;        
                while(temp>=0 && k[temp]!=':')
                {   s[last]=k[temp];
                    last--; 
                    temp--;
                    
                } 
                if(flag==1)
                 break;
             //   error(s);
                roll++;   
            }
            if(flag==1)
            {
                roll=7;
                FORs(j,k.length()-1,0)
                {
                    last=pos[roll];
                    while(k[j]!=':' && j>=0)
                     {
                            s[last]=k[j];
                            last--;   
                            j--;
                      }
                     // error(s);
                      if(k[j-1]==':')
                        break;
                      //j--;
                      roll--;
                }   
             }   
            cout<<s;
            cout<<endl;
          }
        
        
        
    }   
        return 1;
}

bool input()
{
    s(n);
	return true;
}

int main()
{
    int T=1;
    //s(T);
    for(int testnum=1;testnum<=T;testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
    //system("pause");
    return 0;
}


