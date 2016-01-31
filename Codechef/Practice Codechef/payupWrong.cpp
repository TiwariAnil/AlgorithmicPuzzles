#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x,y,z,i,a[100],d[100],flag=0,n;
    cin>>x;
    while(x--)
    {
        cin>>y>>z;
        i=0;
        while(y--)
        {
            cin>>a[i];
        }
        sort(a,a + i);
        i=1;
        d[0]=z;
        d[1]=z-d[0];
        if(d[0]==0||d[1]==0)
            flag=1;

        while(a[i]<z)
        {
            for(n=1; n<=1+i; n++)
            {
                d[n+i]=d[i]-a[i];
                d[n+i+1]=d[n+i]-a[i];
                if(d[n+i]==0||d[n+i+1]==0)
                    flag=1;
                i++;
            }
        }
        if(flag=1)
            cout<<"Yes";
        else
            cout<<"No";

    }


    return 0;
}
