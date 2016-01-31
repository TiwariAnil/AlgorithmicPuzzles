********************Dfs BackTrack Nodes(print the nodes too)********************

int dfs(int x, int len)
{
    FOR(i,0,vec[x].size())
    {
        if(flag[vec[x][i]]==0)
        {
            flag[vec[x][i]]=len;
            s.push(vec[x][i]);
            dfs(vec[x][i],len+1);
            //	s.pop();   Do or Dont , doesnt much matter

        }
        else
        {
            if(flag[x]-flag[vec[x][i]] >= k)
            {
                cout<<flag[x]-flag[vec[x][i]]+1<<endl;
                while(s.top()!=vec[x][i])
                {
                    cout<<s.top()<<" ";
                    s.pop();

                }
                cout<<vec[x][i];
                exit(0);
            }
        }
    }

}
int solve()
{
    dfs(1,2);
    cout<<"-1";
    return 1;
}

bool input()
{
    s(n);
    s(m);
    s(k);
//	int pu, pv;
    FOR(i,0,m)
    {
        s(x);
        s(y);
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    return true;
}


********************Edges For PRIORITY Queue************************************
// For Reset things :D

memset(V,0,sizeof(V));
Q= priority_queue <Edge>();



//Three parameters
struct Edge
{
    int x, y, c;
    Edge(int x, int y, int c) : x(x), y(y), c(c) {}

    inline bool operator < (const Edge& a) const
    {
        return c > a.c;
    }
};
//Two paramerters (For vertices)
//in PRIMS

struct Vertex
{
    int v, c;
    Vertex(int v, int c) : v(v), c(c) {}
    inline bool operator < (const Vertex& that) const
    {
        return c > that.c;
    }
};

*******************Dijakstra (sab pel diya h) ***************************************************
#define Max 30
struct Edge
{
    int x, y, c;
    Edge(int x, int y, int c): x(x), y(y), c(c) {};
    inline bool operator < (const Edge &a) const
    {
        return c > a.c;
    }
};
int G[Max][Max]= {0};
int V[Max];
int D[Max];
int n, m ;
void show(int t)
{
    if(D[t]!=t)
    {
        show(D[t]);
        cout<<" ";
    }
    cout<<(char)(t+'A');
}
void shortestpath(int a, int b)
{
    priority_queue <Edge> Q;
    Q.push(Edge(a,a,0));
    while(!Q.empty())
    {
        Edge e=Q.top();
        Q.pop();
        if(e.c>=V[e.y])
            continue;
        V[e.y]=e.c;
        D[e.y]=e.x;
        //error((char)(+'A'));
        FOR(i,0,n)
        {
            if(G[e.y][i])
            {
                //      error(G[e.x][i]);
                Edge pin = Edge(e.y,i,e.c+G[e.y][i]);
                if(pin.c<=V[i])
                    Q.push(pin);//,error((char)(i+'A'));
            }
        }
    }
    show(b);
    cout<<endl;
}
int solve()
{
    s(m);
    char a, b;
    FOR(i,0,m)
    {
        cin>>a >> b;
        FOR(i,0,n)
        V[i]=100000000;
        shortestpath(a-'A', b-'A');
    }
    return 1;
}
bool input()
{
    s(n);
    s(m);
    // FOR(i,0,n)

    int c;
    char a, b;
    FOR(i,0,m)
    {
        cin>>a>>b>>c;
        G[a-'A'][b-'A']=G[b-'A'][a-'A']=c;
    }
    return true;
}
int main()
{
    int T=1;
    //s(T);
    for(int testnum=1; testnum<=T; testnum++)
    {
        if(!input()) break;
        solve();
        //printf("\n");
    }
    // system("pause");
    return 0;
}
********************unionset findset********************************************
int parent[111];
inline int findset(int v)
{
    if (parent[v] != v)
        return parent[v] = findset(parent[v]);
    return v;
}
inline int unionset(int x, int y)
{
    int a = findset(x), b = findset(y);
    if (a==b) return -1;
    if (a>b) swap(a,b);
    parent[b] = a;
    return a;
}

********************KRUSHKAL 2nd min Mst or nth MST*****************************
typedef pair <int, PII> Edge;
vector <Edge> G;
int n, m ;
vector <int> X;
int parent[1111];
int edgeno[1111];
int findset(int v)
{
    if(parent[v]!=v)
        return parent[v]=findset(parent[v]);
    return v;
}
int unionset(int x, int y)
{
    int a=findset(x), b=findset(y);
    if(a==b)
        return -1;
    if(a>b)
        swap(a,b);
    parent[b]=a;
    return a;
}
int MST(int skip)
{
    FOR(i,0,n+1)
    parent[i]=i;
    int cost=0,count=0;
    FOR(i,0,m)
    {
        if(i!=skip && unionset(G[i].second.first, G[i].second.second)!=-1)
        {
            cost+=G[i].first;
            if(skip==-1)
                edgeno[count]=i;
            count++;
        }
    }
    if(count==n-1)
        return cost;
    return -1;
}
int solve()
{

    X.clear();
    X.push_back(MST(-1));
    FOR(i,0,n-1)
    {
        int temp=MST(edgeno[i]);
        if(temp!=-1)
            X.push_back(temp);
    }
    sort(X.begin(),X.end());
    cout<<X[0]<<" "<<X[1]<<endl;
    //chekarre(X, X.size());

    return 1;
}

bool input()
{
    G.clear();
    s(n);
    s(m);
    int a, b, c;
    FOR(i,0,m)
    {
        cin>>a>>b>>c;
        G.push_back(Edge(c, PII(a,b)));
    }
    sort(G.begin(), G.end());
    return true;
}

int main()
{
    int T=1;
    s(T);
    for(int testnum=1; testnum<=T; testnum++)
    {
        if(!input()) break;

        solve();
        //printf("\n");

    }
//    system("pause");
    return 0;
}
********************KRUSHKAL Mini Spananing Tree********************************
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define edge pair< int, int >
#define MAX 1001  // max no of vertices

// ( w (u, v) ) format
vector< pair< int, edge > > GRAPH, MST;
int parent[MAX], total, N, E;

int findset(int x, int *parent)
{
    if(x != parent[x])
        parent[x] = findset(parent[x], parent);
    return parent[x];
}

void kruskal()
{
    int i, pu, pv;
    sort(GRAPH.begin(), GRAPH.end()); // increasing weight
    for(i=total=0; i<E; i++)
    {
        pu = findset(GRAPH[i].second.first, parent);
        pv = findset(GRAPH[i].second.second, parent);
        if(pu != pv)
        {
            MST.push_back(GRAPH[i]); // add to tree
            total += GRAPH[i].first; // add edge cost
            parent[pu] = parent[pv]; // link
        }
    }

}

void reset()
{
    // reset appropriate variables here
    // like MST.clear(), GRAPH.clear(); etc etc.
    for(int i=1; i<=N; i++) parent[i] = i;
}

void print()
{
    int i, sz;
    // this is just style...
    sz = MST.size();
    for(i=0; i<sz; i++)
    {
        printf("( %d", MST[i].second.first);
        printf(", %d )", MST[i].second.second);
        printf(": %d\n", MST[i].first);
    }
    printf("Minimum cost: %d\n", total);
}

int main()
{
    // freopen("input3.txt","r",stdin);
    //freopen("output3.txt","w",stdout);
    int i, u, v, w;

    scanf("%d %d", &N, &E);
    reset();
    for(i=0; i<E; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
    }
    kruskal(); // runs kruskal and construct MST vector
    print(); // prints MST edges and weights

    return 0;
}

*******************DFS Flood Fill***********************************************
// for King in the chess :D all side moves
int x[]= {1,1,1,0,0,-1,-1,-1};
int y[]= {1,0,-1,1,-1,1,0,-1};

// for left right up down
int x[4]= {1,0,0,-1};
int y[4]= {0,1,-1,0};

void dfs(int i, int j)
{
    s[i][j]='0';
    FOR(t,0,8) // or 4 for left right up down
    {
        int xx=i+x[t],yy=j+y[t];
        if(xx>=0 && xx<n && yy>=0 && yy<n && s[xx][yy]=='1')
        {
            dfs(xx,yy);
        }

    }
}


*******************KNIGHT PROBLEM***********************************************
map <char, int> get;
int i[]= {-2,-2,2,2,-1,-1,1,1};
int j[]= {-1,1,-1,1,-2,2,-2,2};
bool visit[9][9]= {false};

get['a']=1;
get['b']=2;
get['c']=3;
get['d']=4;
get['e']=5;
get['f']=6;
get['g']=7;
get['h']=8;
get['1']=1;
get['2']=2;
get['3']=3;
get['4']=4;
get['5']=5;
get['6']=6;
get['7']=7;
get['8']=8;


*******************BFS Count STEPS**********************************************
int BFS( int x , int y , int s , int t )
{
    queue < pair < PII , int > > q;
    q.push( make_pair( PII( x , y ) , 0 ) );
    while( !q.empty() )
    {
        x = q.front().fr.fr;
        y = q.front().fr.se;
        int dd = q.front().se;
        q.pop();
        if( x == s && y == t )
            return dd;
        for( int i = -1 ; i < 2 ; i ++ )
            for( int j = -1 ; j < 2 ; j ++ )
                if( avail.find( PII( x+i , y+j ) ) != avail.end() )
                {
                    avail.erase( avail.find( PII( x+i , y+j ) ) );
                    q.push( make_pair( PII( x+i , y+j ) , dd+1 ) );
                }
    }
    return -1;
}
_________________________________________
bool mat[1011][1011];
int x2[4]= {1,0,0,-1};
int y2[4]= {0,1,-1,0};
int BFS( int x , int y )
{
    memset(mat, false, sizeof(mat));
    queue < PII > q;
    q.push( PII( x , y ));
    mat[x][y]=true;
    while( !q.empty() )
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        if(x==0 && y!=0)
			chek[2]=1;
		if(y==0 && x!=0)
			chek[0]=1;
		if(x==n-1 && y!=0)
			chek[3]=1;
		if(y==n-1 && x!=0)
			chek[1]=1;
		FOR(i,0,4)
		{
			int xx=x+x2[i], yy=y+y2[i];
			if(xx>=0 && yy>=0 && xx<n && yy<n && mat[xx][yy]==false)
			{
				mat[xx][yy]=true;
				q.push(PII(xx,yy));
			}
		}
	}
    return -1;
}
