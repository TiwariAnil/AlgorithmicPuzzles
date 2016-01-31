#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int fa[110],size[110],ans,n,m;
int find(int x)
{
    if(x==fa[x])
         return x;
    else
		 return fa[x]=find(fa[x]);
}

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=1;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}
#define error(x)                cout << #x << " : " << (x) << endl

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        fa[i]=i,size[i]=1;
	chekarre(fa,n+1);
	chekarre(size,n+1);
	cout<<endl;
	while(m--)
	{
        int x,y;
        cin>>x>>y;

		int fx=find(x),fy=find(y);//search parent of x and y
		error(fx);error(fy);error(size[fy]);
		if(fx==fy && (size[fy]&1))//if same parent && sezeodd
		    ans++;
		error(ans);
		fa[fy]=fx;
		size[fx]+=size[fy];
		chekarre(fa,n+1);
		chekarre(size,n+1);
		cout<<endl;
	}
    if((n-ans)&1)
	     ans++;
	cout<<ans<<endl;
}
