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
#define fill(a,v)               memset(a,v,sizeof a)
#define abS(x)                  ((x)<0?-(x):(x))
#define mp                      make_pair
#define pb                      push_back


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
/*  The Doer's code  */

int n,a,b;
char s[222];
int solve()
{
	int z=0,on=0;//,tw=0;
 	FOR(i,0,n)
     {
     	if(s[i]=='1')
     	   on++;
     	 //else
		   if(s[i]=='0')
     	    	z++;
     	  //else
		  // tw++;  	
	 }
	 int sub1=a-z;//zeros -1
	 int sub2=b-on;//ones  2
	 //cout<<"s1"<<sub1;cout<<"s2"<<sub2;cout<<endl;
	 //int p=0;
	 if(sub1==0 && sub2==0)
	     { cout<<"0"<<endl;cout<<s; return 1;}
	 if(sub1>=0 && sub2>=0)
	 { 
	    //cout<<"\nfirst\n";
	      int i=0;
	      int r=sub1,t=sub2;
		  while(sub1!=0)
		  {
		  	if(s[i]=='2')
		  	   s[i]='0',sub1--;
		  	   i++;
		  }
		  i=0;
		  while(sub2!=0)
		  {
		  	if(s[i]=='2')
		  	   s[i]='1',sub2--;
 	         i++;
		  }
		  cout<<r+t;
		  cout<<endl;
		  cout<<s;
		  return 1;
		  
	 }
	 else if(sub1<=0 && sub2<=0)
	 {
	 	//cout<<"\nsecond\n";
	 	sub1*=-1;//abS(sub1);
	 	sub2*=-1;//abS(sub2);
	 	int r=sub1,t=sub2;
	 		int i=0;
			  while(sub1!=0)
			  {
			  	if(s[i]=='0')
			  	   s[i]='2',sub1--;
			  	   i++;
			  }
			  i=0;
			  while(sub2!=0)
			  {
			  	if(s[i]=='1')
			  	   s[i]='2',sub2--;
		         i++;
			  }
			  cout<<r+t;
			  cout<<endl;
			  cout<<s;
			  return 1;
	 	
	 }
	 else if(sub1>=0 && sub2<=0)
	 {
	 	//cout<<"\nthird\n";
	 	sub2*=-1;//abS(sub2);
	 	int r=sub1,t=sub2;
	 	if(sub1==sub2)
	 	{
	 		int i=0;
			  while(sub1!=0)
			  {
			  	if(s[i]=='1')
			  	   s[i]='0',sub1--;
			  	   i++;
			  }
			  cout<<r;
			  cout<<endl;
			  cout<<s;
			  return 1;
		}
		if(sub1>sub2)
	 	{
	 	 	//int diff=sub1-sub2;
			int i=0;
			int r=sub1,t=sub2;
			  while(sub2!=0)
			  {
			      if(s[i]=='1')
			          s[i]='0',sub2--,sub1--;
			       i++;   
			  } 	
			  i=0;
			  while(sub1!=0)
			  {
			  	   if(s[i]=='2')
			  	       s[i]='0',sub1--;
			  	     i++;  
			  }
			  cout<<r;
			  cout<<endl;
			  cout<<s;
			  return 1;		 
        }
		 else
	 	{
	 		
	 		int i=0;
	 		int r=sub1,t=sub2;
	 		while(sub1!=0)
	 		{
	 			if(s[i]=='1')
	 			   {s[i]='0';sub1--;sub2--;}
		       i++;
		    }
		    i=0;
		    while(sub2!=0)
		    {
		    	if(s[i]=='1')
		    	   s[i]='2',sub2--;
		    	 i++;  
		    }
		    cout<<t;
		    cout<<endl;
		    cout<<s;
		    return 1;
	 	}
	 }
	 else //(sub1<=0 && sub2>=0)
	 {
	 	//cout<<"\nlast\n";
	 	sub1*=-1;//abS(sub1);
	 	int r=sub1,t=sub2;
	 	if(sub1==sub2)
	 	{
	 		int i=0;
			  while(sub1!=0)
			  {
			  	if(s[i]=='0')
			  	   s[i]='1',sub1--;
			  	   i++;
			  }
			  cout<<r;
			  cout<<endl;
			  cout<<s;
			  return 1;
		}
		if(sub1>sub2)
	 	{
	 	 	int i=0;
	 	 	int r=sub1,t=sub2;
			  while(sub2!=0)
			  {
			      if(s[i]=='0')
			         { s[i]='1';sub2--;sub1--;}
			       i++;   
			  } 	
			  i=0;
			  while(sub1!=0)
			  {
			  	   if(s[i]=='0')
			  	       s[i]='2',sub1--;
			  	     i++;  
			  }
			  cout<<r;
			  cout<<endl;
			  cout<<s;
			  return 1;		 
        }
		 else
	 	{
	 		int i=0;
	 		int r=sub1,t=sub2;
	 		while(sub1!=0)
	 		{
	 			if(s[i]=='0')
	 			   {s[i]='1';sub1--;sub2--;}
		       i++;
		    }
		    i=0;
		    while(sub2!=0)
		    {
		    	if(s[i]=='2')
		    	   s[i]='1',sub2--;
		    	 i++;  
		    }
		    cout<<t;
		    cout<<endl;
		    cout<<s;
		    return 1;
	 	}
	
	 }
	  return 1;
}

bool input()
{
 	 s(n);s(a);s(b);
 	 cin>>s;
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
    return 0;
}

