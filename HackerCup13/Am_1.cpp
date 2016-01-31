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
#include<iomanip>
#include<utility>
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
#define ALL(a)                  (a).begin(),(a).end()
#define SZ(a)                   ((int) a.size())
#define SORT(a)                  sort(ALL(a))

using namespace std;

typedef long long LL;



bool comp(int i,int j) { return (i>j); }



int main()
{
   // freopen("test1.txt","r",stdin);
    //freopen("result1.txt","w",stdout);
    int m,i,j,res=0,t=0,k=0,ls=0;

    string s;
    cin >> m;
    while(t!=m){
        if(t==0){getchar();}
        getline(cin,s);
        int a[150]={0};
        res=0;
    ls=s.length();
    for(i=0;i<ls;i++){
        s[i]=tolower(s[i]);
        if(s[i]>='a' && s[i]<='z')
        a[s[i]]++;
    }
    sort(a,a+150,comp);
    k=26;
    for(j=0;j<150;j++){
        res=res+(k*a[j]);
        k--;
    }
    cout << "Case #"<<t+1 <<": "<<res<<endl;
    t++;
    }
    return 0;
}


