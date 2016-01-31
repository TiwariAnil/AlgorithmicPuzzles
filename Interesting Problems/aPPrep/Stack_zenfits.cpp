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
#define s(n)                        scanf("%d",&n)
#define ss(n)                       scanf("%s",n)

// Output macros
#define p(n)                        printf("%d",n)
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, op, pp, curr=0;
    long long a[509999], b[509999]={0};
    s(n);
    char ch[5];
    for(int i=0; i<n ; i++){
        ss(ch);
        //return 0;
        if( ch[2] == 's'){
            s(op);
            b[curr]=0;
            a[curr]=op;
            curr++;

        }else if ( ch[2] == 'p'){
            //s(op)
            if(curr!=0)
            {
                if(b[curr]!=0 && curr!=0)
                    b[curr-1]=b[curr];
                else
                    b[curr]=0;
                curr--;
            }

        }else if ( ch[2] == 'c'){
            s(op); s(pp);
            b[op]=pp;

        }else {}
        if(curr==0)
            cout<<"EMPTY\n";
        else
            cout<<a[curr-1]+b[curr-1]<<endl;
    }
    return 0;
}
