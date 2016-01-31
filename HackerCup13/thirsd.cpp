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
#include<sstream>


using namespace std;


int main()	
{  // freopen("test3.txt","r",stdin);
    //freopen("result33.txt","w",stdout);
/*


















*/
    int k,t;
    long int n,a,b,c,r;

    cin>>t;

    for(int i=0;i<t;++i)
    {   long int m[300005];
        cin>>n>>k;
        cin>>a>>b>>c>>r;
        map<long,int>mapp;
        m[0]=a;
        mapp[m[0]]=1;
        for(int j=1;j<k;j++)
        {m[j]=(((b%r)*(m[j-1]%r))%r+c%r)%r;

         mapp[m[j]]++;}


            int j=0;
            for(int p=0;p<=k;p++)
            {

                if(j>=1 && m[j-1]<p && mapp[m[j-1]]==0)
                {
                    mapp[m[j-1]]=1;m[j+k]=m[j-1];mapp[m[j]]--;j++;p--;
                }
                else
                {   if(mapp[p]==0)
                    {mapp[p]=1;m[j+k]=p;mapp[m[j]]--;j++;}
                }
                if(j>=k)break;

            }
           
       long last=m[k + (n-k-1) % (k+1)];

        cout<<"Case #"<<i+1<<":"<<" "<<last;
        if(i<t-1)
        cout<<endl;

    }
}
