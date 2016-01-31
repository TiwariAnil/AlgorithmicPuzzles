#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,c[55],i,j,a[55][55],x[2505],y[2505],k=1;
	vector<int> v[5];
	cin>>n;

     for(i=1;i<=n;i++)
	{
 	    cin>>c[i];
	}

     for(i=1;i<=n;i++)
	{
	     for(j=1;j<=c[i];j++) 
          cin>>a[i][j],x[a[i][j]]=i,y[a[i][j]]=j;
	}

     for(i=1;i<=n;i++)
	{
     	for(j=1;j<=c[i];j++)
     	{

            if(a[i][j]!=k)
          	{
               	v[0].push_back(i);
               	v[1].push_back(j);
               	v[2].push_back(x[k]);
               	v[3].push_back(y[k]);
               	x[a[i][j]]=x[k];
               	y[a[i][j]]=y[k];
               	swap(a[i][j],a[x[k]][y[k]]);
          	}
               k++;
     	}
	}
	cout<<v[0].size()<<endl;

	for(i=0;i<v[0].size();i++)
	{
	cout<<v[0][i]<<" "<<v[1][i]<<" "<<v[2][i]<<" "<<v[3][i]<<endl;
	}

	return 0;
}
