#include<cstdio>
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<map>
#define MIN(x,y) (x<y?x:y)
#define MAX(x,y) (x>y?x:y)
 
int fast_int()
{
        int n = 0;
        char c = getchar_unlocked();
        while (!('0' <= c && c <= '9'))
        {
                c = getchar_unlocked();
        }
        while ('0' <= c && c <= '9')
        {
                n = (n<<3)+(n<<1) + c - '0';
                c = getchar_unlocked();
        }
        return n;
}
using namespace std;
int match[1000000];
int segtree[2000000][4]={0};
int curmake;
int depth;
int makesegment(int nodenow,int l, int r)
{
 
    //cout<<" node "<<nodenow<<" for "<<l<<" to "<<r<<" at depth "<<depth<<endl;
    depth++;
    if(l==r)
    {
        segtree[nodenow][0]=match[l];
        segtree[nodenow][3]=match[l];
        segtree[nodenow][1]=-1;
        segtree[nodenow][2]=-1;
 
    }
    else
    {
        segtree[nodenow][1]=curmake;
        curmake++;
        makesegment(curmake-1,l,(l+r)/2);
 
        segtree[nodenow][2]=curmake;
        curmake++;
        makesegment(curmake-1,(l+r)/2+1,r);
        segtree[nodenow][0]=MIN(segtree[segtree[nodenow][1]][0],segtree[segtree[nodenow][2]][0]);
        segtree[nodenow][3]=MAX(segtree[segtree[nodenow][1]][3],segtree[segtree[nodenow][2]][3]);
      //  cout<<" from "<<segtree[segtree[nodenow][1]][0] <<" and "<< segtree[segtree[nodenow][2]][0];
    }
   //cout<<"made node "<<nodenow<<" for element "<<l<< " to "<<r<<" its value is min"<<segtree[nodenow][0]<<" max "<<segtree[nodenow][3]<<endl;
    depth--;
     return segtree[nodenow][0];
}
int findmin(int at,int atl,int atr,int l,int r)
{
    //printf("finding min in range %d %d at node %d target %d %d\n",atl,atr,at,l,r);
    int a=100000010,b=100000010;
    if(atl==l  &&  atr==r)
        return segtree[at][0];
    if((atl+atr)/2>=l)
    a=findmin(segtree[at][1],atl,(atl+atr)/2,l,MIN(r,(atl+atr)/2));
    if((atl+atr)/2+1<=r)
    b=findmin(segtree[at][2],(atl+atr)/2+1,atr,MAX(l,(atl+atr)/2+1),r);
  //  printf("for %d to %d a and b is %d %d",atl,atr,a,b);
    return MIN(a,b);
}
int findmax(int at,int atl,int atr,int l,int r)
{
    int a=-1,b=-1;
    if(atl==l && atr==r)
        return segtree[at][3];
    if((atl+atr)/2>=l)
    a=findmax(segtree[at][1],atl,(atl+atr)/2,l,MIN(r,(atl+atr)/2));
    if((atl+atr)/2+1<=r)
    b=findmax(segtree[at][2],(atl+atr)/2+1,atr,MAX(l,(atl+atr)/2+1),r);
    return MAX(a,b);
}
using namespace std;

int main()
{
    int n,l,r;
    n=fast_int();
    int i=0;
 
    while(i<n)
    {
        match[i]=fast_int();
        i++;
    }
    curmake=1;
    depth=0;
    makesegment(0,0,n-1);
    i=0;
  //  while(i<curmake)
    //{
 
       // printf("%d %d %d %d %d\n",i,segtree[i][0],segtree[i][3],segtree[i][1],segtree[i][2]);
      //  i++;
   // }
        int q;
    q=fast_int();
    double min,max,max2,maxrange,ans;
    while(q--)
    {
        l=fast_int();
        r=fast_int();
   //    printf("min is %d max is %d",findmin(0,0,n-1,l,r),findmax(0,0,n-1,l,r));
        min=(double)findmin(0,0,n-1,l,r);
     //   if(l!=r)
        maxrange=(double)findmax(0,0,n-1,l,r);
       // else
       // maxrange=-1;
        max=-1;
        max2=-1;
        if(l!=0)
        max=(double)findmax(0,0,n-1,0,l-1);
        if(r!=n-1)
        max2=(double)findmax(0,0,n-1,r+1,n-1);
  //     printf("min ignitted is %f max ignited is %f maxl is %f maxr is %f\n",min,maxrange,max,max2);
        max=(max<max2?max2:max);
            maxrange-=min;
            maxrange/=2;
            max=(max<maxrange?maxrange:max);
        if(max!=-1)
        ans=(min+max);
        else
        ans=min;
        printf("%.1lf\n",ans);
    }
	return 0;
}
