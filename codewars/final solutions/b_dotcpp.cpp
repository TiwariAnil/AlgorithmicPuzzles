#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <climits>
#include <map>

using namespace std;

int a[1000010]={0};

void sieve()
{
    a[1]=1;
    a[2]=0;

    for(int i=2;i<1000000;i++)
    {
        if(a[i]==0)
        for(int j = 2; i*j<=1000000;j++)
        {
            a[j*i]  =1;
        }
    }


//    for(int i=1;i<=100;i++)
//    {
//        if(a[i]==0)
//            cout<<i<<" ";
//    }
}


using namespace std;

int main()
{
    sieve();
    int test;
    cin>>test;
    while(test--)
    {

        int n,m,p;
        cin>>n>>m>>p;
        int c[100010];
        int b[100010];
        memset(c,-1, 100000);
        for(int i = 1 ;i <= n;i++)
        {

            cin>>b[i];
        }
        int x,y;
        int count = 1;

//        for(int i=1;i<=n;i++)
//        {
//            cout<<c[i]<<" ";
//        }
        for(int i = 0 ;i < m;i++)
        {
            cin>>x>>y;
            //cout<<"count"<<count<<" x= y="<<x<<" "<<y<<endl;

            //cout<<c[x]<<" "<<c[y]<<endl;
            if(c[x] == -1 &&c[y] == -1)
            {

                c[x] =count;
                c[y] = count;
                count++;
                //cout<<"count"<<count<<" x= y="<<x<<" "<<y<<endl;
            }
            else
            if(c[x] != -1)
            {
                c[y]= c[x];
            }
            else
            if(c[y]!=-1)
            {
                c[x] = c[y];
            }
        }

//        for(int i=1;i<=n;i++)
//        {
//            cout<<c[i]<<endl;
//        }

       // cout<<"here"<<endl;
        for(int i = 1 ; i <= n;i++)
        {
            if(c[i] == -1)
               {
                   c[i] = count;
                   count++;
                }
        }
        //cout<<"count = "<<count<<endl;
        int d[100010];

        //cout<<"here"<<endl;
        memset(d,0,100000);
        for(int i = 1;i <= n;i++)
        {
          //  cout<<"here1 " << d[c[i]]<<" "<<c[i]<<endl;
            d[c[i]] = d[c[i]] + b[i];
        }
        int ans = 0;

        //cout<<"here"<<endl;
        for(int  i = 1 ;i< count;i++)
        {
            if(d[i] != 0)
            {
                int temp = d[i] + p;
               // cout<<temp<<endl;
                if(a[temp] == 0)
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

