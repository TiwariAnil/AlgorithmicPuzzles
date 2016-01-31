#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<set>
using namespace std;
const int inf=1000000000;

vector < pair < int ,int > > g[111111];

int n,m,s,l,d[1111111],ans=0,w[1111111];

bool was[1111111];

int u[1111111],v[1111111];

int main()
{

 scanf("%d%d%d",&n,&m,&s);
 for(int i=1;i<=m;i++)
  {
    scanf("%d%d%d",&u[i],&v[i],&w[i]);
    g[u[i]].push_back(make_pair(v[i],w[i]));
    g[v[i]].push_back(make_pair(u[i],w[i]));
  }
 scanf("%d",&l);
 
 
 for(int i=1;i<=n;i++) 
    d[i]=inf;
 
 
 set< pair < int ,int > > q;
 
 d[s]=0;
 
 q.insert(make_pair(0,s));

 while(!q.empty())
  {
    int V = q.begin()->second;
    q.erase(q.begin());

    for(int i=0;i<g[V].size();i++)
      {
         int to = g[V][i].first;
         int cost = g[V][i].second;
         if(d[to]>d[V]+cost)
           {
             q.erase(make_pair(d[to],to));
             
             d[to]=d[V]+cost;
             q.insert(make_pair(d[to],to));
           }
      }
  }
 for(int i=1;i<=n;i++)
   if(d[i]==l) ans++;
// cout<<ans<<endl;
 for(int i=1;i<=m;i++)
  {
   if(d[u[i]] < l && l-d[u[i]]<w[i] && w[i]+d[v[i]]-(l-d[u[i]])> l ) 
     { ans++; }
   
   if(d[v[i]] < l && l-d[v[i]]<w[i] && w[i]-(l-d[v[i]])+d[u[i]] > l ) 
      { ans++; }
   
   if(d[v[i]]<l && d[u[i]]<l  && d[u[i]]+d[v[i]]+w[i]==2*l) 
      { ans++; }
  } 
 printf("%d",ans);
 //cin>>ans;
 return 0;
}
