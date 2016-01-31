#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int calc(int *a,int m)
{
	if ( *a == -1 )
       return 0 ;
    for ( ; *a != -1 ; a++ )
    {
        if ( *a == m )
           return 1 ;
        if ( *a < m )
           return (calc (a+1, m-(*a)) || calc (a+1, m));
    }
    return 0 ;
}
int main()
{
	int test,m,n,p[21],i;
	cin>>test;
	while(test--)
	{
		//for(i=0;i<=21;i++)
		//	p[i]=0;
		
		cin>>m>>n;
		
		for(i=0;i<m;i++)
		cin>>p[i];
		//for ( i = 0 ; i < m ; i++ )
          //    scanf ( "%d", p+i ) ;
          
		if(n==0)
			cout<<"No\n";	
		sort(p,p+m);
		p[m]=-1;
		//for(i=0;i<=m;i++)
			//cout<<p[i]<<" ";	
		if( calc(p,n) )
			cout<<"Yes\n";
		else
		cout<<"No\n";
	}
	/*	int t, n, m, a[21], i ;
    scanf ( "%d", &t ) ;
    while ( t-- ) 
    {
          scanf ( "%d%d", &n, &m ) ;
          if ( n == 0 )
             printf ( "No\n" ) ;
          for ( i = 0 ; i < n ; i++ )
              scanf ( "%d", a+i ) ;
          sort ( a,a+ n ) ;
          a[n] = -1 ;
          if ( calc ( a, m ) )
             printf ( "Yes\n" ) ;
          else
             printf ( "No\n" ) ;			
		
	}
	*/
	return 0;
}
