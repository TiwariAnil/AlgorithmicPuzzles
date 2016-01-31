#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<pair<int,int>> e[100001];
int d[100001],v[100001];

int main(){
    int n,m,s,l,ans=0;
    scanf("%d%d%d",&n,&m,&s);
    for(int i=0;i<m;i++){
        int x,y,c;
        scanf("%d%d%d",&x,&y,&c);
        e[x].push_back({y,c});
        e[y].push_back({x,c});
    }
    priority_queue<pair<int,int>> q;
    fill(d,d+n+1,1000000007);
    q.push({d[s]=0,s});
    while(q.size()){
        int x=q.top().second;
        q.pop();
        if(!v[x]++) for(auto r:e[x]){
            int y=r.first,c=r.second;
            if(d[x]+c<d[y]){
                d[y]=d[x]+c;
                q.push({-d[y],y});
            }
        }
    }
    scanf("%d",&l);
    for(int x=1;x<=n;x++){
        if(d[x]==l) ans++;
        if(d[x]>=l) continue;
        for(auto r:e[x]){
            int y=r.first,c=r.second;
            if(d[x]+c<=l) continue;
            if(d[y]+c-(l-d[x])>l || d[y]+c-(l-d[x])==l && x<y) ans++;
        }
    }
    printf("%d\n",ans);
}
